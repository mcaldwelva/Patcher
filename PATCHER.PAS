Program Patcher;{v6.7}
{$I-}
Uses CRT,DOS,Drivers;

{$I Patches.Inc}

Var
  PatNum, T, I: Integer;
  Path: String;
  C: Char;
  S: String;
  Done: Boolean;
  Event: TEvent;
  CurSize: Word;


Procedure HideCursor; Assembler;

Asm
  MOV CH,20h
  MOV AH,01h
  INT 10h
End;


Procedure ShowCursor; Assembler;

Asm
  MOV CX,CurSize
  MOV AH,01h
  INT 10h
End;


Procedure Quit;

Begin
  DoneEvents;
  ShowCursor;
  NormVideo;
  ClrScr;
  Halt
End;


Procedure MWrite(S: String);

Begin
  If (MouseWhere.X+1 In [WhereX..WhereX+Length(S)]) And (MouseWhere.Y+1 = WhereY) Then
    HideMouse;
  Write(S);
  ShowMouse
End;


Procedure TextColor(C: Byte);

Begin
  If LastMode = CO80 Then
    TextAttr:= TextAttr AND $F0 + C
End;


Procedure TextBackground(C: Byte);

Begin
  If LastMode = CO80 Then
    TextAttr:= TextAttr AND $0F + C SHL 4
End;


Procedure Scroll(L: Integer);

Var
  RMarker,
  WMarker: Byte;

Begin
  If L < 1 Then
    L:= 1;
  If L > NumPats - 16 Then
    L:= NumPats - 16;
  If T <> L Then
    Begin
      RMarker:= Round(14 * T / (NumPats - 16) + 4);
      WMarker:= Round(14 * L / (NumPats - 16) + 4);
      If RMarker <> WMarker Then
        Begin
          GotoXY(2, RMarker);
          MWrite('ฐ')
        End;
      For I:= L To L + 16 Do
        Begin
          Str(I:3, S);
          GotoXY( 4, 4+I-L);
          MWrite(S);
          GotoXY(10, 4+I-L);
          MWrite(Titles[I].Title);
          GotoXY(46, 4+I-L);
          MWrite(Titles[I].Brand)
        End;
      If RMarker <> WMarker Then
        Begin
          GotoXY(2, WMarker);
          MWrite('ฑ')
        End;
      T:= L
    End
End;


Procedure Title;

Begin
  CheckBreak:= False;
  TextBackground(Blue);
  TextColor(LightGray);
  HideCursor;
  ClrScr;
  InitEvents;
  MouseButtons:= 0;
  PatNum:= 0;
  T:= NumPats - 16;
  Case LastMode Of
    2,
    3 : CurSize:= $0607;
    7 : CurSize:= $0B0C
  End;
  MWrite(' ษออออ');
  MWrite('ออออออออออออออออออออออออออออออออออ');
  MWrite('ออออออออออออออออออออออออออออออออออ');
  MWrite('ออออป ');
  MWrite(' บ                                                                            บ ');
  MWrite(' ฬอออออห');
  MWrite('ออออออออออออออออออออออออออออออออออ');
  MWrite('อห');
  MWrite('ออออออออออออออออออออออออออออออออออ');
  MWrite('น ');
  For I:= 4 To 20 Do
    Begin
      TextColor(LightCyan);
      MWrite(' ฐ');
      TextColor(LightGray);
      MWrite('     บ                              ');
      MWrite('     บ                              ');
      MWrite('    บ ')
    End;
  MWrite(' ฬอออออส');
  MWrite('ออออออออออออออออออออออออออออออออออ');
  MWrite('อส');
  MWrite('ออออออออออออออออออออออออออออออออออ');
  MWrite('น ');
  MWrite(' บ                                                                            บ ');
  MWrite(' ฬออออ');
  MWrite('ออออออออออออออออออออออออออออออออออ');
  MWrite('ออออออออออออออออออออออออออออออออออ');
  MWrite('ออออน ');
  MWrite(' บ                                                                            บ ');
  MWrite(' ศออออ');
  MWrite('ออออออออออออออออออออออออออออออออออ');
  MWrite('ออออออออออออออออออออออออออออออออออ');
  MWrite('ออออผ');
  TextBackground(Cyan);
  TextColor(Blue);
  GotoXY(2, 19);
  MWrite('');
  GotoXY(2, 20);
  MWrite('');
  TextBackground(Blue);
  TextColor(Yellow);
  GotoXY(32, 2);
  MWrite('The Patcher v6.7');
  GotoXY(21, 24);
  MWrite('Copyright (c) 1991-99 Michael Caldwell');
  TextColor(LightCyan);
  Scroll(1)
