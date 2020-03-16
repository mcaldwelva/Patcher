Const
  N2        : Array[0..$02] Of Byte = ($02, $90,$90);
  N3        : Array[0..$03] Of Byte = ($03, $90,$90,$90);
  N4        : Array[0..$04] Of Byte = ($04, $90,$90,$90,$90);
  Jmp       : Array[0..$01] Of Byte = ($01, $EB);
  Jnz       : Array[0..$01] Of Byte = ($01, $75);
  Ret       : Array[0..$01] Of Byte = ($01, $C3);
  RetF      : Array[0..$01] Of Byte = ($01, $CB);
  Ret0C     : Array[0..$03] Of Byte = ($03, $C2,$0C,$00);
  BTrue     : Array[0..$01] Of Byte = ($01, $01);
  AX0       : Array[0..$02] Of Byte = ($02, $33,$C0);
  AX1       : Array[0..$03] Of Byte = ($03, $B8,$01,$00);
  Jmp3      : Array[0..$02] Of Byte = ($02, $EB,$03);
  AAWS11    : Array[0..$03] Of Byte = ($03, $E9,$16,$02);
  AAWS12    : Array[0..$03] Of Byte = ($03, $E9,$F8,$01);
  AAWS2     : Array[0..$02] Of Byte = ($02, $EB,$3D);
  AD2400C   : Array[0..$04] Of Byte = ($04, $22,$03,$60,$05);
  AD2400S   : Array[0..$04] Of Byte = ($04, $A2,$1B,$00,$08);
  AutoDuelC : Array[0..$04] Of Byte = ($04, $23,$03,$C5,$0A);
  AutoDuelS : Array[0..$04] Of Byte = ($04, $E7,$16,$00,$08);
  Batman    : Array[0..$03] Of Byte = ($03, $54,$EB,$16);
  BatlHawks : Array[0..$03] Of Byte = ($03, $E9,$1C,$02);
  BC2       : Array[0..$03] Of Byte = ($03, $E9,$A9,$03);
  Carl      : Array[0..$03] Of Byte = ($03, $E9,$39,$08);
  CastlesA  : Array[0..$03] Of Byte = ($03, $E9,$84,$01);
  CastlesB  : Array[0..$03] Of Byte = ($03, $E9,$8D,$01);
  CB1       : Array[0..$0C] Of Byte = ($0C, $2E,$8C,$1E,$E6,$09,$9A,$2A,$11,$00,$00,$EB,$0B);
  CB2       : Array[0..$21] Of Byte = ($21, $A8,$01,$74,$0A,$AC,$32,$E4,$8B,$C8,$AC,$32,$E4,$EB,$04,$AD,$8B,$C8,$AD,$8B,
                                            $D8,$AC,$32,$E4,$81,$FE,$97,$98,$75,$03,$BE,$9A,$9E,$CB);
  Centurion : Array[0..$03] Of Byte = ($03, $E9,$8C,$01);
  CG2       : Array[0..$03] Of Byte = ($03, $E9,$EA,$00);
  Contra    : Array[0..$02] Of Byte = ($02, $30,$2A);
  Crossbow  : Array[0..$02] Of Byte = ($02, $EB,$45);
  DawnRaid  : Array[0..$03] Of Byte = ($03, $E9,$6B,$01);
  DTm       : Array[0..$03] Of Byte = ($03, $E9,$6E,$04);
  DTv       : Array[0..$03] Of Byte = ($03, $E9,$11,$05);
  Empire    : Array[0..$09] Of Byte = ($09, $C7,$06,$96,$63,$00,$00,$E9,$7D,$01);
  FBa1      : Array[0..$03] Of Byte = ($03, $E9,$56,$03);
  FBa2      : Array[0..$03] Of Byte = ($03, $E9,$9D,$02);
  FBf1      : Array[0..$03] Of Byte = ($03, $E9,$43,$03);
  FBf2      : Array[0..$03] Of Byte = ($03, $E9,$A6,$02);
  FBs1      : Array[0..$03] Of Byte = ($03, $E9,$5A,$03);
  FBs2      : Array[0..$03] Of Byte = ($03, $E9,$A5,$02);
  FO1       : Array[0..$03] Of Byte = ($03, $B8,$95,$59);
  FO2       : Array[0..$03] Of Byte = ($03, $B9,$C8,$70);
  FO3       : Array[0..$03] Of Byte = ($03, $E9,$9E,$00);
  GE        : Array[0..$03] Of Byte = ($03, $E9,$42,$03);
  GPC       : Array[0..$03] Of Byte = ($03, $E9,$49,$01);
  GR        : Array[0..$02] Of Byte = ($02, $CC,$7A);
  Heroes    : Array[0..$03] Of Byte = ($03, $E9,$8F,$00);
  IFA1      : Array[0..$0A] Of Byte = ($0A, $8C,$1E,$2E,$00,$FF,$1E,$2C,$00,$90,$90);
  IFA2      : Array[0..$26] Of Byte = ($26, $8B,$1E,$0E,$6D,$D1,$E3,$80,$3E,$46,$6E,$1A,$75,$12,$83,$3E,$8A,$6E,$0C,$90,
                                            $75,$0A,$81,$FB,$78,$03,$75,$04,$B8,$01,$00,$90,$89,$87,$E0,$71,$CB,$08,$00);
  KOB       : Array[0..$04] Of Byte = ($04, $A3,$F8,$08,$C3);
  Krynn     : Array[0..$03] Of Byte = ($03, $E9,$FC,$02);
  LOV       : Array[0..$06] Of Byte = ($06, $C6,$06,$A1,$03,$02,$C3);
  LoreC     : Array[0..$04] Of Byte = ($04, $70,$D8,$00,$00);
  LoreS     : Array[0..$04] Of Byte = ($04, $E7,$1D,$00,$08);
  LND       : Array[0..$02] Of Byte = ($02, $90,$A3);
  Mechwar   : Array[0..$03] Of Byte = ($03, $E9,$73,$01);
  MK        : Array[0..$05] Of Byte = ($05, $E9,$81,$00,$00,$00);
  MK2       : Array[0..$05] Of Byte = ($05, $E9,$75,$00,$00,$00);
  MM1       : Array[0..$02] Of Byte = ($02, $EB,$37);
  MNinja    : Array[0..$03] Of Byte = ($03, $E9,$FC,$00);
  MoebiusC  : Array[0..$04] Of Byte = ($04, $23,$03,$C0,$0A);
  MoebiusS  : Array[0..$04] Of Byte = ($04, $A2,$1B,$00,$08);
  Oblivion  : Array[0..$02] Of Byte = ($02, $EB,$09);
  Platoon   : Array[0..$03] Of Byte = ($03, $E9,$30,$01);
  Populous  : Array[0..$06] Of Byte = ($06, $B8,$05,$00,$E9,$2E,$05);
  RSR       : Array[0..$06] Of Byte = ($06, $C4,$F3,$9C,$C4,$11,$90);
  Rushn     : Array[0..$03] Of Byte = ($03, $E9,$B6,$00);
  Silver    : Array[0..$03] Of Byte = ($03, $E9,$C9,$01);
  Ski       : Array[0..$03] Of Byte = ($03, $E9,$6A,$01);
  StarTrek  : Array[0..$03] Of Byte = ($03, $A1,$84,$01);
  SWOTL     : Array[0..$03] Of Byte = ($03, $E9,$0D,$FF);
  SQIV      : Array[0..$01] Of Byte = ($01, $04);
  TD2       : Array[0..$03] Of Byte = ($03, $E9,$25,$01);
  Treasure  : Array[0..$03] Of Byte = ($03, $E9,$10,$02);
  UFO       : Array[0..$03] Of Byte = ($03, $E9,$7B,$05);
  Ultima1C  : Array[0..$04] Of Byte = ($04, $00,$00,$00,$00);
  Ultima1S  : Array[0..$04] Of Byte = ($04, $72,$10,$00,$14);
  Ultima2C  : Array[0..$04] Of Byte = ($04, $00,$01,$00,$00);
  Ultima2S  : Array[0..$04] Of Byte = ($04, $00,$00,$00,$00);
  UltimaII  : Array[0..$0F] Of Byte = ($0F, $8C,$C8,$05,$25,$07,$8E,$D8,$05,$10,$03,$8E,$D0,$BC,$00,$01);
  Ultima4C  : Array[0..$04] Of Byte = ($04, $12,$00,$72,$17);
  Ultima4S  : Array[0..$04] Of Byte = ($04, $37,$18,$80,$00);
  Ultima5C  : Array[0..$04] Of Byte = ($04, $22,$03,$2D,$07);
  Ultima5S  : Array[0..$04] Of Byte = ($04, $3B,$1B,$00,$08);
  Vette     : Array[0..$03] Of Byte = ($03, $E9,$E8,$00);
  Mindscape : Array[0..$3F] Of Byte = ($3F, $44,$45,$4D,$30,$31,$32,$33,$34,$35,$36,$37,$38,$39,$30,$31,$60,$44,$45,$4D,$30,
               $31,$32,$33,$34,$35,$36,$37,$38,$39,$30,$31,$60,$44,$45,$4D,$30,$31,$32,$33,$34,$35,$36,$37,$38,$39,$30,$31,$60,
               $44,$45,$4D,$30,$31,$32,$33,$34,$35,$36,$37,$38,$39,$30,$31);
  BC        : Array[0..$80] Of Byte = ($80, $35,$5F,$AE,$42,$9F,$FE,$6C,$22,$21,$3F,$28,$72,$39,$1D,$91,$FE,$0F,$FE,$78,$22,
               $CF,$43,$3B,$29,$A5,$FB,$D1,$D4,$55,$B6,$72,$F5,$75,$77,$E2,$3A,$49,$C2,$59,$07,$3A,$D5,$11,$7C,$F4,$F3,$6C,$95,
               $1A,$DA,$C1,$70,$A7,$56,$C3,$A8,$E4,$EE,$8E,$DF,$00,$BB,$4F,$5A,$50,$59,$8E,$C6,$24,$F5,$19,$19,$43,$86,$8F,$92,
               $04,$18,$88,$E1,$0A,$43,$5D,$63,$9B,$BA,$99,$85,$9C,$FE,$FB,$49,$2B,$32,$26,$E7,$DA,$09,$E7,$8A,$85,$DB,$21,$3A,
               $D0,$D7,$58,$D9,$3F,$52,$D7,$47,$F2,$3C,$80,$A0,$FD,$B3,$30,$A4,$61,$B0,$CC,$37,$AB,$DF,$EB,$FE);
  KQ2       : Array[0..$80] Of Byte = ($80, $03,$56,$5F,$9C,$54,$35,$5F,$AE,$42,$9F,$FE,$6C,$22,$21,$3F,$28,$72,$39,$1D,$91,
               $FE,$0F,$FE,$78,$22,$CF,$43,$3B,$29,$A5,$FB,$D1,$D4,$55,$B6,$72,$F5,$75,$77,$E2,$3A,$49,$C2,$59,$07,$3A,$D5,$11,
               $7C,$F4,$F3,$6C,$95,$1A,$DA,$C1,$70,$A7,$56,$C3,$A8,$E4,$EE,$8E,$DF,$00,$BB,$4F,$5A,$50,$59,$8E,$C6,$24,$F5,$19,
               $19,$43,$86,$8F,$92,$04,$18,$88,$E1,$0A,$43,$5D,$63,$9B,$BA,$99,$85,$9C,$FE,$FB,$49,$2B,$32,$26,$E7,$DA,$09,$E7,
               $8A,$85,$DB,$21,$3A,$D0,$D7,$58,$D9,$3F,$52,$D7,$47,$F2,$3C,$80,$A0,$FD,$B3,$30,$A4,$61,$B0,$CC);
  Larry     : Array[0..$80] Of Byte = ($80, $D5,$AA,$4E,$D6,$BE,$3D,$8C,$25,$4C,$A1,$10,$03,$56,$5F,$9C,$54,$35,$5F,$AE,$42,
               $9F,$FE,$6C,$22,$21,$3F,$28,$72,$39,$1D,$91,$FE,$0F,$FE,$78,$22,$CF,$43,$3B,$29,$A5,$FB,$D1,$D4,$55,$B6,$72,$F5,
               $75,$77,$E2,$3A,$49,$C2,$59,$07,$3A,$D5,$11,$7C,$F4,$F3,$6C,$95,$1A,$DA,$C1,$70,$A7,$56,$C3,$A8,$E4,$EE,$8E,$DF,
               $00,$BB,$4F,$5A,$50,$59,$8E,$C6,$24,$F5,$19,$19,$43,$86,$8F,$92,$04,$18,$88,$E1,$0A,$43,$5D,$63,$9B,$BA,$99,$85,
               $9C,$FE,$FB,$49,$2B,$32,$26,$E7,$DA,$09,$E7,$8A,$85,$DB,$21,$3A,$D0,$D7,$58,$D9,$3F,$52,$D7,$47);
  Thexder   : Array [0..$80] Of Byte = ($80, $43,$B7,$45,$5D,$97,$49,$2F,$F2,$D8,$12,$7B,$0E,$C0,$3A,$D2,$65,$DE,$85,$64,$41,
               $22,$51,$01,$D4,$03,$B9,$D5,$AA,$4E,$D6,$BE,$3D,$8C,$25,$4C,$A1,$10,$03,$56,$5F,$9C,$54,$35,$5F,$AE,$42,$9F,$FE,
               $6C,$22,$21,$3F,$28,$72,$39,$1D,$91,$FE,$0F,$FE,$78,$22,$CF,$43,$3B,$29,$A5,$FB,$D1,$D4,$55,$B6,$72,$F5,$75,$77,
               $E2,$3A,$49,$C2,$59,$07,$3A,$D5,$11,$7C,$F4,$F3,$6C,$95,$1A,$DA,$C1,$70,$A7,$56,$C3,$A8,$E4,$EE,$8E,$DF,$00,$BB,
               $4F,$5A,$50,$59,$8E,$C6,$24,$F5,$19,$19,$43,$86,$8F,$92,$04,$18,$88,$E1,$0A,$43,$5D,$63,$9B,$BA);
  SQ2       : Array [0..$80] Of Byte = ($80, $91,$FE,$0F,$FE,$78,$22,$CF,$43,$3B,$29,$A5,$FB,$D1,$D4,$55,$B6,$72,$F5,$75,$77,
               $E2,$3A,$49,$C2,$59,$07,$3A,$D5,$11,$7C,$F4,$F3,$6C,$95,$1A,$DA,$C1,$70,$A7,$56,$C3,$A8,$E4,$EE,$8E,$DF,$00,$BB,
               $4F,$5A,$50,$59,$8E,$C6,$24,$F5,$19,$19,$43,$86,$8F,$92,$04,$18,$88,$E1,$0A,$43,$5D,$63,$9B,$BA,$99,$85,$9C,$FE,
               $FB,$49,$2B,$32,$26,$E7,$DA,$09,$E7,$8A,$85,$DB,$21,$3A,$D0,$D7,$58,$D9,$3F,$52,$D7,$47,$F2,$3C,$80,$A0,$FD,$B3,
               $30,$A4,$61,$B0,$CC,$37,$AB,$DF,$EB,$FE,$26,$8C,$20,$29,$BE,$B9,$E4,$50,$74,$4B,$1E,$75,$78,$63);
  AirCom0   : Array [0..$82] Of Byte = ($82, $BC,$FE,$01,$BB,$20,$00,$B4,$4A,$CD,$21,$B8,$1A,$35,$CD,$21,$89,$1E,$68,$01,$8C,
               $06,$6A,$01,$BA,$49,$01,$B8,$1A,$25,$CD,$21,$0E,$07,$8C,$0E,$7A,$01,$8C,$0E,$7E,$01,$8C,$0E,$82,$01,$BA,$6C,$01,
               $BB,$76,$01,$B8,$00,$4B,$CD,$21,$2E,$C5,$16,$68,$01,$B8,$1A,$25,$CD,$21,$B8,$00,$4C,$14,$00,$CD,$21,$55,$8B,$EC,
               $1E,$8E,$5E,$0A,$81,$3E,$3F,$01,$9A,$B6,$75,$0D,$C7,$06,$3F,$01,$EB,$03,$2E,$C7,$06,$49,$01,$EB,$1C,$1F,$5D,$EA,
               $00,$00,$00,$00,$59,$45,$41,$47,$45,$52,$2E,$45,$58,$45,$00,$00,$80,$00,$00,$00,$5C,$00,$00,$00,$6C,$00);
  AirCom1   : Array [0..$82] Of Byte = ($82, $BC,$FE,$01,$BB,$20,$00,$B4,$4A,$CD,$21,$B8,$1A,$35,$CD,$21,$89,$1E,$68,$01,$8C,
               $06,$6A,$01,$BA,$49,$01,$B8,$1A,$25,$CD,$21,$0E,$07,$8C,$0E,$7A,$01,$8C,$0E,$7E,$01,$8C,$0E,$82,$01,$BA,$6C,$01,
               $BB,$76,$01,$B8,$00,$4B,$CD,$21,$2E,$C5,$16,$68,$01,$B8,$1A,$25,$CD,$21,$B8,$00,$4C,$14,$00,$CD,$21,$55,$8B,$EC,
               $1E,$8E,$5E,$0A,$81,$3E,$53,$01,$9A,$B4,$75,$0D,$C7,$06,$53,$01,$EB,$03,$2E,$C7,$06,$49,$01,$EB,$1C,$1F,$5D,$EA,
               $00,$00,$00,$00,$59,$45,$41,$47,$45,$52,$2E,$45,$58,$45,$00,$00,$80,$00,$00,$00,$5C,$00,$00,$00,$6C,$00);
  MM3       : Array [0..$8E] Of Byte = ($8E, $BC,$FE,$01,$BB,$20,$00,$B4,$4A,$CD,$21,$B8,$21,$35,$CD,$21,$89,$1E,$77,$01,$8C,
               $06,$79,$01,$BA,$49,$01,$B8,$21,$25,$CD,$21,$0E,$07,$8C,$0E,$86,$01,$8C,$0E,$8A,$01,$8C,$0E,$8E,$01,$BA,$7B,$01,
               $BB,$82,$01,$B8,$00,$4B,$CD,$21,$2E,$C5,$16,$77,$01,$B8,$21,$25,$CD,$21,$B8,$00,$4C,$14,$00,$CD,$21,$55,$8B,$EC,
               $1E,$81,$7E,$02,$EE,$03,$75,$20,$8E,$5E,$04,$81,$3E,$5A,$04,$9A,$43,$75,$15,$C7,$06,$5A,$04,$EB,$03,$8E,$5E,$30,
               $C6,$06,$B1,$01,$EB,$2E,$C7,$06,$49,$01,$EB,$2B,$1F,$5D,$EA,$00,$00,$00,$00,$4D,$4D,$33,$2E,$45,$58,$45,$00,$00,
               $80,$00,$00,$00,$5C,$00,$00,$00,$6C,$00);
  Stunts    : Array [0..$9A] Of Byte = ($9A, $BC,$0E,$02,$BB,$21,$00,$B4,$4A,$CD,$21,$B8,$21,$35,$CD,$21,$89,$1E,$80,$01,$8C,
               $06,$82,$01,$BA,$49,$01,$B8,$21,$25,$CD,$21,$0E,$07,$8C,$0E,$92,$01,$8C,$0E,$96,$01,$8C,$0E,$9A,$01,$BA,$84,$01,
               $BB,$8E,$01,$B8,$00,$4B,$CD,$21,$2E,$C5,$16,$80,$01,$B8,$21,$25,$CD,$21,$B8,$00,$4C,$14,$00,$CD,$21,$80,$FC,$1A,
               $75,$31,$55,$8B,$EC,$1E,$50,$8B,$46,$04,$2D,$F1,$1D,$8E,$D8,$81,$3E,$D4,$43,$55,$8B,$75,$19,$C7,$06,$D4,$43,$C6,
               $06,$A1,$9F,$45,$A3,$D6,$43,$C7,$06,$D8,$43,$01,$CB,$2E,$C7,$06,$49,$01,$EB,$34,$58,$1F,$5D,$EA,$00,$00,$00,$00,
               $53,$54,$55,$4E,$54,$53,$2E,$43,$4F,$4D,$00,$00,$80,$00,$00,$00,$5C,$00,$00,$00,$6C,$00);
  Fight     : Array [0..$7B] Of Byte = ($7B, $BC,$EE,$01,$BB,$1F,$00,$B4,$4A,$CD,$21,$B8,$21,$35,$CD,$21,$89,$1E,$62,$01,$8C,
               $06,$64,$01,$BA,$49,$01,$B8,$21,$25,$CD,$21,$0E,$07,$8C,$0E,$73,$01,$8C,$0E,$77,$01,$8C,$0E,$7B,$01,$BA,$66,$01,
               $BB,$6F,$01,$B8,$00,$4B,$CD,$21,$2E,$C5,$16,$62,$01,$B8,$21,$25,$CD,$21,$B8,$00,$4C,$14,$00,$CD,$21,$3D,$00,$25,
               $75,$13,$81,$FA,$F8,$09,$75,$0D,$26,$C6,$06,$3A,$04,$00,$2E,$C7,$06,$49,$01,$EB,$16,$EA,$00,$00,$00,$00,$46,$49,
               $47,$48,$54,$2E,$43,$4F,$4D,$00,$00,$80,$00,$00,$00,$5C,$00,$00,$00,$6C,$00);
  Hillsfar  : Array [0..$83] Of Byte = ($83, $BC,$FE,$01,$BB,$20,$00,$B4,$4A,$CD,$21,$B8,$21,$35,$CD,$21,$89,$1E,$6B,$01,$8C,
               $06,$6D,$01,$BA,$49,$01,$B8,$21,$25,$CD,$21,$0E,$07,$8C,$0E,$7B,$01,$8C,$0E,$7F,$01,$8C,$0E,$83,$01,$BA,$6F,$01,
               $BB,$77,$01,$B8,$00,$4B,$CD,$21,$2E,$C5,$16,$6B,$01,$B8,$21,$25,$CD,$21,$B8,$00,$4C,$14,$00,$CD,$21,$80,$FC,$06,
               $75,$1C,$55,$8B,$EC,$1E,$8E,$5E,$12,$80,$3E,$3A,$1F,$55,$75,$0C,$C6,$06,$3A,$1F,$CB,$2E,$C7,$06,$49,$01,$EB,$1F,
               $1F,$5D,$EA,$00,$00,$00,$00,$4D,$41,$49,$4E,$2E,$45,$58,$45,$00,$00,$80,$00,$00,$00,$5C,$00,$00,$00,$6C,$00);
  Ultima6   : Array [0..$EF] Of Byte = ($EF, $BC,$5E,$02,$BB,$26,$00,$B4,$4A,$CD,$21,$B8,$21,$35,$CD,$21,$89,$1E,$93,$01,$8C,
               $06,$95,$01,$BA,$49,$01,$B8,$21,$25,$CD,$21,$0E,$07,$8C,$0E,$E7,$01,$8C,$0E,$EB,$01,$8C,$0E,$EF,$01,$BA,$D8,$01,
               $BB,$E3,$01,$B8,$00,$4B,$CD,$21,$2E,$C5,$16,$93,$01,$B8,$21,$25,$CD,$21,$B8,$00,$4C,$14,$00,$CD,$21,$80,$FC,$3D,
               $75,$44,$1E,$51,$53,$8B,$DA,$B9,$0C,$00,$81,$3F,$65,$2E,$75,$0D,$80,$7F,$02,$61,$75,$07,$2E,$FE,$06,$E3,$01,$EB,
               $26,$43,$E2,$EA,$2E,$80,$3E,$E3,$01,$00,$74,$1B,$8B,$DA,$B9,$0C,$00,$81,$3F,$74,$2E,$75,$06,$80,$7F,$02,$61,$74,
               $12,$43,$E2,$F1,$2E,$C7,$06,$49,$01,$EB,$47,$5B,$59,$1F,$EA,$00,$00,$00,$00,$33,$C9,$49,$33,$DB,$81,$3F,$F7,$EF,
               $75,$07,$81,$7F,$02,$65,$6E,$74,$1A,$43,$E2,$F0,$2E,$80,$3E,$E4,$01,$02,$74,$D4,$2E,$FE,$06,$E4,$01,$8C,$D9,$81,
               $C1,$00,$10,$8E,$D9,$EB,$D4,$B9,$00,$06,$81,$3F,$F7,$EF,$75,$07,$43,$43,$C6,$07,$00,$EB,$F3,$43,$E2,$F0,$EB,$D4,
               $55,$4C,$54,$49,$4D,$41,$36,$2E,$45,$58,$45,$00,$00,$80,$00,$00,$00,$5C,$00,$00,$00,$6C,$00);
  WGH2      : Array [0..$9F] Of Byte = ($9F, $BC,$0E,$02,$BB,$21,$00,$B4,$4A,$CD,$21,$B8,$10,$35,$CD,$21,$89,$1E,$88,$01,$8C,
               $06,$8A,$01,$BA,$49,$01,$B8,$10,$25,$CD,$21,$0E,$07,$8C,$0E,$97,$01,$8C,$0E,$9B,$01,$8C,$0E,$9F,$01,$BA,$8C,$01,
               $BB,$93,$01,$B8,$00,$4B,$CD,$21,$2E,$C5,$16,$88,$01,$B8,$10,$25,$CD,$21,$B8,$00,$4C,$14,$00,$CD,$21,$55,$8B,$EC,
               $53,$1E,$83,$7E,$0E,$1B,$75,$30,$8E,$5E,$10,$8B,$5E,$0E,$81,$7F,$01,$CE,$45,$75,$23,$8E,$5F,$12,$BB,$02,$11,$81,
               $3F,$C7,$06,$75,$17,$81,$7F,$02,$1B,$89,$75,$10,$C7,$47,$06,$E9,$C2,$C6,$47,$08,$04,$2E,$C7,$06,$49,$01,$EB,$3C,
               $1F,$5B,$5D,$EA,$00,$00,$00,$00,$48,$4B,$59,$2E,$45,$58,$45,$00,$00,$80,$00,$00,$00,$5C,$00,$00,$00,$6C,$00);
  Turbo     : Array [0..$83] Of Byte = ($83, $BC,$FE,$01,$BB,$20,$00,$B4,$4A,$CD,$21,$B8,$21,$35,$CD,$21,$89,$1E,$68,$01,$8C,
               $06,$6A,$01,$BA,$49,$01,$B8,$21,$25,$CD,$21,$0E,$07,$8C,$0E,$7B,$01,$8C,$0E,$7F,$01,$8C,$0E,$83,$01,$BA,$6C,$01,
               $BB,$77,$01,$B8,$00,$4B,$CD,$21,$2E,$C5,$16,$68,$01,$B8,$21,$25,$CD,$21,$B8,$00,$4C,$14,$00,$CD,$21,$80,$FC,$0A,
               $75,$19,$C7,$06,$03,$00,$8B,$02,$C7,$06,$89,$02,$03,$00,$C6,$06,$8B,$02,$0D,$2E,$C7,$06,$49,$01,$EB,$1C,$CF,$EA,
               $00,$00,$00,$00,$54,$4F,$55,$54,$52,$55,$4E,$2E,$45,$58,$45,$00,$00,$80,$00,$00,$00,$5C,$00,$00,$00,$6C,$00);
  Budo      : Array [0..$90] Of Byte = ($90, $BC,$0E,$02,$BB,$21,$00,$B4,$4A,$CD,$21,$B8,$21,$35,$CD,$21,$89,$1E,$78,$01,$8C,
               $06,$7A,$01,$BA,$49,$01,$B8,$21,$25,$CD,$21,$0E,$07,$8C,$0E,$88,$01,$8C,$0E,$8C,$01,$8C,$0E,$90,$01,$BA,$7C,$01,
               $BB,$84,$01,$B8,$00,$4B,$CD,$21,$2E,$C5,$16,$78,$01,$B8,$21,$25,$CD,$21,$B8,$00,$4C,$14,$00,$CD,$21,$80,$FC,$FF,
               $75,$04,$BB,$FF,$00,$CF,$55,$8B,$EC,$1E,$50,$8B,$46,$02,$3D,$F0,$1F,$75,$15,$8E,$5E,$04,$C7,$06,$96,$2E,$B8,$00,
               $C6,$06,$98,$2E,$00,$2E,$C7,$06,$52,$01,$EB,$23,$58,$1F,$5D,$EA,$00,$00,$00,$00,$42,$55,$44,$4F,$2E,$43,$4F,$4D,
               $00,$00,$80,$00,$00,$00,$5C,$00,$00,$00,$6C,$00);
  Alone     : Array [0..$94] Of Byte = ($94, $BC,$8E,$02,$BB,$29,$00,$B4,$4A,$CD,$21,$B8,$21,$35,$CD,$21,$89,$1E,$7B,$01,$8C,
               $06,$7D,$01,$BA,$49,$01,$B8,$21,$25,$CD,$21,$0E,$07,$8C,$0E,$8C,$01,$8C,$0E,$90,$01,$8C,$0E,$94,$01,$BA,$7F,$01,
               $BB,$88,$01,$B8,$00,$4B,$CD,$21,$2E,$C5,$16,$7B,$01,$B8,$21,$25,$CD,$21,$B8,$00,$4C,$14,$00,$CD,$21,$1E,$50,$8C,
               $D8,$2D,$E4,$16,$8E,$D8,$81,$3E,$83,$07,$55,$8B,$75,$1E,$C7,$06,$83,$07,$C7,$06,$C7,$06,$85,$07,$A0,$05,$C7,$06,
               $87,$07,$01,$00,$C6,$06,$89,$07,$CB,$2E,$C7,$06,$49,$01,$EB,$2F,$58,$1F,$EA,$00,$00,$00,$00,$41,$4C,$4F,$4E,$45,
               $2E,$43,$4F,$4D,$00,$00,$80,$00,$00,$00,$5C,$00,$00,$00,$6C,$00);
  FW        : Array [0..$AD] Of Byte = ($AD, $BC,$FE,$01,$BB,$20,$00,$B4,$4A,$CD,$21,$B8,$21,$35,$CD,$21,$89,$1E,$96,$01,$8C,
               $06,$98,$01,$BA,$49,$01,$B8,$21,$25,$CD,$21,$0E,$07,$8C,$0E,$A5,$01,$8C,$0E,$A9,$01,$8C,$0E,$AD,$01,$BA,$9B,$01,
               $BB,$A1,$01,$B8,$00,$4B,$CD,$21,$2E,$C5,$16,$96,$01,$B8,$21,$25,$CD,$21,$B8,$00,$4C,$14,$00,$CD,$21,$55,$89,$E5,
               $1E,$8E,$5E,$04,$81,$3E,$6C,$30,$CD,$21,$74,$15,$81,$3E,$EB,$45,$83,$C4,$75,$33,$C6,$06,$EB,$45,$90,$C7,$06,$EC,
               $45,$CD,$21,$EB,$26,$81,$7E,$02,$6E,$30,$75,$1F,$2E,$FE,$0E,$9A,$01,$75,$12,$C7,$06,$6B,$30,$83,$C4,$C6,$06,$6D,
               $30,$04,$2E,$C7,$06,$49,$01,$EB,$4A,$B8,$01,$00,$1F,$5D,$CF,$1F,$5D,$EA,$00,$00,$00,$00,$02,$46,$57,$2E,$45,$58,
               $45,$00,$00,$80,$00,$00,$00,$5C,$00,$00,$00,$6C,$00);


