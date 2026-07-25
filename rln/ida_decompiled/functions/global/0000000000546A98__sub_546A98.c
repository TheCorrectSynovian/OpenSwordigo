/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000546A98
 * Mangled: sub_546A98
 * Demangled: sub_546A98
 *
 * Callers: 5
 *   0x00000000003C1890  Caver::PlayerProfile::FormattedTimePlayed(double,bool)
 *   0x00000000003CAB34  Caver::DebugInfoOverlay::Toggle(void)
 *   0x00000000003CC348  Caver::DebugInfoOverlay::FormatByteSize(int)
 *   0x0000000000488208  Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *   0x000000000054695C  sub_54695C
 *
 * Callees: 8
 *   0x0000000000203ED0  sub_203ED0
 *   0x00000000005210E8  sub_5210E8
 *   0x0000000000521E3C  sub_521E3C
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053DB28  sub_53DB28
 *   0x000000000055CDC4  sub_55CDC4
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 23
 *   insn=0x0000000000546ACC string=0x0000000000546AD0 "B ""
 *   insn=0x0000000000546AEC string=0x0000000000546AF0 "b"
 *   insn=0x0000000000546AF4 string=0x0000000000546AFC "b."
 *   insn=0x0000000000546AFC string=0x0000000000546B00 "zi"
 *   insn=0x0000000000546B0C string=0x0000000000546B10 "`"
 *   insn=0x0000000000546B14 string=0x0000000000546B18 "y"
 *   insn=0x0000000000546B1C string=0x0000000000546B20 "`."
 *   insn=0x0000000000546B20 string=0x0000000000546B24 "a""
 *   insn=0x0000000000546B38 string=0x0000000000546B3C "B@"
 *   insn=0x0000000000546B40 string=0x0000000000546B44 "b"
 *   insn=0x0000000000546B68 string=0x0000000000546B6C "`"
 *   insn=0x0000000000546B70 string=0x0000000000546B74 "5@"
 *   insn=0x0000000000546B78 string=0x0000000000546B7C "B`"
 *   insn=0x0000000000546B7C string=0x0000000000546B80 "b*"
 *   insn=0x0000000000546B80 string=0x0000000000546B84 "Yi"
 *   insn=0x0000000000546BB0 string=0x0000000000546BB4 "w."
 *   insn=0x0000000000546BBC string=0x0000000000546BC0 "A"
 *   insn=0x0000000000546BC4 string=0x0000000000546BC8 "x"
 *   insn=0x0000000000546BC8 string=0x0000000000546BCC "a*@"
 *   insn=0x0000000000546BD4 string=0x0000000000546BD8 " `"
 *   insn=0x0000000000546BDC string=0x0000000000546BE0 "`"
 *   insn=0x0000000000546BF4 string=0x0000000000546BF8 "v"
 *   insn=0x0000000000546BF8 string=0x0000000000546BFC "3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_546A98(__int64 a1, int a2)
{
  __int64 v2; // x20

  v2 = a1 + 88;
  sub_521E3C(a1 + 88);
  *(_QWORD *)(v2 + 216) = 0;
  *(_BYTE *)(v2 + 224) = 0;
  *(_BYTE *)(v2 + 225) = 0;
  *(_QWORD *)(v2 + 232) = 0;
  *(_QWORD *)(v2 + 240) = 0;
  *(_QWORD *)(v2 + 248) = 0;
  *(_QWORD *)(v2 + 256) = 0;
  *(_QWORD *)a1 = &unk_6DA888;
  *(_QWORD *)(a1 + 88) = &unk_6DA8B0;
  sub_5210E8(v2, 0);
  *(_QWORD *)a1 = off_6B7298;
  *(_QWORD *)(a1 + 88) = off_6B72C0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = off_6B7710;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  sub_53DB28((_QWORD *)(a1 + 64));
  *(_QWORD *)(a1 + 8) = off_6DA7B0;
  *(_DWORD *)(a1 + 72) = a2 | 0x10;
  *(_QWORD *)(a1 + 80) = &byte_6FD2F8;
  return sub_5210E8(v2, a1 + 8);
}