End;


Procedure PickFile;

Var
  Patch: String[3];

Begin
  Patch:= '';
  TextColor(LightCyan);
  GotoXY(4, 22);
  MWrite('Enter game to patch:                                   press ''ESC'' to quit');
  Repeat
    If Done Then
      Begin
        Patch:= '';
        Done:= False;
        GotoXY(25, 22);
        MWrite('   ')
      End;
    GotoXY(25, 22);
    MWrite(Patch);
    ShowCursor;
    Repeat
      GetMouseEvent(Event)
    Until KeyPressed Or (Event.What = evMouseAuto) Or (Event.What = evMouseDown);
    HideCursor;
    If MouseButtons = mbLeftButton Then
      Begin
        If (MouseWhere.X In [65..67]) And (MouseWhere.Y = 21) Then
          Quit;
        If (MouseWhere.X In [2..77]) And (MouseWhere.Y = 21) Then
          Done:= True;
        If (MouseWhere.X In [2..77]) And (MouseWhere.Y In [3..19]) Then
          Begin
            Done:= Event.Double;
            Str(T+MouseWhere.Y-3, Patch)
          End;
        If (MouseWhere.X = 1) And (MouseWhere.Y = 18) Then
          Scroll(T-1);
        If (MouseWhere.X = 1) And (MouseWhere.Y = 19) Then
          Scroll(T+1);
        If (MouseWhere.X = 1) And (MouseWhere.Y In [3..17]) Then
          Scroll(Round((MouseWhere.Y - 3) * (NumPats - 16) / 14))
      End
    Else
      If MouseButtons > mbLeftButton Then
        Begin
        End
      Else
        Begin
          C:= ReadKey;
          If C = #0 Then
            C:= ReadKey;
          Case C Of
            Chr(8)  : If Length(Patch) > 0 Then
                        Begin
                          Delete(Patch, Length(Patch), 1);
                          MWrite(Char(8) + Char(32) + Char(8))
                        End;
            Chr(13) : Done:= True;
            Chr(27) : Quit;
            #71     : Scroll(1);
            #72     : Scroll(T-1);
            #73     : Scroll(T-17);
            #79     : Scroll(NumPats-16);
            #80     : Scroll(T+1);
            #81     : Scroll(T+17);
            'A'..'Z',
            'a'..'z': Begin
                        I:= 1;
                        While UpCase(C) > Titles[I].Title[1] Do
                          Inc(I);
                        Scroll(I)
                      End;
          Else
            If (C In ['1'..'9']) Or (C = '0') And (PatNum > 0) Then
              If Length(Patch) < 3 Then
                Patch:= Patch + C
          End
        End;
    Val(Patch, PatNum, I)
  Until Done And (1 <= PatNum) And (PatNum <= NumPats)
End;


Procedure GetPath;