Const
  MaxP      = 2;

Type
  RPatch    = Record
                Ver  : Real;
                FName: String[12];
                FSize: LongInt;
                PLocs: Array[1..MaxP] of LongInt;
                PTyps: Array[1..MaxP] of Word;
                PNext: Word
              End;

Const
  p2400AD   : RPatch = (
                Ver  : 0;
                FName: '2400AD.EXE';
                FSize: 26496;
                PLocs: ($E,$14);
                PTyps: (Ofs(AD2400S),Ofs(AD2400C));
                PNext: 0);
  p4x4ORR   : RPatch = (
                Ver  : 0;
                FName: 'FRONT.EXE';
                FSize: 24540;
                PLocs: ($1F5A,0);
                PTyps: (Ofs(Ret),0);
                PNext: 0);
  p4DSB     : RPatch = (
                Ver  : 1.0;
                FName: 'LFIGHT.COM';
                FSize: 0;
                PLocs: (0,0);
                PTyps: (Ofs(Fight),0);
                PNext: 0);
  p4Inch    : RPatch = (
                Ver  : 0;
                FName: '4TH.EXE';
                FSize: 90367;
                PLocs: ($2928,$292A);
                PTyps: (Ofs(AX0),Ofs(Ret));
                PNext: 0);
  p688AS    : RPatch = (
                Ver  : 0;
                FName: 'GAME.EXE';
                FSize: 104572;
                PLocs: ($7CA,0);
                PTyps: (Ofs(BTrue),0);
                PNext: 0);
  pAFT      : RPatch = (
                Ver  : 1.2;
                FName: 'AFT.EXE';
                FSize: 95744;
                PLocs: ($CB1,0);
                PTyps: (Ofs(Ret),0);
                PNext: 0);
  pAOEa     : RPatch = (
                Ver  : 1.01;
                FName: 'EMPIRES.EXE';
                FSize: 1622016;
                PLocs: ($D7617,0);
                PTyps: (Ofs(N2),0);
                PNext: 0);
  pAOEb     : RPatch = (
                Ver  : 1.02;
                FName: 'EMPIRES.EXE';
                FSize: 1622016;
                PLocs: ($E83D7,0);
                PTyps: (Ofs(N2),0);
                PNext: Ofs(pAOEa));
  pAOEr     : RPatch = (
                Ver  : 1.02;
                FName: 'EMPIRESX.EXE';
                FSize: 1513984;
                PLocs: ($19090,0);
                PTyps: (Ofs(N2),0);
                PNext: Ofs(pAOEb));
  pAOE      : RPatch = (
                Ver  : 1.0;
                FName: 'EMPIRES.EXE';
                FSize: 1605632;
                PLocs: ($D5967,0);
                PTyps: (Ofs(N2),0);
                PNext: Ofs(pAOEr));
  pAOEII      : RPatch = (
                Ver  : 0.09;
                FName: 'EMPIRES2.EXE';
                FSize: 2097152;
                PLocs: ($1E467,0);
                PTyps: (Ofs(N2),0);
                PNext: 0);
  pAlone    : RPatch = (
                Ver  : 0;
                FName: 'LALONE.COM';
                FSize: 0;
                PLocs: (0,0);
                PTyps: (Ofs(Alone),0);
                PNext: 0);
  pATail    : RPatch = (
                Ver  : 0;
                FName: 'INSTALL.EXE';
                FSize: 60645;
                PLocs: ($5055,$66DC);
                PTyps: (Ofs(RetF),Ofs(Jmp));
                PNext: 0);
  pAAW      : RPatch = (
                Ver  : 0;
                FName: 'WAR.EXE';
                FSize: 99840;
                PLocs: ($8AC6,$8AC9);
                PTyps: (Ofs(AX1),Ofs(Ret));
                PNext: 0);
  pAAWS     : RPatch = (
                Ver  : 0;
                FName: 'WAS.EXE';
                FSize: 162304;
                PLocs: ($7AAE,0);
                PTyps: (Ofs(N3),0);
                PNext: 0);
  pAAWAv1   : RPatch = (
                Ver  : 0.01;
                FName: 'SKIES.EXE';
                FSize: 407365;
                PLocs: ($25D4F,$25F78);
                PTyps: (Ofs(AAWS11),Ofs(AAWS2));
                PNext: 0);
  pAAWAv2   : RPatch = (
                Ver  : 0.02;
                FName: 'SKIES.EXE';
                FSize: 392945;
                PLocs: ($23EEB,$240F6);
                PTyps: (Ofs(AAWS12),Ofs(AAWS2));
                PNext: Ofs(pAAWAv1));
  pPool256  : RPatch = (
                Ver  : 0;
                FName: 'POOL256.EXE';
                FSize: 522228;
                PLocs: ($1480A,0);
                PTyps: (Ofs(Oblivion),0);
                PNext: 0);
  pPool     : RPatch = (
                Ver  : 0;
                FName: 'POOL.EXE';
                FSize: 478836;
                PLocs: ($148D8,0);
                PTyps: (Ofs(Oblivion),0);
                PNext: Ofs(pPool256));
  pAFox16   : RPatch = (
                Ver  : 0;
                FName: 'AFOX16.EXE';
                FSize: 68992;
                PLocs: ($3A7D,$3A7F);
                PTyps: (Ofs(AX0),Ofs(Ret));
                PNext: 0);
  pAFox     : RPatch = (
                Ver  : 0;
                FName: 'AFOX.EXE';
                FSize: 69088;
                PLocs: ($3D89,$3D8B);
                PTyps: (Ofs(AX0),Ofs(Ret));
                PNext: Ofs(pAFox16));
  pArmada   : RPatch = (
                Ver  : 0;
                FName: '2525.EXE';
                FSize: 271280;
                PLocs: ($AEE6,$AEE9);
                PTyps: (Ofs(AX1),Ofs(RetF));
                PNext: 0);
  pAutoDuel : RPatch = (
                Ver  : 0;
                FName: 'AUTODUEL.EXE';
                FSize: 47344;
                PLocs: ($E,$14);
                PTyps: (Ofs(AutoDuelS),Ofs(AutoDuelC));
                PNext: 0);
  pBadBlood : RPatch = (
                Ver  : 0;
                FName: 'GAME.EXE';
                FSize: 115400;
                PLocs: ($68C1,$68C4);
                PTyps: (Ofs(AX1),Ofs(RetF));
                PNext: 0);
  pBadStBr  : RPatch = (
                Ver  : 0;
                FName: 'BR.EXE';
                FSize: 45529;
                PLocs: ($8F14,$AD65);
                PTyps: (Ofs(Jmp3),Ofs(Mindscape));
                PNext: 0);
  pBOP      : RPatch = (
                Ver  : 0;
                FName: 'BOP.EXE';
                FSize: 298032;
                PLocs: ($3ACA,$3ACC);
                PTyps: (Ofs(AX0),Ofs(Ret));
                PNext: 0);
  pBatmanJ  : RPatch = (
                Ver  : 0;
                FName: 'JOKER.EXE';
                FSize: 40851;
                PLocs: ($9D81,0);
                PTyps: (Ofs(Batman),0);
                PNext: 0);
  pBatmanP  : RPatch = (
                Ver  : 0;
                FName: 'PENGUIN.EXE';
                FSize: 40851;
                PLocs: ($9D81,0);
                PTyps: (Ofs(Batman),0);
                PNext: Ofs(pBatmanJ));
  pBChess1  : RPatch = (
                Ver  : 0.1;
                FName: 'CHESS.EXE';
                FSize: 83499;
                PLocs: ($6F06,0);
                PTyps: (Ofs(Ret),0);
                PNext: 0);
  pBChess2  : RPatch = (
                Ver  : 0.2;
                FName: 'CHESS.EXE';
                FSize: 83415;
                PLocs: ($6EB4,0);
                PTyps: (Ofs(Ret),0);
                PNext: Ofs(pBChess1));
  pBChessIIs: RPatch = (
                Ver  : 0;
                FName: 'SETUP.EXE';
                FSize: 29577;
                PLocs: ($858,0);
                PTyps: (Ofs(Ret),0);
                PNext: 0);
  pBChessII2: RPatch = (
                Ver  : 0.001;
                FName: 'CHESS2.EXE';
                FSize: 129783;
                PLocs: ($D516,0);
                PTyps: (Ofs(BC2),0);
                PNext: Ofs(pBChessIIs));
  pBChessII1: RPatch = (
                Ver  : 0;
                FName: 'CHESS2.EXE';
                FSize: 129697;
                PLocs: ($D51A,0);
                PTyps: (Ofs(BC2),0);
                PNext: Ofs(pBChessII2));
  pBH1942   : RPatch = (
                Ver  : 0;
                FName: 'BH.EXE';
                FSize: 148055;
                PLocs: ($2ADB,0);
                PTyps: (Ofs(BatlHawks),0);
                PNext: 0);
  pBTech    : RPatch = (
                Ver  : 1.03;
                FName: 'BTECH.EXE';
                FSize: 152429;
                PLocs: ($8016,0);
                PTyps: (Ofs(Jmp),0);
                PNext: 0);
  pBCsQjrr  : RPatch = (
                Ver  : 0;
                FName: 'MAINJRR.EXE';
                FSize: 19456;
                PLocs: ($25E,$260);
                PTyps: (Ofs(AX0),Ofs(Ret));
                PNext: 0);
  pBCsQr    : RPatch = (
                Ver  : 0;
                FName: 'MAINR.EXE';
                FSize: 19456;
                PLocs: ($25E,$260);
                PTyps: (Ofs(AX0),Ofs(Ret));
                PNext: Ofs(pBCsQjrr));
  pBCsQjrc  : RPatch = (
                Ver  : 0;
                FName: 'MAINJRC.EXE';
                FSize: 19712;
                PLocs: ($25E,$260);
                PTyps: (Ofs(AX0),Ofs(Ret));
                PNext: Ofs(pBCsQr));
  pBCsQc    : RPatch = (
                Ver  : 0;
                FName: 'MAINC.EXE';
                FSize: 19328;
                PLocs: ($25E,$260);
                PTyps: (Ofs(AX0),Ofs(Ret));
                PNext: Ofs(pBCsQjrc));
  pBCauld   : RPatch = (
                Ver  : 0;
                FName: 'SIERRA.COM';
                FSize: 2944;
                PLocs: ($41,$28D);
                PTyps: (Ofs(BC),Ofs(N3));
                PNext: 0);
  pBopn     : RPatch = (
                Ver  : 0;
                FName: 'BOP.EXE';
                FSize: 48880;
                PLocs: ($B47D,$B47F);
                PTyps: (Ofs(AX0),Ofs(Ret));
                PNext: 0);
  pBudo     : RPatch = (
                Ver  : 0;
                FName: 'LBUDO.COM';
                FSize: 0;
                PLocs: (0,0);
                PTyps: (Ofs(Budo),0);
                PNext: 0);
  pCalGam   : RPatch = (
                Ver  : 1.01;
                FName: 'CALGAMES.EXE';
                FSize: 63467;
                PLocs: ($4360,$4362);
                PTyps: (Ofs(AX0),Ofs(Ret));
                PNext: 0);
  pCalGam2  : RPatch = (
                Ver  : 1.0;
                FName: 'BEACH';
                FSize: 32035;
                PLocs: ($10B8,$11B0);
                PTyps: (Ofs(CG2),Ofs(Ret));
                PNext: 0);
  pCarl     : RPatch = (
                Ver  : 0;
                FName: 'AA.EXE';
                FSize: 172835;
                PLocs: ($FEB4,0);
                PTyps: (Ofs(Carl),0);
                PNext: 0);
  pCastlesBs: RPatch = (
                Ver  : 1.001;
                FName: 'SETUP.EXE';
                FSize: 27038;
                PLocs: ($355D,0);
                PTyps: (Ofs(CastlesB),0);
                PNext: 0);
  pCastlesC : RPatch = (
                Ver  : 1.01;
                FName: 'CASTLES1.EXE';
                FSize: 230736;
                PLocs: ($F5B8,$F5BE);
                PTyps: (Ofs(N2),Ofs(Jmp));
                PNext: Ofs(pCastlesBs));
  pCastlesAs: RPatch = (
                Ver  : 1.00;
                FName: 'SETUP.EXE';
                FSize: 27024;
                PLocs: ($355D,0);
                PTyps: (Ofs(CastlesA),0);
                PNext: Ofs(pCastlesC));
  pCastlesB : RPatch = (
                Ver  : 1.001;
                FName: 'CASTLES1.EXE';
                FSize: 228784;
                PLocs: ($F2D3,$F2D9);
                PTyps: (Ofs(N2),Ofs(Jmp));
                PNext: Ofs(pCastlesAs));
  pCastlesCs: RPatch = (
                Ver  : 1.01;
                FName: 'SETUP.EXE';
                FSize: 26920;
                PLocs: ($355D,0);
                PTyps: (Ofs(CastlesB),0);
                PNext: Ofs(pCastlesB));
  pCastlesA : RPatch = (
                Ver  : 1.00;
                FName: 'CASTLES1.EXE';
                FSize: 228736;
                PLocs: ($F298,$F29E);
                PTyps: (Ofs(N2),Ofs(Jmp));
                PNext: Ofs(pCastlesCs));
  pCastleT  : RPatch = (
                Ver  : 0;
                FName: 'CTDY.EXE';
                FSize: 105221;
                PLocs: ($B6AA,0);
                PTyps: (Ofs(RetF),0);
                PNext: 0);
  pCastleE  : RPatch = (
                Ver  : 0;
                FName: 'CEGA.EXE';
                FSize: 116301;
                PLocs: ($B814,0);
                PTyps: (Ofs(RetF),0);
                PNext: Ofs(pCastleT));
  pCastleC  : RPatch = (
                Ver  : 0;
                FName: 'CCGA.EXE';
                FSize: 107255;
                PLocs: ($B606,0);
                PTyps: (Ofs(RetF),0);
                PNext: Ofs(pCastleE));
  pCenturi  : RPatch = (
                Ver  : 0;
                FName: 'OVL0.OVL';
                FSize: 96272;
                PLocs: ($38F,0);
                PTyps: (Ofs(Centurion),0);
                PNext: 0);
  pKrynn    : RPatch = (
                Ver  : 1.0;
                FName: 'GAME.OVR';
                FSize: 267826;
                PLocs: ($4CD4,0);
                PTyps: (Ofs(Krynn),0);
                PNext: 0);
  pChampBox : RPatch = (
                Ver  : 0;
                FName: 'KO.EXE';
                FSize: 38144;
                PLocs: ($92C1,0);
                PTyps: (Ofs(Ret),0);
                PNext: 0);
{ pAirCom1  : RPatch = (
                Ver  : 1.1;
                FName: 'YEAGER.EXE';
                FSize: 283112;
                PLocs: ($A38,0);
                PTyps: (Ofs(N3),0);
                PNext: 0);
  pAirCom0  : RPatch = (
                Ver  : 1.0;
                FName: 'YEAGER.EXE';
                FSize: 281864;
                PLocs: ($A24,0);
                PTyps: (Ofs(N3),0);
                PNext: Ofs(pAirCom1e));}
  pAirCom1l : RPatch = (
                Ver  : 1.1;
                FName: 'YEAGER.COM';
                FSize: 0;
                PLocs: (0,0);
                PTyps: (Ofs(AirCom1),0);
                PNext: 0);
  pAirCom1  : RPatch = (
                Ver  : 1.1;
                FName: 'YEAGER.EXE';
                FSize: 184869;
                PLocs: (0,0);
                PTyps: (0,0);
                PNext: Ofs(pAirCom1l));
  pAirCom0l : RPatch = (
                Ver  : 1.0;
                FName: 'YEAGER.COM';
                FSize: 0;
                PLocs: (0,0);
                PTyps: (Ofs(AirCom0),0);
                PNext: Ofs(pAirCom1));
  pAirCom0  : RPatch = (
                Ver  : 1.0;
                FName: 'YEAGER.EXE';
                FSize: 184134;
                PLocs: (0,0);
                PTyps: (0,0);
                PNext: Ofs(pAirCom0l));
  pCivW1    : RPatch = (
                Ver  : 1.1;
                FName: 'CIV.EXE';
                FSize: 833024;
                PLocs: ($65000,0);
                PTyps: (Ofs(RetF),0);
                PNext: 0);
  pCivW2    : RPatch = (
                Ver  : 1.2;
                FName: 'CIV.EXE';
                FSize: 832512;
                PLocs: ($65000,0);
                PTyps: (Ofs(RetF),0);
                PNext: 0);
  pCiv5     : RPatch = (
                Ver  : 474.05;
                FName: 'CIV.EXE';
                FSize: 305030;
                PLocs: ($40E00,0);
                PTyps: (Ofs(RetF),0);
                PNext: Ofs(pCivW2));
  pCiv1     : RPatch = (
                Ver  : 474.01;
                FName: 'CIV.EXE';
                FSize: 304512;
                PLocs: ($40E00,0);
                PTyps: (Ofs(RetF),0);
                PNext: Ofs(pCiv5));
  pCiv4     : RPatch = (
                Ver  : 474.04;
                FName: 'CIV.EXE';
                FSize: 302982;
                PLocs: ($40600,0);
                PTyps: (Ofs(RetF),0);
                PNext: Ofs(pCiv1));
  pCivCTP12 : RPatch = (
                Ver  : 1.2;
                FName: 'CIVCTP.EXE';
                FSize: 6566912;
                PLocs: ($13A0,0);
                PTyps: (Ofs(Ret),0);
                PNext: 0);
  pCivCTP11 : RPatch = (
                Ver  : 1.1;
                FName: 'CIVCTP.EXE';
                FSize: 6521856;
                PLocs: ($13A0,0);
                PTyps: (Ofs(Ret),0);
                PNext: Ofs(pCivCTP12));
  pCivCTP10 : RPatch = (
                Ver  : 1.0;
                FName: 'CIVCTP.EXE';
                FSize: 6430720;
                PLocs: ($1330,0);
                PTyps: (Ofs(Ret),0);
                PNext: Ofs(pCivCTP11));
  pColBeq   : RPatch = (
                Ver  : 0;
                FName: 'SCIV.EXE';
                FSize: 76419;
                PLocs: ($BDE,$1283E);
                PTyps: (Ofs(CB1),Ofs(CB2));
                PNext: 0);
  pContra   : RPatch = (
                Ver  : 0;
                FName: 'CONTRA.EXE';
                FSize: 28288;
                PLocs: ($6914,0);
                PTyps: (Ofs(Contra),0);
                PNext: 0);
  pCrossbow : RPatch = (
                Ver  : 0;
                FName: 'CBOW.EXE';
                FSize: 72640;
                PLocs: ($119D6,0);
                PTyps: (Ofs(Crossbow),0);
                PNext: 0);
  pAzure    : RPatch = (
                Ver  : 1.0;
                FName: 'GAME.OVR';
                FSize: 272218;
                PLocs: ($47A2,0);
                PTyps: (Ofs(RetF),0);
                PNext: 0);
  pDC       : RPatch = (
                Ver  : 0;
                FName: 'DC.EXE';
                FSize: 110507;
                PLocs: ($16017,$16019);
                PTyps: (Ofs(AX0),Ofs(RetF));
                PNext: 0);
  pDarkland7: RPatch = (
                Ver  : 483.07;
                FName: 'DARKLAND.EXE';
                FSize: 1675637;
                PLocs: ($8A6A8,0);
                PTyps: (Ofs(RetF),0);
                PNext: 0);
  pDarkland6: RPatch = (
                Ver  : 483.06;
                FName: 'DARKLAND.EXE';
                FSize: 1652687;
                PLocs: ($860E8,0);
                PTyps: (Ofs(RetF),0);
                PNext: Ofs(pDarkland7));
  pDawnRaid : RPatch = (
                Ver  : 0;
                FName: 'DR.EXE';
                FSize: 113710;
                PLocs: ($1405,0);
                PTyps: (Ofs(DawnRaid),0);
                PNext: 0);
  pDSword   : RPatch = (
                Ver  : 0;
                FName: 'DS.EXE';
                FSize: 157292;
                PLocs: ($116F0,0);
                PTyps: (Ofs(Ret),0);
                PNext: 0);
  pDTm      : RPatch = (
                Ver  : 0;
                FName: 'FTF_MONO.EXE';
                FSize: 89090;
                PLocs: ($3593,0);
                PTyps: (Ofs(DTm),0);
                PNext: 0);
  pDTv      : RPatch = (
                Ver  : 0;
                FName: 'FTF_VGA.EXE';
                FSize: 98320;
                PLocs: ($3173,0);
                PTyps: (Ofs(DTv),0);
                PNext: Ofs(pDTm));
  pDTrack   : RPatch = (
                Ver  : 0;
                FName: 'DTRACK.EXE';
                FSize: 177687;
                PLocs: ($2ADD,0);
                PTyps: (Ofs(Jmp),0);
                PNext: 0);
  pDH2      : RPatch = (
                Ver  : 0;
                FName: 'DIE.EXE';
                FSize: 64760;
                PLocs: ($E426,0);
                PTyps: (Ofs(Ret),0);
                PNext: 0);
  pDAS      : RPatch = (
                Ver  : 20.30;
                FName: 'DAS.EXE';
                FSize: 46900;
                PLocs: ($A78,$A7A);
                PTyps: (Ofs(AX0),Ofs(Ret));
                PNext: 0);
  pDragon   : RPatch = (
                Ver  : 0;
                FName: 'DRAGON.EXE';
                FSize: 15141;
                PLocs: ($393E,0);
                PTyps: (Ofs(Ret),0);
                PNext: 0);
  pFlame    : RPatch = (
                Ver  : 1.0;
                FName: 'GAME.EXE';
                FSize: 63485;
                PLocs: ($68E,0);
                PTyps: (Ofs(Ret),0);
                PNext: 0);
  pElder    : RPatch = (
                Ver  : 0;
                FName: 'A.EXE';
                FSize: 313840;
                PLocs: ($80E2,0);
                PTyps: (Ofs(Jmp),0);
                PNext: 0);
  pEmpire   : RPatch = (
                Ver  : 2.05; {A}
                FName: 'EMPIRE.EXE';
                FSize: 222303;
                PLocs: ($A218,0);
                PTyps: (Ofs(Empire),0);
                PNext: 0);
  pEngland  : RPatch = (
                Ver  : 0;
                FName: 'ENGLAND.EXE';
                FSize: 53860;
                PLocs: ($25B,0);
                PTyps: (Ofs(N3),0);
                PNext: 0);
  pEOB      : RPatch = (
                Ver  : 0;
                FName: 'EOB.EXE';
                FSize: 264496;
                PLocs: ($399CC,0);
                PTyps: (Ofs(RetF),0);
                PNext: 0);
  pFaceOff2 : RPatch = (
                Ver  : 0;
                FName: 'FACEOFF.EXE';
                FSize: 149223;
                PLocs: ($EED9,0);
                PTyps: (Ofs(FO3),0);
                PNext: 0);
  pFaceOff  : RPatch = (
                Ver  : 0;
                FName: 'FACEOFF.EXE';
                FSize: 149223;
                PLocs: ($DF95,$DF9D);
                PTyps: (Ofs(FO1),Ofs(FO2));
                PNext: Ofs(pFaceOff2));
  pFB       : RPatch = (
                Ver  : 1.003;
                FName: 'FB.EXE';
                FSize: 128532;
                PLocs: ($D8B7,0);
                PTyps: (Ofs(N2),0);
                PNext: 0);
  pFBspa    : RPatch = (
                Ver  : 1.002;
                FName: 'FB.EXE';
                FSize: 128460;
                PLocs: ($7066,$DD8C);
                PTyps: (Ofs(FBs1),Ofs(FBs2));
                PNext: Ofs(pFB));
  pFBaus    : RPatch = (
                Ver  : 1.001;
                FName: 'FB.EXE';
                FSize: 128188;
                PLocs: ($7056,$DD78);
                PTyps: (Ofs(FBa1),Ofs(FBa2));
                PNext: Ofs(pFBspa));
  pFBfre    : RPatch = (
                Ver  : 1.0;
                FName: 'FB.EXE';
                FSize: 126860;
                PLocs: ($6EF8,$D8D2);
                PTyps: (Ofs(FBf1),Ofs(FBf2));
                PNext: Ofs(pFBaus));
  pFuture   : RPatch = (
                Ver  : 0;
                FName: 'FW.COM';
                FSize: 0;
                PLocs: (0,0);
                PTyps: (Ofs(FW),0);
                PNext: 0);
  pGEmpire  : RPatch = (
                Ver  : 0;
                FName: 'GLS.EXE';
                FSize: 74364;
                PLocs: ($3354,0);
                PTyps: (Ofs(GE),0);
                PNext: 0);
  pGFleet   : RPatch = (
                Ver  : 0;
                FName: 'GF.EXE';
                FSize: 285722;
                PLocs: ($120C4,0);
                PTyps: (Ofs(RetF),0);
                PNext: 0);
  pGauntlet2: RPatch = (
                Ver  : 0;
                FName: 'GPROG.EXE';
                FSize: 33817;
                PLocs: ($5ED0,$7FA5);
                PTyps: (Ofs(Jmp3),Ofs(Mindscape));
                PNext: 0);
  pGauntlet : RPatch = (
                Ver  : 0;
                FName: 'GINTRO.EXE';
                FSize: 17273;
                PLocs: ($1CD9,$3F05);
                PTyps: (Ofs(Jmp3),Ofs(Mindscape));
                PNext: Ofs(pGauntlet2));
  pGauntII2 : RPatch = (
                Ver  : 0;
                FName: 'GFAST.EXE';
                FSize: 81406;
                PLocs: ($130EC,$13105);
                PTyps: (Ofs(N3),Ofs(N2));
                PNext: 0);
  pGauntII  : RPatch = (
                Ver  : 0;
                FName: 'GAUNTLET.EXE';
                FSize: 81356;
                PLocs: ($130C6,$130DF);
                PTyps: (Ofs(N3),Ofs(N2));
                PNext: Ofs(pGauntII2));
  pGoldRush : RPatch = (
                Ver  : 0;
                FName: 'GRDIR.';
                FSize: 2399;
                PLocs: ($18C,0);
                PTyps: (Ofs(GR),0);
                PNext: 0);
  pGoldAxe  : RPatch = (
                Ver  : 0;
                FName: 'AXE.DAT';
                FSize: 40481;
                PLocs: ($5260,$526E);
                PTyps: (Ofs(N3),Ofs(N2));
                PNext: 0);
  pGPCt     : RPatch = (
                Ver  : 0;
                FName: 'GPTDY.EXE';
                FSize: 77401;
                PLocs: ($D7CF,0);
                PTyps: (Ofs(GPC),0);
                PNext: 0);
  pGPCe     : RPatch = (
                Ver  : 0;
                FName: 'GPEGA.EXE';
                FSize: 86855;
                PLocs: ($FCF0,0);
                PTyps: (Ofs(GPC),0);
                PNext: Ofs(pGPCt));
  pGPCc     : RPatch = (
                Ver  : 0;
                FName: 'GPCGA.EXE';
                FSize: 77497;
                PLocs: ($D86E,0);
                PTyps: (Ofs(GPC),0);
                PNext: Ofs(pGPCe));
  pHacker   : RPatch = (
                Ver  : 0;
                FName: 'HACKER.EXE';
                FSize: 53760;
                PLocs: ($5C3E,0);
                PTyps: (Ofs(Ret),0);
                PNext: 0);
  pHBIIt    : RPatch = (
                Ver  : 0;
                FName: 'HB2TDY.EXE';
                FSize: 163627;
                PLocs: ($38EC,$38EE);
                PTyps: (Ofs(AX0),Ofs(RetF));
                PNext: 0);
  pHBIIe    : RPatch = (
                Ver  : 0;
                FName: 'HB2EGA.EXE';
                FSize: 170281;
                PLocs: ($390A,$390C);
                PTyps: (Ofs(AX0),Ofs(RetF));
                PNext: Ofs(pHBIIt));
  pHBIIc    : RPatch = (
                Ver  : 0;
                FName: 'HB2CGA.EXE';
                FSize: 167857;
                PLocs: ($3892,$3894);
                PTyps: (Ofs(AX0),Ofs(RetF));
                PNext: Ofs(pHBIIe));
  pHBIII    : RPatch = (
                Ver  : 0;
                FName: 'HARDBALL.EXE';
                FSize: 1444448;
                PLocs: ($D8912,0);
                PTyps: (Ofs(RetF),0);
                PNext: 0);
  pHeroes   : RPatch = (
                Ver  : 1.0;
                FName: 'START.EXE';
                FSize: 97005;
                PLocs: ($10462,0);
                PTyps: (Ofs(Heroes),0);
                PNext: 0);
  pHillsfar : RPatch = (
                Ver  : 1.1;
                FName: 'MAIN.COM';
                FSize: 0;
                PLocs: (0,0);
                PTyps: (Ofs(Hillsfar),0);
                PNext: 0);
  pIndy500  : RPatch = (
                Ver  : 0;
                FName: 'INDY.EXE';
                FSize: 159511;
                PLocs: ($BCCF,0);
                PTyps: (Ofs(N3),0);
                PNext: 0);
  pIndy3    : RPatch = (
                Ver  : 0;
                FName: 'INDY3.EXE';
                FSize: 93737;
                PLocs: ($AEB3,0);
                PTyps: (Ofs(Jmp),0);
                PNext: 0);
  pIndy4    : RPatch = (
                Ver  : 0;
                FName: 'ATLANTIS.EXE';
                FSize: 112565;
                PLocs: ($763F,$19398);
                PTyps: (Ofs(IFA1),Ofs(IFA2));
                PNext: 0);
  pIndyCar5 : RPatch = (
                Ver  : 1.05;
                FName: 'INDYCAR.EXE';
                FSize: 743613;
                PLocs: ($80C27,0);
                PTyps: (Ofs(N2),0);
                PNext: 0);
  pIndyCar4 : RPatch = (
                Ver  : 1.04;
                FName: 'INDYCAR.EXE';
                FSize: 742377;
                PLocs: ($803B7,0);
                PTyps: (Ofs(N2),0);
                PNext: Ofs(pIndyCar5));
  pIndyCar4s: RPatch = (
                Ver  : 1.043;
                FName: 'INDYCAR.EXE';
                FSize: 742285;
                PLocs: ($803B7,0);
                PTyps: (Ofs(N2),0);
                PNext: Ofs(pIndyCar4));
  pIndyCar4e: RPatch = (
                Ver  : 1.042;
                FName: 'INDYCAR.EXE';
                FSize: 742281;
                PLocs: ($803B7,0);
                PTyps: (Ofs(N2),0);
                PNext: Ofs(pIndyCar4s));
  pIndyCar4g: RPatch = (
                Ver  : 1.041;
                FName: 'INDYCAR.EXE';
                FSize: 742273;
                PLocs: ($803B7,0);
                PTyps: (Ofs(N2),0);
                PNext: Ofs(pIndyCar4e));
  pIndyCar3 : RPatch = (
                Ver  : 1.03;
                FName: 'INDYCAR.EXE';
                FSize: 737105;
                PLocs: ($7BD47,0);
                PTyps: (Ofs(N2),0);
                PNext: Ofs(pIndyCar4g));
  pIndyCar2 : RPatch = (
                Ver  : 1.02;
                FName: 'INDYCAR.EXE';
                FSize: 732853;
                PLocs: ($7BC97,0);
                PTyps: (Ofs(N2),0);
                PNext: Ofs(pIndyCar3));
  pItaly    : RPatch = (
                Ver  : 0;
                FName: 'ITALY90.COM';
                FSize: 62631;
                PLocs: ($CD32,$E8B3);
                PTyps: (Ofs(Jmp),Ofs(Ret));
                PNext: 0);
  pJNUnD    : RPatch = (
                Ver  : 0;
                FName: 'DESIGN.EXE';
                FSize: 140510;
                PLocs: ($11A94,0);
                PTyps: (Ofs(RetF),0);
                PNext: 0);
  pJNUn     : RPatch = (
                Ver  : 0;
                FName: 'GOLF.EXE';
                FSize: 145860;
                PLocs: ($3005,$3221);
                PTyps: (Ofs(Ret),Ofs(Ret));
                PNext: Ofs(pJNUnD));
  pJMF      : RPatch = (
                Ver  : 0;
                FName: 'MFB.EXE';
                FSize: 224736;
                PLocs: ($394A,0);
                PTyps: (Ofs(Ret),0);
                PNext: 0);
  pKQII     : RPatch = (
                Ver  : 0;
                FName: 'SIERRA.COM';
                FSize: 3121;
                PLocs: ($41,$2C1);
                PTyps: (Ofs(KQ2),Ofs(N3));
                PNext: 0);
  pKing2    : RPatch = (
                Ver  : 1.52;
                FName: 'KING.EXE';
                FSize: 169182;
                PLocs: ($20024,0);
                PTyps: (Ofs(RETF),0);
                PNext: 0);
  pKing1    : RPatch = (
                Ver  : 1.51;
                FName: 'KING.EXE';
                FSize: 168558;
                PLocs: ($1FE08,0);
                PTyps: (Ofs(RETF),0);
                PNext: Ofs(pKing2));
  pKOBt     : RPatch = (
                Ver  : 0;
                FName: 'VBTDY';
                FSize: 77571;
                PLocs: ($1B60,$6B49);
                PTyps: (Ofs(KOB),Ofs(Jmp));
                PNext: 0);
  pKOBe     : RPatch = (
                Ver  : 0;
                FName: 'VBEGA';
                FSize: 76485;
                PLocs: ($1B60,$77AD);
                PTyps: (Ofs(KOB),Ofs(Jmp));
                PNext: Ofs(pKOBt));
  pKOBc     : RPatch = (
                Ver  : 0;
                FName: 'VBCGA';
                FSize: 69907;
                PLocs: ($1B60,$70F2);
                PTyps: (Ofs(KOB),Ofs(Jmp));
                PNext: Ofs(pKOBe));
  pLvsC     : RPatch = (
                Ver  : 0;
                FName: 'BBALL.EXE';
                FSize: 178721;
                PLocs: ($50F,0);
                PTyps: (Ofs(Jmp),0);
                PNext: 0);
  pLOV      : RPatch = (
                Ver  : 0;
                FName: 'TITLE.EXE';
                FSize: 7013;
                PLocs: ($1161,0);
                PTyps: (Ofs(LOV),0);
                PNext: 0);
  pLSLI     : RPatch = (
                Ver  : 0;
                FName: 'SIERRA.COM';
                FSize: 4096;
                PLocs: ($41,$28D);
                PTyps: (Ofs(Larry),Ofs(N3));
                PNext: 0);
  pLemmingV : RPatch = (
                Ver  : 0;
                FName: 'VGALEMMI.EXE';
                FSize: 83194;
                PLocs: ($200,0);
                PTyps: (Ofs(N3),0);
                PNext: 0);
  pLemmingT : RPatch = (
                Ver  : 0;
                FName: 'TGALEMMI.EXE';
                FSize: 76092;
                PLocs: ($1BF,0);
                PTyps: (Ofs(N3),0);
                PNext: Ofs(pLemmingV));
  pLemmingC : RPatch = (
                Ver  : 0;
                FName: 'CGALEMMI.EXE';
                FSize: 73164;
                PLocs: ($1A6,0);
                PTyps: (Ofs(N3),0);
                PNext: Ofs(pLemmingT));
  pLND      : RPatch = (
                Ver  : 1.06;
                FName: 'LND.EXE';
                FSize: 340753;
                PLocs: ($3A64,$3A68);
                PTyps: (Ofs(LND),Ofs(Jmp));
                PNext: 0);
  pLostVik  : RPatch = (
                Ver  : 0;
                FName: 'SETUP.EXE';
                FSize: 33552;
                PLocs: ($E6C,0);
                PTyps: (Ofs(N2),0);
                PNext: 0);
  pMCandle  : RPatch = (
                Ver  : 1.10;
                FName: 'P82.MCO';
                FSize: 5916;
                PLocs: ($D3B,$D3D);
                PTyps: (Ofs(AX0),Ofs(Ret));
                PNext: 0);
  pMartian  : RPatch = (
                Ver  : 0;
                FName: 'GAME.EXE';
                FSize: 341712;
                PLocs: ($4B0E2,0);
                PTyps: (Ofs(Jmp),0);
                PNext: 0);
  pMNinja   : RPatch = (
                Ver  : 0;
                FName: 'MASTER.EXE';
                FSize: 142080;
                PLocs: ($223AB,0);
                PTyps: (Ofs(MNinja),0);
                PNext: 0);
  pOrion    : RPatch = (
                Ver  : 0;
                FName: 'STARMAP.EXE';
                FSize: 563328;
                PLocs: ($71967,0);
                PTyps: (Ofs(RetF),0);
                PNext: 0);
  pMean18   : RPatch = (
                Ver  : 0;
                FName: 'GOLF.EXE';
                FSize: 82157;
                PLocs: ($14094,$14096);
                PTyps: (Ofs(AX0),Ofs(RetF));
                PNext: 0);
  pMStreets : RPatch = (
                Ver  : 1.2;
                FName: 'MS.EXE';
                FSize: 122951;
                PLocs: ($1A3C5,$1A3C6);
                PTyps: (Ofs(BTrue),Ofs(Ret));
                PNext: 0);
  pMechWar  : RPatch = (
                Ver  : 0;
                FName: 'MW_MAIN.EXE';
                FSize: 137871;
                PLocs: ($1C3A,$1C54);
                PTyps: (Ofs(N4),Ofs(Mechwar));
                PNext: 0);
  pMMI      : RPatch = (
                Ver  : 0;
                FName: 'MM.EXE';
                FSize: 119232;
                PLocs: ($DC44,$DC73);
                PTyps: (Ofs(N2),Ofs(MM1));
                PNext: 0);
  pMMIII    : RPatch = (
                Ver  : 0;
                FName: 'MM3.COM';
                FSize: 0;
                PLocs: (0,0);
                PTyps: (Ofs(MM3),0);
                PNext: 0);
  pMDFB22   : RPatch = (
                Ver  : 1.01;
                FName: 'DAT101.DAT';
                FSize: 95216;
                PLocs: ($287,0);
                PTyps: (Ofs(Jmp),0);
                PNext: 0);
  pMDFB21   : RPatch = (
                Ver  : 1.01;
                FName: 'MDFB.EXE';
                FSize: 42623;
                PLocs: ($6787,0);
                PTyps: (Ofs(N2),0);
                PNext: Ofs(pMDFB22));
  pMDFB2    : RPatch = (
                Ver  : 1.00;
                FName: 'DAT101.DAT';
                FSize: 95085;
                PLocs: ($286,0);
                PTyps: (Ofs(Jmp),0);
                PNext: Ofs(pMDFB21));
  pMDFB     : RPatch = (
                Ver  : 1.00;
                FName: 'MDFB.EXE';
                FSize: 42591;
                PLocs: ($6771,0);
                PTyps: (Ofs(N2),0);
                PNext: Ofs(pMDFB2));
  pMisUFO   : RPatch = (
                Ver  : 0;
                FName: 'UFO.EXE';
                FSize: 163318;
                PLocs: ($1617,0);
                PTyps: (Ofs(UFO),0);
                PNext: 0);
  pMoebius  : RPatch = (
                Ver  : 0;
                FName: 'MOEBIUS.EXE';
                FSize: 47264;
                PLocs: ($E,$14);
                PTyps: (Ofs(MoebiusS),Ofs(MoebiusC));
                PNext: 0);
  pKombat2D2: RPatch = (
                Ver  : 0;
                FName: 'MK2.EXE';
                FSize: 861133;
                PLocs: ($9E369,0);
                PTyps: (Ofs(MK2),0);
                PNext: 0);
  pKombat2D1: RPatch = (
                Ver  : 0;
                FName: 'MK2.EXE';
                FSize: 861133;
                PLocs: ($9E351,0);
                PTyps: (Ofs(MK2),0);
                PNext: Ofs(pKombat2D2));
  pKombat2CD: RPatch = (
                Ver  : 0;
                FName: 'MK2.EXE';
                FSize: 861133;
                PLocs: ($61F70,0);
                PTyps: (Ofs(Ret),0);
                PNext: 0);
  pKombat2  : RPatch = (
                Ver  : 0.001;
                FName: 'MK.EXE';
                FSize: 586311;
                PLocs: ($5F8E4,0);
                PTyps: (Ofs(MK),0);
                PNext: 0);
  pKombat1  : RPatch = (
                Ver  : 0;
                FName: 'MK.EXE';
                FSize: 439131;
                PLocs: ($3AAAC,0);
                PTyps: (Ofs(MK),0);
                PNext: Ofs(pKombat2));
  pOhNoV    : RPatch = (
                Ver  : 0;
                FName: 'VGALEMMI.EXE';
                FSize: 83242;
                PLocs: ($419B,0);
                PTyps: (Ofs(N3),0);
                PNext: 0);
  pOhNoT    : RPatch = (
                Ver  : 0;
                FName: 'TGALEMMI.EXE';
                FSize: 76348;
                PLocs: ($415B,0);
                PTyps: (Ofs(N3),0);
                PNext: Ofs(pOhNoV));
  p1on12    : RPatch = (
                Ver  : 0;
                FName: '1ON1TINY';
                FSize: 70455;
                PLocs: ($59FF,0);
                PTyps: (Ofs(N3),0);
                PNext: 0);
  p1on1     : RPatch = (
                Ver  : 0;
                FName: '1ON1SUB';
                FSize: 71963;
                PLocs: ($59FF,0);
                PTyps: (Ofs(N3),0);
                PNext: Ofs(p1on12));
  pPGeneral : RPatch = (
                Ver  : 1.02;
                FName: 'GENERAL.EXE';
                FSize: 304819;
                PLocs: ($2A9A0,$2A9A3);
                PTyps: (Ofs(AX1),Ofs(RetF));
                PNext: 0);
  pPipe     : RPatch = (
                Ver  : 0;
                FName: 'PIPE.EXE';
                FSize: 96097;
                PLocs: ($4ADB,$5368);
                PTyps: (Ofs(N2),Ofs(N2));
                PNext: 0);
  pPirates1 : RPatch = (
                Ver  : 0.01;
                FName: 'PIRATESG.EXE';
                FSize: 350827;
                PLocs: ($143F3,0);
                PTyps: (Ofs(N2),0);
                PNext: 0);
  pPirates2 : RPatch = (
                Ver  : 0.02;
                FName: 'PIRATESG.EXE';
                FSize: 346115;
                PLocs: ($13E0C,0);
                PTyps: (Ofs(N2),0);
                PNext: Ofs(pPirates1));
  pPirates3 : RPatch = (
                Ver  : 0.03;
                FName: 'PIRATESG.EXE';
                FSize: 289503;
                PLocs: ($11FA8,0);
                PTyps: (Ofs(N2),0);
                PNext: Ofs(pPirates2));
  pPlatT    : RPatch = (
                Ver  : 0;
                FName: 'PT.EXE';
                FSize: 54496;
                PLocs: ($D129,0);
                PTyps: (Ofs(Platoon),0);
                PNext: 0);
  pPlatH    : RPatch = (
                Ver  : 0;
                FName: 'PH.EXE';
                FSize: 54352;
                PLocs: ($D099,0);
                PTyps: (Ofs(Platoon),0);
                PNext: Ofs(pPlatT));
  pPlatE    : RPatch = (
                Ver  : 0;
                FName: 'PE.EXE';
                FSize: 55136;
                PLocs: ($D3A9,0);
                PTyps: (Ofs(Platoon),0);
                PNext: Ofs(pPlatH));
  pPlatC    : RPatch = (
                Ver  : 0;
                FName: 'PC.EXE';
                FSize: 52608;
                PLocs: ($C9C9,0);
                PTyps: (Ofs(Platoon),0);
                PNext: Ofs(pPlatE));
  pPoolRad  : RPatch = (
                Ver  : 1.0;
                FName: 'GAME.OVR';
                FSize: 232379;
                PLocs: ($A5A,0);
                PTyps: (Ofs(RetF),0);
                PNext: 0);
  pPopulous : RPatch = (
                Ver  : 0;
                FName: 'POPULOUS.EXE';
                FSize: 84959;
                PLocs: ($D82C,0);
                PTyps: (Ofs(Populous),0);
                PNext: 0);
  pPMonger  : RPatch = (
                Ver  : 0;
                FName: 'GAME.EXE';
                FSize: 241969;
                PLocs: ($37935,0);
                PTyps: (Ofs(N2),0);
                PNext: 0);
  pPred2    : RPatch = (
                Ver  : 0;
                FName: 'PRED.EXE';
                FSize: 132777;
                PLocs: ($21C,$223);
                PTyps: (Ofs(Jmp3),Ofs(Jmp));
                PNext: 0);
  pPrince   : RPatch = (
                Ver  : 1.0;
                FName: 'PRINCE.EXE';
                FSize: 124257;
                PLocs: ($4B70,0);
                PTyps: (Ofs(Jmp),0);
                PNext: 0);
  pPrince2  : RPatch = (
                Ver  : 1.0;
                FName: 'PRINCE.EXE';
                FSize: 292865;
                PLocs: ($88B4,0);
                PTyps: (Ofs(N2),0);
                PNext: 0);
  pPW       : RPatch = (
                Ver  : 0;
                FName: 'PW.EXE';
                FSize: 58649;
                PLocs: ($5F9F,0);
                PTyps: (Ofs(Ret),0);
                PNext: 0);
  pQuest2   : RPatch = (
                Ver  : 1.0;
                FName: 'START.EXE';
                FSize: 137036;
                PLocs: ($1B8E3,0);
                PTyps: (Ofs(N2),0);
                PNext: 0);
  pRW       : RPatch = (
                Ver  : 0;
                FName: 'RW.EXE';
                FSize: 151248;
                PLocs: ($5720,0);
                PTyps: (Ofs(Ret),0);
                PNext: 0);
  pRrTDlx   : RPatch = (
                Ver  : 0;
                FName: 'RRT.EXE';
                FSize: 265234;
                PLocs: ($3E200,0);
                PTyps: (Ofs(RetF),0);
                PNext: 0);
  pRally2    : RPatch = (
                Ver  : 0.001;
                FName: 'MENU.EXE';
                FSize: 64248;
                PLocs: ($8C7F,0);
                PTyps: (Ofs(Ret),0);
                PNext: 0);
  pRally1    : RPatch = (
                Ver  : 0.00;
                FName: 'MENU.EXE';
                FSize: 53896;
                PLocs: ($8DDE,0);
                PTyps: (Ofs(Ret),0);
                PNext: Ofs(pRally2));
  pRampage  : RPatch = (
                Ver  : 0;
                FName: 'RAMPAGE.EXE';
                FSize: 58876;
                PLocs: ($E340,0);
                PTyps: (Ofs(RetF),0);
                PNext: 0);
  pRampart  : RPatch = (
                Ver  : 0;
                FName: 'RAMPART.EXE';
                FSize: 85381;
                PLocs: ($819E,0);
                PTyps: (Ofs(Ret),0);
                PNext: 0);
  pRSR2     : RPatch = (
                Ver  : 0;
                FName: 'REDSTART.RSR';
                FSize: 44005;
                PLocs: ($155C,0);
                PTyps: (Ofs(N2),0);
                PNext: 0);
  pRSR      : RPatch = (
                Ver  : 0;
                FName: 'REDSTORM.COM';
                FSize: 4517;
                PLocs: ($CAE,0);
                PTyps: (Ofs(RSR),0);
                PNext: Ofs(pRSR2));
  pRushn2   : RPatch = (
                Ver  : 0;
                FName: 'RUSE.EXE';
                FSize: 22199;
                PLocs: ($5591,0);
                PTyps: (Ofs(Rushn),0);
                PNext: 0);
  pRushn    : RPatch = (
                Ver  : 0;
                FName: 'RUSC.EXE';
                FSize: 22199;
                PLocs: ($5591,0);
                PTyps: (Ofs(Rushn),0);
                PNext: Ofs(pRushn2));
  pSilver   : RPatch = (
                Ver  : 1.0;
                FName: 'GAME.OVR';
                FSize: 277515;
                PLocs: ($584B,0);
                PTyps: (Ofs(Silver),0);
                PNext: 0);
  pSWOTL    : RPatch = (
                Ver  : 0;
                FName: 'SWOTL.EXE';
                FSize: 55564;
                PLocs: ($2F8,0);
                PTyps: (Ofs(SWOTL),0);
                PNext: 0);
  pSimCity2 : RPatch = (
                Ver  : 1.02;
                FName: 'SIMCITY.EXE';
                FSize: 191235;
                PLocs: ($20FCA,0);
                PTyps: (Ofs(RetF),0);
                PNext: 0);
  pSimCity0 : RPatch = (
                Ver  : 1.00;
                FName: 'SIMCITY.EXE';
                FSize: 190879;
                PLocs: ($20F0C,0);
                PTyps: (Ofs(RetF),0);
                PNext: Ofs(pSimCity2));
  pSimEarth : RPatch = (
                Ver  : 1.00;
                FName: 'SIMEARTH.EXE';
                FSize: 406346;
                PLocs: ($1B96C,0);
                PTyps: (Ofs(RetF),0);
                PNext: 0);
  pSimpsons : RPatch = (
                Ver  : 0;
                FName: 'SIMPSONS.EXE';
                FSize: 145376;
                PLocs: ($1ED29,0);
                PTyps: (Ofs(N2),0);
                PNext: 0);
  pSkiT     : RPatch = (
                Ver  : 0;
                FName: 'SKITGA';
                FSize: 51999;
                PLocs: ($732,0);
                PTyps: (Ofs(Ski),0);
                PNext: 0);
  pSkiE     : RPatch = (
                Ver  : 0;
                FName: 'SKIEGA';
                FSize: 52729;
                PLocs: ($732,0);
                PTyps: (Ofs(Ski),0);
                PNext: Ofs(pSkiT));
  pSkiC     : RPatch = (
                Ver  : 0;
                FName: 'SKICGA';
                FSize: 52753;
                PLocs: ($732,0);
                PTyps: (Ofs(Ski),0);
                PNext: Ofs(pSkiE));
  p1889     : RPatch = (
                Ver  : 0;
                FName: 'SETUP.EXE';
                FSize: 27520;
                PLocs: ($11F9,$13B2);
                PTyps: (Ofs(N3),Ofs(N3));
                PNext: 0);
  pSQII     : RPatch = (
                Ver  : 2.0; {A}
                FName: 'SIERRA.COM';
                FSize: 3121;
                PLocs: ($41,$2C1);
                PTyps: (Ofs(SQ2),Ofs(N3));
                PNext: 0);
  pSQIV     : RPatch = (
                Ver  : 0;
                FName: 'SCIDHUV.EXE';
                FSize: 104937;
                PLocs: ($67E4,0);
                PTyps: (Ofs(SQIV),0);
                PNext: 0);
  pOblivion : RPatch = (
                Ver  : 0;
                FName: 'OBLIVION.EXE';
                FSize: 6765;
                PLocs: ($B49,0);
                PTyps: (Ofs(Oblivion),0);
                PNext: 0);
  pSOD      : RPatch = (
                Ver  : 0;
                FName: 'SPEAR.EXE';
                FSize: 255646;
                PLocs: ($7F4E,0);
                PTyps: (Ofs(Jmp3),0);
                PNext: 0);
  pStarcon  : RPatch = (
                Ver  : 0;
                FName: 'STARCON.OVL';
                FSize: 56576;
                PLocs: ($1992,0);
                PTyps: (Ofs(N2),0);
                PNext: 0);
  pStarTrek : RPatch = (
                Ver  : 0;
                FName: 'STARTREK.EXE';
                FSize: 174776;
                PLocs: ($366B,$366D);
                PTyps: (Ofs(N2),Ofs(StarTrek));
                PNext: 0);
  pStorm    : RPatch = (
                Ver  : 0;
                FName: 'SU25.EXE';
                FSize: 250363;
                PLocs: ($21C37,0);
                PTyps: (Ofs(N2),0);
                PNext: 0);
  pRod      : RPatch = (
                Ver  : 1.0;
                FName: 'SR.EXE';
                FSize: 259785;
                PLocs: ($31C8,$31CB);
                PTyps: (Ofs(AX1),Ofs(RetF));
                PNext: 0);
  pSSBas2   : RPatch = (
                Ver  : 0;
                FName: 'SELECT.EXE';
                FSize: 106076;
                PLocs: ($1876,0);
                PTyps: (Ofs(N2),0);
                PNext: 0);
  pSSBas    : RPatch = (
                Ver  : 0;
                FName: 'SELECT.EXE';
                FSize: 106076;
                PLocs: ($28C,$292);
                PTyps: (Ofs(N3),Ofs(N3));
                PNext: Ofs(pSSBas2));
  pSSBak    : RPatch = (
                Ver  : 0;
                FName: 'SSBKB.EXE';
                FSize: 5808;
                PLocs: ($292,0);
                PTyps: (Ofs(RetF),0);
                PNext: 0);
  pStunts   : RPatch = (
                Ver  : 1.0;
                FName: 'LSTUNTS.COM';
                FSize: 0;
                PLocs: (0,0);
                PTyps: (Ofs(Stunts),0);
                PNext: 0);
  pSupa     : RPatch = (
                Ver  : 0;
                FName: 'SUPAPLEX.EXE';
                FSize: 45948;
                PLocs: ($262,0);
                PTyps: (Ofs(N3),0);
                PNext: 0);
  pSuper2   : RPatch = (
                Ver  : 0;
                FName: 'SUPERSKI.EXE';
                FSize: 84005;
                PLocs: ($56EC,0);
                PTyps: (Ofs(Ret0C),0);
                PNext: 0);
  pSupTet   : RPatch = (
                Ver  : 0;
                FName: 'SUPERTET.EXE';
                FSize: 292928;
                PLocs: ($213DF,0);
                PTyps: (Ofs(N2),0);
                PNext: 0);
  pTF1942   : RPatch = (
                Ver  : 41101.1;
                FName: 'TF.EXE';
                FSize: 473616;
                PLocs: ($483AB,$483AE);
                PTyps: (Ofs(AX1),Ofs(RetF));
                PNext: 0);
  pTDe      : RPatch = (
                Ver  : 0;
                FName: 'TDEGA.EXE';
                FSize: 66517;
                PLocs: ($87ED,$87EF);
                PTyps: (Ofs(AX0),Ofs(Ret));
                PNext: 0);
  pTDc      : RPatch = (
                Ver  : 0;
                FName: 'TDCGA.EXE';
                FSize: 57472;
                PLocs: ($6FD6,$6FD8);
                PTyps: (Ofs(AX0),Ofs(Ret));
                PNext: Ofs(pTDe));
  pTDIIt    : RPatch = (
                Ver  : 0;
                FName: 'TD2TDY.EXE';
                FSize: 103905;
                PLocs: ($10927,$10A3D);
                PTyps: (Ofs(TD2),Ofs(Jnz));
                PNext: 0);
  pTDIIe    : RPatch = (
                Ver  : 0;
                FName: 'TD2EGA.EXE';
                FSize: 114421;
                PLocs: ($133C3,$134D9);
                PTyps: (Ofs(TD2),Ofs(Jnz));
                PNext: Ofs(pTDIIt));
  pTDIIc    : RPatch = (
                Ver  : 0;
                FName: 'TD2CGA.EXE';
                FSize: 104149;
                PLocs: ($10C78,$10D8E);
                PTyps: (Ofs(TD2),Ofs(Jnz));
                PNext: Ofs(pTDIIe));
  pTDIII    : RPatch = (
                Ver  : 0;
                FName: 'TD3.EXE';
                FSize: 137845;
                PLocs: ($3CCC,0);
                PTyps: (Ofs(N2),0);
                PNext: 0);
  pTetris   : RPatch = (
                Ver  : 0;
                FName: 'TETRISC.EXE';
                FSize: 272446;
                PLocs: ($1F48C,0);
                PTyps: (Ofs(N3),0);
                PNext: 0);
  pBOB      : RPatch = (
                Ver  : 0;
                FName: 'BOB.EXE';
                FSize: 220135;
                PLocs: ($7658,0);
                PTyps: (Ofs(N2),0);
                PNext: 0);
  pThexder  : RPatch = (
                Ver  : 0;
                FName: 'THEXDER.COM';
                FSize: 2892;
                PLocs: ($41,$24F);
                PTyps: (Ofs(Thexder),Ofs(N3));
                PNext: 0);
  pThexderII: RPatch = (
                Ver  : 0;
                FName: 'GAME.EXE';
                FSize: 37378;
                PLocs: ($8EFA,0);
                PTyps: (Ofs(Ret),0);
                PNext: 0);
  pTie       : RPatch = (
                Ver  : 1.0;
                FName: 'FRONT.OVL';
                FSize: 408260;
                PLocs: ($3D196,$3D199);
                PTyps: (Ofs(AX1),Ofs(RetF));
                PNext: 0);
  pLore     : RPatch = (
                Ver  : 0;
                FName: 'LORE.EXE';
                FSize: 79664;
                PLocs: ($E,$14);
                PTyps: (Ofs(LoreS),Ofs(LoreC));
                PNext: 0);
  pSavage   : RPatch = (
                Ver  : 1.0;
                FName: 'GAME.OVR';
                FSize: 310572;
                PLocs: ($4171,0);
                PTyps: (Ofs(Treasure),0);
                PNext: 0);
  pTNTe     : RPatch = (
                Ver  : 0;
                FName: 'TNTEGA.EXE';
                FSize: 344607;
                PLocs: ($40,0);
                PTyps: (Ofs(Jmp3),0);
                PNext: 0);
  pTNTc     : RPatch = (
                Ver  : 0;
                FName: 'TNTCGA.EXE';
                FSize: 344349;
                PLocs: ($40,0);
                PTyps: (Ofs(Jmp3),0);
                PNext: Ofs(pTNTe));
  pTurbo    : RPatch = (
                Ver  : 0;
                FName: 'TOUTRUN.COM';
                FSize: 0;
                PLocs: (0,0);
                PTyps: (Ofs(Turbo),0);
                PNext: 0);
  pUltimaI  : RPatch = (
                Ver  : 0;
                FName: 'ULTIMA.EXE';
                FSize: 36880;
                PLocs: ($E,$14);
                PTyps: (Ofs(Ultima1S),Ofs(Ultima1C));
                PNext: 0);
  pUltimaIIo : RPatch = (
                Ver  : 0.001;
                FName: 'ULTIMAII.EXE';
                FSize: 37344;
                PLocs: ($E,$14);
                PTyps: (Ofs(Ultima2S),Ofs(Ultima2C));
                PNext: 0);
  pUltimaII  : RPatch = (
                Ver  : 0;
                FName: 'ULTIMAII.COM';
                FSize: 35493;
                PLocs: ($0,0);
                PTyps: (Ofs(UltimaII),0);
                PNext: Ofs(pUltimaIIo));
  pUltimaIII2: RPatch = (
                Ver  : 0;
                FName: 'BOOTUP.COM';
                FSize: 19572;
                PLocs: ($116E,0);
                PTyps: (Ofs(N3),0);
                PNext: 0);
  pUltimaIII : RPatch = (
                Ver  : 0;
                FName: 'ULTIMA.COM';
                FSize: 36692;
                PLocs: ($5C8D,0);
                PTyps: (Ofs(N3),0);
                PNext: Ofs(pUltimaIII2));
  pUltimaIV  : RPatch = (
                Ver  : 0;
                FName: 'AVATAR.EXE';
                FSize: 98208;
                PLocs: ($E,$14);
                PTyps: (Ofs(Ultima4S),Ofs(Ultima4C));
                PNext: 0);
  pUltimaV   : RPatch = (
                Ver  : 0;
                FName: 'ULTIMA.EXE';
                FSize: 36576;
                PLocs: ($E,$14);
                PTyps: (Ofs(Ultima5S),Ofs(Ultima5C));
                PNext: 0);
  pUltimaVI  : RPatch = (
                Ver  : 0;
                FName: 'ULTIMA6.COM';
                FSize: 0;
                PLocs: (0,0);
                PTyps: (Ofs(Ultima6),0);
                PNext: 0);
  pUMS       : RPatch = (
                Ver  : 0;
                FName: 'UMS.EXE';
                FSize: 275968;
                PLocs: ($22B3C,0);
                PTyps: (Ofs(RetF),0);
                PNext: 0);
  pVette     : RPatch = (
                Ver  : 0;
                FName: 'VETTE.EXE';
                FSize: 247047;
                PLocs: ($3B969,0);
                PTyps: (Ofs(Vette),0);
                PNext: 0);
  pWarME     : RPatch = (
                Ver  : 0;
                FName: 'LORD.EXE';
                FSize: 139792;
                PLocs: ($A630,0);
                PTyps: (Ofs(N2),0);
                PNext: 0);
  pWCS       : RPatch = (
                Ver  : 0;
                FName: 'WCS.EXE';
                FSize: 109056;
                PLocs: ($2172,0);
                PTyps: (Ofs(Jmp3),0);
                PNext: 0);
  pWGHII     : RPatch = (
                Ver  : 0;
                FName: 'HKY.COM';
                FSize: 0;
                PLocs: (0,0);
                PTyps: (Ofs(WGH2),0);
                PNext: 0);
  pWelltris  : RPatch = (
                Ver  : 0;
                FName: 'WELLTRIS.EXE';
                FSize: 50838;
                PLocs: ($1F34,$2781);
                PTyps: (Ofs(N3),Ofs(Jmp));
                PNext: 0);
  pWingCom  : RPatch = (
                Ver  : 0;
                FName: 'WC.EXE';
                FSize: 302384;
                PLocs: ($498BF,0);
                PTyps: (Ofs(RetF),0);
                PNext: 0);
  pWinter   : RPatch = (
                Ver  : 0;
                FName: 'WINTER.EXE';
                FSize: 2096;
                PLocs: ($3AD,0);
                PTyps: (Ofs(Jmp),0);
                PNext: 0);
  pWrath    : RPatch = (
                Ver  : 1.01;
                FName: 'WRATH.EXE';
                FSize: 32897;
                PLocs: ($3319,$331C);
                PTyps: (Ofs(N3),Ofs(N3));
                PNext: 0);
  pXWingP2   : RPatch = (
                Ver  : 1.1;
                FName: 'FRONTEND.OVL';
                FSize: 565824;
                PLocs: ($7E828,$7E82B);
                PTyps: (Ofs(AX1),Ofs(RetF));
                PNext: 0);
  pXWingP1   : RPatch = (
                Ver  : 1.002;
                FName: 'FRONTEND.OVL';
                FSize: 565728;
                PLocs: ($7E7C8,$7E7CB);
                PTyps: (Ofs(AX1),Ofs(RetF));
                PNext: Ofs(pXWingP2));
  pXWing    : RPatch = (
                Ver  : 1.001;
                FName: 'FRONTEND.OVL';
                FSize: 537230;
                PLocs: ($7C1B0,$7C1B3);
                PTyps: (Ofs(AX1),Ofs(RetF));
                PNext: Ofs(pXWingP1));
  pXWingB    : RPatch = (
                Ver  : 1.0;
                FName: 'BFRONT.OVL';
                FSize: 583396;
                PLocs: ($7FC42,$7FC45);
                PTyps: (Ofs(AX1),Ofs(RetF));
                PNext: Ofs(pXWing));
  pZanyt    : RPatch = (
                Ver  : 0;
                FName: 'TZANY.COM';
                FSize: 65167;
                PLocs: ($FE14,0);
                PTyps: (Ofs(N2),0);
                PNext: 0);
  pZanye    : RPatch = (
                Ver  : 0;
                FName: 'ZANY.COM';
                FSize: 63153;
                PLocs: ($F636,0);
                PTyps: (Ofs(N2),0);
                PNext: Ofs(pZanyt));

  Numpats   = 176;
  Titles    : Array [1..Numpats] of Record
                Title: String[32];
                Brand: String[27];
                Patch: Word
              End = (
             (Title: '2400A.D.                        ';
              Brand: 'Origin Systems             ';
              Patch: Ofs(p2400AD)),
             (Title: '4 x 4 Off Road Racing           ';
              Brand: 'Epyx                       ';
              Patch: Ofs(p4x4ORR)),
             (Title: '4D Sports Boxing                ';
              Brand: 'Mindscape                  ';
              Patch: Ofs(p4DSB)),
             (Title: '4th & Inches                    ';
              Brand: 'Accolade                   ';
              Patch: Ofs(p4Inch)),
             (Title: '688 Attack Sub                  ';
              Brand: 'Electronic Arts            ';
              Patch: Ofs(p688AS)),
             (Title: 'Advanced Flight Trainer         ';
              Brand: 'Electronic Arts            ';
              Patch: Ofs(pAFT)),
             (Title: 'Age of Empires                  ';
              Brand: 'Microsoft                  ';
              Patch: Ofs(pAOE)),
             (Title: 'Age of Empires II               ';
              Brand: 'Microsoft                  ';
              Patch: Ofs(pAOEII)),
             (Title: 'Alone in the Dark               ';
              Brand: 'Interplay                  ';
              Patch: Ofs(pAlone)),
             (Title: 'An American Tail                ';
              Brand: 'Capstone                   ';
              Patch: Ofs(pATail)),
             (Title: 'Ancient Art of War              ';
              Brand: 'Broderbund                 ';
              Patch: Ofs(pAAW)),
             (Title: 'Ancient Art of War at Sea       ';
              Brand: 'Broderbund                 ';
              Patch: Ofs(pAAWS)),
             (Title: 'Ancient Art of War in the Skies ';
              Brand: 'MicroProse                 ';
              Patch: Ofs(pAAWAv2)),
             (Title: 'Archer Maclean''s Pool           ';
              Brand: 'Virgin Games               ';
              Patch: Ofs(pPool)),
             (Title: 'Arctic Fox                      ';
              Brand: 'Electronic Arts            ';
              Patch: Ofs(pAFox)),
             (Title: 'Armada 2525                     ';
              Brand: 'Interstel                  ';
              Patch: Ofs(pArmada)),
             (Title: 'Auto Duel                       ';
              Brand: 'Origin Systems             ';
              Patch: Ofs(pAutoDuel)),
             (Title: 'Bad Blood                       ';
              Brand: 'Origin Systems             ';
              Patch: Ofs(pBadBlood)),
             (Title: 'Bad Street Brawler              ';
              Brand: 'Mindscape                  ';
              Patch: Ofs(pBadStBr)),
             (Title: 'Balance of Power                ';
              Brand: 'Mindscape                  ';
              Patch: Ofs(pBOP)),
             (Title: 'Batman                          ';
              Brand: 'Data East                  ';
              Patch: Ofs(pBatmanP)),
             (Title: 'Battle Chess                    ';
              Brand: 'Interplay                  ';
              Patch: Ofs(pBChess2)),
             (Title: 'Battle Chess II                 ';
              Brand: 'Interplay                  ';
              Patch: Ofs(pBChessII1)),
             (Title: 'Battle Hawks 1942               ';
              Brand: 'Lucasfilm Games            ';
              Patch: Ofs(pBH1942)),
             (Title: 'Battletech                      ';
              Brand: 'Infocom                    ';
              Patch: Ofs(pBTech)),
             (Title: 'BC''s Quest for Tires            ';
              Brand: 'Sierra On-Line             ';
              Patch: Ofs(pBCsQc)),
             (Title: 'Black Cauldron                  ';
              Brand: 'Sierra On-Line             ';
              Patch: Ofs(pBCauld)),
             (Title: 'Bop''n Wrestle                   ';
              Brand: 'Mindscape                  ';
              Patch: Ofs(pBopn)),
             (Title: 'Budokan                         ';
              Brand: 'Electronic Arts            ';
              Patch: Ofs(pBudo)),
             (Title: 'California Games                ';
              Brand: 'Epyx                       ';
              Patch: Ofs(pCalGam)),
             (Title: 'California Games II             ';
              Brand: 'Epyx                       ';
              Patch: Ofs(pCalGam2)),
             (Title: 'Carl Lewis Challenge            ';
              Brand: 'Psygnosis                  ';
              Patch: Ofs(pCarl)),
             (Title: 'Castles                         ';
              Brand: 'Interplay                  ';
              Patch: Ofs(pCastlesA)),
             (Title: 'Castlevania                     ';
              Brand: 'Konami                     ';
              Patch: Ofs(pCastleC)),
             (Title: 'Centurion                       ';
              Brand: 'Electronic Arts            ';
              Patch: Ofs(pCenturi)),
             (Title: 'Champions of Krynn              ';
              Brand: 'Strategic Simulations, Inc.';
              Patch: Ofs(pKrynn)),
             (Title: 'Championship Boxing              ';
              Brand: 'Sierra On-Line             ';
              Patch: Ofs(pChampBox)),
             (Title: 'Chuck Yeager''s Air Combat       ';
              Brand: 'Electronic Arts            ';
              Patch: Ofs(pAirCom0)),
             (Title: 'Civilization                    ';
              Brand: 'MicroProse                 ';
              Patch: Ofs(pCiv4)),
             (Title: 'Civilization: Call To Power     ';
              Brand: 'Activision                 ';
              Patch: Ofs(pCivCTP10)),
             (Title: 'Colonel''s Bequest               ';
              Brand: 'Sierra On-Line             ';
              Patch: Ofs(pColBeq)),
             (Title: 'Contra                          ';
              Brand: 'Konami                     ';
              Patch: Ofs(pContra)),
             (Title: 'Crossbow                        ';
              Brand: 'Absolute Entertainment     ';
              Patch: Ofs(pCrossbow)),
             (Title: 'Curse of the Azure Bonds        ';
              Brand: 'Strategic Simulations, Inc.';
              Patch: Ofs(pAzure)),
             (Title: 'Dark Castle                     ';
              Brand: 'Three-Sixty                ';
              Patch: Ofs(pDC)),
             (Title: 'Darklands                       ';
              Brand: 'MicroProse                 ';
              Patch: Ofs(pDarkland6)),
             (Title: 'Dawn Raider                     ';
              Brand: 'Softstar                   ';
              Patch: Ofs(pDawnRaid)),
             (Title: 'Death Sword                     ';
              Brand: 'Epyx                       ';
              Patch: Ofs(pDSword)),
             (Title: 'Death Track                     ';
              Brand: 'Activision                 ';
              Patch: Ofs(pDTrack)),
             (Title: 'Die Hard II                     ';
              Brand: 'Grandslam Video Ltd.       ';
              Patch: Ofs(pDH2)),
             (Title: 'Disney Animation Studio         ';
              Brand: 'Walt Disney Software Produc';
              Patch: Ofs(pDAS)),
             (Title: 'Double Tetris                   ';
              Brand: 'Soft-World Internationl    ';
              Patch: Ofs(pDTv)),
             (Title: 'Dragon''s Lair                   ';
              Brand: 'Bluth Group, Ltd.          ';
              Patch: Ofs(pDragon)),
             (Title: 'Dragons of Flame                ';
              Brand: 'Strategic Simulations, Inc.';
              Patch: Ofs(pFlame)),
             (Title: 'Elder Scrolls I                 ';
              Brand: 'Bethesda Softworks         ';
              Patch: Ofs(pElder)),
             (Title: 'Empire                          ';
              Brand: 'Interstel                  ';
              Patch: Ofs(pEmpire)),
             (Title: 'England Football Championship   ';
              Brand: 'Grandslam Video Ltd.       ';
              Patch: Ofs(pEngland)),
             (Title: 'Eye of the Beholder             ';
              Brand: 'Strategic Simulations, Inc.';
              Patch: Ofs(pEOB)),
             (Title: 'Face Off!                       ';
              Brand: 'Game Star                  ';
              Patch: Ofs(pFaceOff)),
             (Title: 'FlashBack                       ';
              Brand: 'Strategic Simulations, Inc.';
              Patch: Ofs(pFBfre)),
             (Title: 'Future Wars                     ';
              Brand: 'Interplay                  ';
              Patch: Ofs(pFuture)),
             (Title: 'Galaxy Empire                   ';
              Brand: 'Kingformation Software     ';
              Patch: Ofs(pGEmpire)),
             (Title: 'Galaxy Fleet                    ';
              Brand: 'Kingformation Software     ';
              Patch: Ofs(pGFleet)),
             (Title: 'Gauntlet                        ';
              Brand: 'Mindscape                  ';
              Patch: Ofs(pGauntlet)),
             (Title: 'Gauntlet II                     ';
              Brand: 'Mindscape                  ';
              Patch: Ofs(pGauntII)),
             (Title: 'Gold Rush                       ';
              Brand: 'Sierra On-Line             ';
              Patch: Ofs(pGoldRush)),
             (Title: 'Golden Axe                      ';
              Brand: 'Sega                       ';
              Patch: Ofs(pGoldAxe)),
             (Title: 'Grand Prix Circuit              ';
              Brand: 'Accolade                   ';
              Patch: Ofs(pGPCc)),
             (Title: 'Hacker                          ';
              Brand: 'Activision                 ';
              Patch: Ofs(pHacker)),
             (Title: 'Hardball II                     ';
              Brand: 'Accolade                   ';
              Patch: Ofs(pHBIIc)),
             (Title: 'Hardball III                    ';
              Brand: 'Accolade                   ';
              Patch: Ofs(pHBIII)),
             (Title: 'Heroes of the Lance             ';
              Brand: 'Strategic Simulations, Inc.';
              Patch: Ofs(pHeroes)),
             (Title: 'Hillsfar                        ';
              Brand: 'Strategic Simulations, Inc.';
              Patch: Ofs(pHillsfar)),
             (Title: 'Indianapolis 500                ';
              Brand: 'Electronic Arts            ';
              Patch: Ofs(pIndy500)),
             (Title: 'Indy & Last Crusade: Graphic    ';
              Brand: 'Lucasfilm Games            ';
              Patch: Ofs(pIndy3)),
             (Title: 'Indy & Fate of Atlantis         ';
              Brand: 'Lucasfilm Games            ';
              Patch: Ofs(pIndy4)),
             (Title: 'IndyCar Racing                  ';
              Brand: 'Papyrus                    ';
              Patch: Ofs(pIndyCar2)),
             (Title: 'Italy 1990                      ';
              Brand: 'U.S. Gold                  ';
              Patch: Ofs(pItaly)),
             (Title: 'Jack Nicklaus Unlimited Golf    ';
              Brand: 'Accolade                   ';
              Patch: Ofs(pJNUn)),
             (Title: 'John Madden Football            ';
              Brand: 'Electronic Arts            ';
              Patch: Ofs(pJMF)),
             (Title: 'King''s Quest II                 ';
              Brand: 'Sierra On-Line             ';
              Patch: Ofs(pKQII)),
             (Title: 'Kingmaker                       ';
              Brand: 'Avalon Hill                ';
              Patch: Ofs(pKing1)),
             (Title: 'Kings of the Beach              ';
              Brand: 'Electronic Arts            ';
              Patch: Ofs(pKOBc)),
             (Title: 'Lakers vs. Celtics              ';
              Brand: 'Electronic Arts            ';
              Patch: Ofs(pLvsC)),
             (Title: 'Legends of Valour               ';
              Brand: 'Strategic Simulations, Inc.';
              Patch: Ofs(pLOV)),
             (Title: 'Leisure Suit Larry I            ';
              Brand: 'Sierra On-Line             ';
              Patch: Ofs(pLSLI)),
             (Title: 'Lemmings                        ';
              Brand: 'Psygnosis                  ';
              Patch: Ofs(pLemmingC)),
             (Title: 'Life and Death                  ';
              Brand: 'Software Toolworks         ';
              Patch: Ofs(pLND)),
             (Title: 'Lost Vikings                    ';
              Brand: 'Iterplay                   ';
              Patch: Ofs(pLostVik)),
             (Title: 'Magic Candle                    ';
              Brand: 'Mindcraft                  ';
              Patch: Ofs(pMCandle)),
             (Title: 'Martian Dreams                  ';
              Brand: 'Origin Systems             ';
              Patch: Ofs(pMartian)),
             (Title: 'Master Ninja                    ';
              Brand: 'Paragon                    ';
              Patch: Ofs(pMNinja)),
             (Title: 'Master of Orion                 ';
              Brand: 'MicroProse                 ';
              Patch: Ofs(pOrion)),
             (Title: 'Mean 18                         ';
              Brand: 'Accolade                   ';
              Patch: Ofs(pMean18)),
             (Title: 'Mean Streets                    ';
              Brand: 'Access Software Inc.       ';
              Patch: Ofs(pMStreets)),
             (Title: 'Mechwarrior                     ';
              Brand: 'Activision                 ';
              Patch: Ofs(pMechWar)),
             (Title: 'Might and Magic                 ';
              Brand: 'New World Computing, Inc.  ';
              Patch: Ofs(pMMI)),
             (Title: 'Might and Magic III             ';
              Brand: 'New World Computing, Inc.  ';
              Patch: Ofs(pMMIII)),
             (Title: 'Mike Ditka Ultimate Football    ';
              Brand: 'Accolade                   ';
              Patch: Ofs(pMDFB)),
             (Title: 'Mission UFO                     ';
              Brand: 'Cliffs StudyWare           ';
              Patch: Ofs(pMisUFO)),
             (Title: 'Moebius                         ';
              Brand: 'Origin Systems             ';
              Patch: Ofs(pMoebius)),
             (Title: 'Mortal Kombat                   ';
              Brand: 'Virgin Games               ';
              Patch: Ofs(pKombat1)),
             (Title: 'Mortal Kombat II (CD)           ';
              Brand: 'Virgin Games               ';
              Patch: Ofs(pKombat2CD)),
             (Title: 'Mortal Kombat II (Disk)         ';
              Brand: 'Virgin Games               ';
              Patch: Ofs(pKombat2D1)),
             (Title: 'Oh No More Lemmings             ';
              Brand: 'Psygnosis                  ';
              Patch: Ofs(pOhNoT)),
             (Title: 'One on One                      ';
              Brand: 'Electronic Arts            ';
              Patch: Ofs(p1on1)),
             (Title: 'Perfect General                 ';
              Brand: 'Quantum Quality Productions';
              Patch: Ofs(pPGeneral)),
             (Title: 'Pipe Dream                      ';
              Brand: 'Lucasfilm Games            ';
              Patch: Ofs(pPipe)),
             (Title: 'Pirates! Gold                   ';
              Brand: 'MicroProse                 ';
              Patch: Ofs(pPirates3)),
             (Title: 'Platoon                         ';
              Brand: 'Data East                  ';
              Patch: Ofs(pPlatC)),
             (Title: 'Pool of Radiance                ';
              Brand: 'Strategic Simulations, Inc.';
              Patch: Ofs(pPoolRad)),
             (Title: 'Populous                        ';
              Brand: 'Electronic Arts            ';
              Patch: Ofs(pPopulous)),
             (Title: 'PowerMonger                     ';
              Brand: 'Electronic Arts            ';
              Patch: Ofs(pPMonger)),
             (Title: 'Predator II                     ';
              Brand: 'Image Works                ';
              Patch: Ofs(pPred2)),
             (Title: 'Prince of Persia                ';
              Brand: 'Broderbund                 ';
              Patch: Ofs(pPrince)),
             (Title: 'Prince of Persia II             ';
              Brand: 'Broderbund                 ';
              Patch: Ofs(pPrince2)),
             (Title: 'Psychic War                     ';
              Brand: 'Kyodai                     ';
              Patch: Ofs(pPW)),
             (Title: 'Questron II                     ';
              Brand: 'Strategic Simulations, Inc.';
              Patch: Ofs(pQuest2)),
             (Title: 'Rad Warrior                     ';
              Brand: 'Epyx                       ';
              Patch: Ofs(pRW)),
             (Title: 'Railroad Tycoon Deluxe          ';
              Brand: 'MicroProse                 ';
              Patch: Ofs(pRrTDlx)),
             (Title: 'Rally                           ';
              Brand: 'Europress Software         ';
              Patch: Ofs(pRally1)),
             (Title: 'Rampage                         ';
              Brand: 'Activision                 ';
              Patch: Ofs(pRampage)),
             (Title: 'Rampart                         ';
              Brand: 'Electronic Arts            ';
              Patch: Ofs(pRampart)),
             (Title: 'Red Storm Rising                ';
              Brand: 'MicroProse                 ';
              Patch: Ofs(pRSR)),
             (Title: 'Rush''n Attack                   ';
              Brand: 'Konami                     ';
              Patch: Ofs(pRushn)),
             (Title: 'Secret of the Silver Blades     ';
              Brand: 'Strategic Simulations, Inc.';
              Patch: Ofs(pSilver)),
             (Title: 'Secret Weapons of the Luftwaffe ';
              Brand: 'Lucasfilm Games            ';
              Patch: Ofs(pSWOTL)),
             (Title: 'Sim City                        ';
              Brand: 'Maxis                      ';
              Patch: Ofs(pSimCity0)),
             (Title: 'Sim Earth                       ';
              Brand: 'Maxis                      ';
              Patch: Ofs(pSimEarth)),
             (Title: 'Simpsons                        ';
              Brand: 'Konami                     ';
              Patch: Ofs(pSimpsons)),
             (Title: 'Ski or Die                      ';
              Brand: 'Electronic Arts            ';
              Patch: Ofs(pSkiC)),
             (Title: 'Space 1889                      ';
              Brand: 'Paragon Software           ';
              Patch: Ofs(p1889)),
             (Title: 'Space Quest II                  ';
              Brand: 'Sierra On-Line             ';
              Patch: Ofs(pSQII)),
             (Title: 'Space Quest IV                  ';
              Brand: 'Sierra On-Line             ';
              Patch: Ofs(pSQIV)),
             (Title: 'Space Station Oblivion          ';
              Brand: 'Epyx                       ';
              Patch: Ofs(pOblivion)),
             (Title: 'Spear of Destiny                ';
              Brand: 'Apogee                     ';
              Patch: Ofs(pSOD)),
             (Title: 'Star Control                    ';
              Brand: 'Accolade                   ';
              Patch: Ofs(pStarCon)),
             (Title: 'Star Trek 25th Anniversary      ';
              Brand: 'Interplay                  ';
              Patch: Ofs(pStarTrek)),
             (Title: 'Stormovik                       ';
              Brand: 'Electronic Arts            ';
              Patch: Ofs(pStorm)),
             (Title: 'Street Rod                      ';
              Brand: 'California Dreams          ';
              Patch: Ofs(pRod)),
             (Title: 'Street Sports Baseball          ';
              Brand: 'Epyx                       ';
              Patch: Ofs(pSSBas)),
             (Title: 'Street Sports Basketball        ';
              Brand: 'Epyx                       ';
              Patch: Ofs(pSSBak)),
             (Title: 'Stunts                          ';
              Brand: 'Broderbund                 ';
              Patch: Ofs(pStunts)),
             (Title: 'Supaplex                        ';
              Brand: 'Digital Integration        ';
              Patch: Ofs(pSupa)),
             (Title: 'SuperSki II                     ';
              Brand: 'Microids                   ';
              Patch: Ofs(pSuper2)),
             (Title: 'Super Tetris                    ';
              Brand: 'Spectrum HoloByte          ';
              Patch: Ofs(pSupTet)),
             (Title: 'Task Force 1942                 ';
              Brand: 'MicroProse                 ';
              Patch: Ofs(pTF1942)),
             (Title: 'Test Drive                      ';
              Brand: 'Accolade                   ';
              Patch: Ofs(pTDc)),
             (Title: 'Test Drive II                   ';
              Brand: 'Accolade                   ';
              Patch: Ofs(pTDIIc)),
             (Title: 'Test Drive III                  ';
              Brand: 'Accolade                   ';
              Patch: Ofs(pTDIII)),
             (Title: 'Tetris Classic                  ';
              Brand: 'Spectrum HoloByte          ';
              Patch: Ofs(pTetris)),
             (Title: 'Their Finest Hour               ';
              Brand: 'Lucasfilm Games            ';
              Patch: Ofs(pBOB)),
             (Title: 'Thexder                         ';
              Brand: 'Sierra On-Line             ';
              Patch: Ofs(pThexder)),
             (Title: 'Thexder II                      ';
              Brand: 'Sierra On-Line             ';
              Patch: Ofs(pThexderII)),
             (Title: 'Tie Fighter                     ';
              Brand: 'Lucasfilm Games            ';
              Patch: Ofs(pTie)),
             (Title: 'Times of Lore                   ';
              Brand: 'Origin Systems             ';
              Patch: Ofs(pLore)),
             (Title: 'Treasures of the Savage Frontier';
              Brand: 'Strategic Simulations, Inc.';
              Patch: Ofs(pSavage)),
             (Title: 'Tunnels & Trolls                ';
              Brand: 'New World Computing, Inc.  ';
              Patch: Ofs(pTNTc)),
             (Title: 'Turbo Outrun                    ';
              Brand: 'Sega                       ';
              Patch: Ofs(pTurbo)),
             (Title: 'Ultima I                        ';
              Brand: 'Origin Systems             ';
              Patch: Ofs(pUltimaI)),
             (Title: 'Ultima II                       ';
              Brand: 'Sierra / Origin Systems    ';
              Patch: Ofs(pUltimaII)),
             (Title: 'Ultima III                      ';
              Brand: 'Origin Systems             ';
              Patch: Ofs(pUltimaIII)),
             (Title: 'Ultima IV                       ';
              Brand: 'Origin Systems             ';
              Patch: Ofs(pUltimaIV)),
             (Title: 'Ultima V                        ';
              Brand: 'Origin Systems             ';
              Patch: Ofs(pUltimaV)),
             (Title: 'Ultima VI                       ';
              Brand: 'Origin Systems             ';
              Patch: Ofs(pUltimaVI)),
             (Title: 'Universal Military Simulator    ';
              Brand: 'Rainbird Software          ';
              Patch: Ofs(pUMS)),
             (Title: 'Vette!                          ';
              Brand: 'Spectrum HoloByte          ';
              Patch: Ofs(pVette)),
             (Title: 'War in Middle Earth             ';
              Brand: 'Melbourne House            ';
              Patch: Ofs(pWarME)),
             (Title: 'Wargame Construction Set        ';
              Brand: 'Strategic Simulations, Inc.';
              Patch: Ofs(pWCS)),
             (Title: 'Wayne Gretzky Hockey II         ';
              Brand: 'Bethesda Softworks         ';
              Patch: Ofs(pWGHII)),
             (Title: 'Welltris                        ';
              Brand: 'Spectrum HoloByte          ';
              Patch: Ofs(pWelltris)),
             (Title: 'Wing Commander                  ';
              Brand: 'Origin Systems             ';
              Patch: Ofs(pWingCom)),
             (Title: 'Winter Supersports              ';
              Brand: 'Flair Software Ltd.        ';
              Patch: Ofs(pWinter)),
             (Title: 'Wrath of the Demon              ';
              Brand: 'ReadySoft Inc.             ';
              Patch: Ofs(pWrath)),
             (Title: 'X-Wing                          ';
              Brand: 'Lucasfilm Games            ';
              Patch: Ofs(pXWingB)),
             (Title: 'Zany Golf                       ';
              Brand: 'Electronic Arts            ';
              Patch: Ofs(pZanye))
             );