Begin
  Path:= '';
  GotoXY(4, 22);
  MWrite('Enter path:                                                               ');
  GotoXY(16, 22);
  Done:= False;
  Repeat
    ShowCursor;
    Repeat
      GetMouseEvent(Event)
    Until KeyPressed Or (Event.What = evMouseDown);
    HideCursor;
    If MouseButtons = mbLeftButton Then
      Begin
        If (MouseWhere.X In [2..77]) And (MouseWhere.Y = 21) Then
          Done:= True
      End
    Else
      If MouseButtons > mbLeftButton Then
        Begin
        End
      Else
        Begin
          C:= ReadKey;
          If C = #0 Then
            C:= ReadKey;
          Case C Of
            Chr(8)  : If Length(Path) > 0 Then
                        Begin
                          Delete(Path, Length(Path), 1);
                          MWrite(Char(8) + Char(32) + Char(8))
                        End;
            Chr(13) : Done:= True;
            Chr(27) : Exit
          Else
            If Length(Path) < 62 Then
              Begin
                Path:= Path + C;
                MWrite(C)
              End
          End
        End
  Until Done;
  If (Length(Path) <> 0) And (Path[Length(Path)] <> ':') And (Path[Length(Path)] <> '\') Then
    Path:= Path + '\'
End;


Procedure PatchFile;

Var
  OFile: File;
  OTime,
  OSize: LongInt;
  PVer : Real;
  Pat  : ^RPatch;

Begin
  GotoXY(4, 22);
  MWrite('Patching                                                                  ');
  GotoXY(13, 22);
  Pat:= Ptr(Seg(Titles), Titles[PatNum].Patch);
  PVer:= Pat^.Ver;
  While (Ofs(Pat^) <> 0) Do
    Begin
      Assign(OFile, Path + Pat^.FName);
      ReSet(OFile, 1);
      OSize:= FileSize(OFile);
      Close(OFile);
      If (IOResult = 0) And (OSize <= Pat^.FSize) Or (Pat^.PNext = 0) Then
        Begin
          PVer:= Pat^.Ver;
          Pat:= Nil
        End
      Else
        Pat:= Ptr(Seg(Titles), Pat^.PNext)
    End;
  Pat:= Ptr(Seg(Titles), Titles[PatNum].Patch);
  While Not (PVer = Pat^.Ver) Do
    Pat:= Ptr(Seg(Titles), Pat^.PNext);
  Str(PVer:0:2, S);
  MWrite('v' + S + ':  ');
  TextColor(White);
  Repeat
    If (PVer = Pat^.Ver) OR (Pat^.Ver = 0) Then
      Begin
        TextColor(White);
        MWrite(Pat^.FName + ' - ');
        Assign(OFile, Path + Pat^.FName);
        If Pat^.FSize = 0 Then
          ReWrite(OFile, 1)
        Else
          ReSet(OFile, 1);
        OSize:= FileSize(OFile);
        GetFTime(OFile, OTime);
        For I:= 1 To MaxP Do
          If Pat^.PTyps[I] <> 0 Then
            Begin
              Seek(OFile, OSize - Pat^.FSize + Pat^.PLocs[I]);
              BlockWrite(OFile, Ptr(Seg(Titles), Pat^.PTyps[I] + 1)^,
                         Byte(Ptr(Seg(Titles), Pat^.PTyps[I])^))
            End;
        SetFTime(OFile, OTime);
        Close(OFile);
        If IOResult > 0 Then
          Begin
            TextColor(LightRed);
            MWrite('Error  ')
          End
        Else
          If OSize <> Pat^.FSize Then
            Begin
              TextColor(LightMagenta);
              MWrite('Size  ')
            End
          Else
            Begin
              TextColor(LightGreen);
              MWrite('Ok  ')
            End;
      End;
    Pat:= Ptr(Seg(Titles), Pat^.PNext);
  Until (Ofs(Pat^) = 0);
  TextColor(White);
  MWrite('done.');
  ShowCursor;
  Repeat
    GetMouseEvent(Event)
  Until KeyPressed Or (Event.What = evMouseDown);
  HideCursor;
  If MouseButtons = mbLeftButton Then
    Begin
      If (MouseWhere.X In [2..77]) And (MouseWhere.Y = 21) Then
        Done:= True
    End
  Else
    If MouseButtons > mbLeftButton Then
      Begin
      End
End;


Begin
  Title;
  Repeat
    PickFile;
    GetPath;
    If Done Then
      PatchFile
  Until 1 = 0
End.
