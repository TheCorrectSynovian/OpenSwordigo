/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029EB20
 * Mangled: _ZN5Caver34SnappingMonsterControllerComponentC2Ev
 * Demangled: Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(void)
 *
 * Callers: 2
 *   0x00000000001F72F0  Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(void)
 *   0x00000000001FDBC0  Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(void)
 *
 * Callees: 10
 *   0x00000000001F4020  Caver::MonsterControllerComponent::InitWithComponent(Caver::MonsterControllerComponent const*)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001FA3B0  Caver::MonsterControllerComponent::MonsterControllerComponent(void)
 *   0x0000000000202D00  Caver::MonsterControllerComponent::~MonsterControllerComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 240
 *   insn=0x000000000029EB38 string=0x000000000029EB3C "Z"
 *   insn=0x000000000029EB3C string=0x000000000029EB40 "H"
 *   insn=0x000000000029EB4C string=0x000000000029EB50 "(""
 *   insn=0x000000000029EB4C string=0x00000000001FA3B0 "0'"
 *   insn=0x000000000029EB50 string=0x000000000029EB54 ""
 *   insn=0x000000000029EB54 string=0x000000000029EB58 "6""
 *   insn=0x000000000029EB5C string=0x000000000029EB60 "7""
 *   insn=0x000000000029EB60 string=0x000000000029EB64 "\tA"
 *   insn=0x000000000029EB68 string=0x000000000029EB6C "i"
 *   insn=0x000000000029EB6C string=0x000000000029EB70 "8""
 *   insn=0x000000000029EB70 string=0x000000000029EB74 "\n"
 *   insn=0x000000000029EB78 string=0x000000000029EB7C "9""
 *   insn=0x000000000029EB7C string=0x000000000029EB80 "@"
 *   insn=0x000000000029EB80 string=0x000000000029EB84 "9+E"
 *   insn=0x000000000029EB84 string=0x000000000029EB88 ""
 *   insn=0x000000000029EB98 string=0x000000000029EB9C "`"
 *   insn=0x000000000029EBB4 string=0x000000000029EBB8 "C"
 *   insn=0x000000000029EBBC string=0x000000000029EBC0 "(C"
 *   insn=0x000000000029EBC4 string=0x000000000029EBC8 ""
 *   insn=0x000000000029EBE0 string=0x000000000029EBE4 "hN"
 *   insn=0x000000000029EBE4 string=0x000000000029EBE8 "A"
 *   insn=0x000000000029EBE8 string=0x0000000000587830 "standAnimation"
 *   insn=0x000000000029EC0C string=0x000000000029EC10 "4`"
 *   insn=0x000000000029EC10 string=0x00000000001F6CE0 "0'"
 *   insn=0x000000000029EC14 string=0x000000000029EC18 "5""
 *   insn=0x000000000029EC28 string=0x000000000029EC2C "A"
 *   insn=0x000000000029EC28 string=0x000000000029ED48 ")""
 *   insn=0x000000000029EC2C string=0x0000000000589409 "attackAnimation"
 *   insn=0x000000000029EC50 string=0x000000000029EC54 "#`"
 *   insn=0x000000000029EC60 string=0x000000000029EC64 "A"
 *   insn=0x000000000029EC64 string=0x000000000029EC68 "A"
 *   insn=0x000000000029EC64 string=0x000000000029ED6C ")""
 *   insn=0x000000000029EC68 string=0x0000000000589419 "blendAnimation"
 *   insn=0x000000000029EC78 string=0x000000000029EC7C "c"
 *   insn=0x000000000029ECA0 string=0x000000000029ECA4 "A"
 *   insn=0x000000000029ECA0 string=0x000000000029ED90 ")""
 *   insn=0x000000000029ECA4 string=0x0000000000588EE9 "attackArea"
 *   insn=0x000000000029ECB4 string=0x000000000029ECB8 "cb"
 *   insn=0x000000000029ECDC string=0x000000000029ECE0 "A"
 *   insn=0x000000000029ECDC string=0x000000000029EDB4 ")""
 *   insn=0x000000000029ECE0 string=0x0000000000589428 "attackSound"
 *   insn=0x000000000029ECF0 string=0x000000000029ECF4 "c"
 *   insn=0x000000000029ED18 string=0x000000000029ED1C "H"
 *   insn=0x000000000029ED18 string=0x000000000029EDD8 ")""
 *   insn=0x000000000029ED28 string=0x000000000029EE9C "]"
 *   insn=0x000000000029ED48 string=0x000000000029ED4C ")=G"
 *   insn=0x000000000029ED4C string=0x000000000029ED50 "!"
 *   insn=0x000000000029ED50 string=0x000000000029ED54 "I"
 *   insn=0x000000000029ED54 string=0x000000000029ED58 "\t"
 *   insn=0x000000000029ED54 string=0x000000000029EDFC "\t"
 *   insn=0x000000000029ED58 string=0x000000000029ED5C "*"
 *   insn=0x000000000029ED5C string=0x000000000029ED60 "\n"
 *   insn=0x000000000029ED64 string=0x000000000029ED68 "("
 *   insn=0x000000000029ED68 string=0x000000000029EE08 "?"
 *   insn=0x000000000029ED6C string=0x000000000029ED70 ")=G"
 *   insn=0x000000000029ED70 string=0x000000000029ED74 "!"
 *   insn=0x000000000029ED74 string=0x000000000029ED78 ")"
 *   insn=0x000000000029ED78 string=0x000000000029ED7C "\t"
 *   insn=0x000000000029ED78 string=0x000000000029EE1C "\t"
 *   insn=0x000000000029ED7C string=0x000000000029ED80 "*"
 *   insn=0x000000000029ED80 string=0x000000000029ED84 "\n"
 *   insn=0x000000000029ED88 string=0x000000000029ED8C "'"
 *   insn=0x000000000029ED8C string=0x000000000029EE28 "?"
 *   insn=0x000000000029ED90 string=0x000000000029ED94 ")=G"
 *   insn=0x000000000029ED94 string=0x000000000029ED98 "!"
 *   insn=0x000000000029ED98 string=0x000000000029ED9C "\t"
 *   insn=0x000000000029ED9C string=0x000000000029EDA0 "\t"
 *   insn=0x000000000029ED9C string=0x000000000029EE3C "\t"
 *   insn=0x000000000029EDA0 string=0x000000000029EDA4 "*"
 *   insn=0x000000000029EDA4 string=0x000000000029EDA8 "\n"
 *   insn=0x000000000029EDAC string=0x000000000029EDB0 "&"
 *   insn=0x000000000029EDB0 string=0x000000000029EE48 "?"
 *   insn=0x000000000029EDB4 string=0x000000000029EDB8 ")=G"
 *   insn=0x000000000029EDB8 string=0x000000000029EDBC "!"
 *   insn=0x000000000029EDC0 string=0x000000000029EDC4 "\t"
 *   insn=0x000000000029EDC0 string=0x000000000029EE5C "\t"
 *   insn=0x000000000029EDC4 string=0x000000000029EDC8 "*"
 *   insn=0x000000000029EDC8 string=0x000000000029EDCC "\n"
 *   insn=0x000000000029EDD0 string=0x000000000029EDD4 "%"
 *   insn=0x000000000029EDD4 string=0x000000000029EE68 "?"
 *   insn=0x000000000029EDD8 string=0x000000000029EDDC ")=G"
 *   insn=0x000000000029EDDC string=0x000000000029EDE0 "!"
 *   insn=0x000000000029EDE4 string=0x000000000029EDE8 "\t"
 *   insn=0x000000000029EDE4 string=0x000000000029EE7C "\t"
 *   insn=0x000000000029EDE8 string=0x000000000029EDEC "*"
 *   insn=0x000000000029EDEC string=0x000000000029EDF0 "\n"
 *   insn=0x000000000029EDF4 string=0x000000000029EDF8 "$"
 *   insn=0x000000000029EDF8 string=0x000000000029EE88 "?"
 *   insn=0x000000000029EDFC string=0x000000000029EE00 "*"
 *   insn=0x000000000029EE00 string=0x000000000029EE04 "\n"
 *   insn=0x000000000029EE10 string=0x000000000029EE14 "d-"
 *   insn=0x000000000029EE1C string=0x000000000029EE20 "*"
 *   insn=0x000000000029EE20 string=0x000000000029EE24 "\n"
 *   insn=0x000000000029EE30 string=0x000000000029EE34 "\-"
 *   insn=0x000000000029EE3C string=0x000000000029EE40 "*"
 *   insn=0x000000000029EE40 string=0x000000000029EE44 "\n"
 *   insn=0x000000000029EE50 string=0x000000000029EE54 "T-"
 *   insn=0x000000000029EE5C string=0x000000000029EE60 "*"
 *   insn=0x000000000029EE60 string=0x000000000029EE64 "\n"
 *   insn=0x000000000029EE70 string=0x000000000029EE74 "L-"
 *   insn=0x000000000029EE7C string=0x000000000029EE80 "*"
 *   insn=0x000000000029EE80 string=0x000000000029EE84 "\n"
 *   insn=0x000000000029EE90 string=0x000000000029EE94 "D-"
 *   insn=0x000000000029EE9C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000029EEA4 string=0x000000000029EEA8 "(a"
 *   insn=0x000000000029EEB0 string=0x000000000029EEB4 "*""
 *   insn=0x000000000029EEB0 string=0x000000000029F000 "`"
 *   insn=0x000000000029EEB4 string=0x000000000029EEB8 "J=G"
 *   insn=0x000000000029EEB8 string=0x000000000029EEBC ")!"
 *   insn=0x000000000029EEBC string=0x000000000029EEC0 "*\t"
 *   insn=0x000000000029EEC0 string=0x000000000029EEC4 "*"
 *   insn=0x000000000029EEC0 string=0x000000000029EFE4 "*"
 *   insn=0x000000000029EEC4 string=0x000000000029EEC8 "K"
 *   insn=0x000000000029EEC8 string=0x000000000029EECC "+"
 *   insn=0x000000000029EED0 string=0x000000000029EED4 ">"
 *   insn=0x000000000029EED4 string=0x000000000029EFCC "_"
 *   insn=0x000000000029EEE0 string=0x000000000029EEE4 "(a"
 *   insn=0x000000000029EEEC string=0x000000000029EEF0 "*""
 *   insn=0x000000000029EEF0 string=0x000000000029EEF4 "J=G"
 *   insn=0x000000000029EEF4 string=0x000000000029EEF8 ")!"
 *   insn=0x000000000029EEF8 string=0x000000000029EEFC "J"
 *   insn=0x000000000029EEFC string=0x000000000029EF00 "*"
 *   insn=0x000000000029EF00 string=0x000000000029EF04 "K"
 *   insn=0x000000000029EF04 string=0x000000000029EF08 "+"
 *   insn=0x000000000029EF0C string=0x000000000029EF10 "/"
 *   insn=0x000000000029EF1C string=0x000000000029EF20 "(a"
 *   insn=0x000000000029EF28 string=0x000000000029EF2C "*""
 *   insn=0x000000000029EF2C string=0x000000000029EF30 "J=G"
 *   insn=0x000000000029EF30 string=0x000000000029EF34 ")!"
 *   insn=0x000000000029EF34 string=0x000000000029EF38 "j"
 *   insn=0x000000000029EF38 string=0x000000000029EF3C "*"
 *   insn=0x000000000029EF3C string=0x000000000029EF40 "K"
 *   insn=0x000000000029EF40 string=0x000000000029EF44 "+"
 *   insn=0x000000000029EF48 string=0x000000000029EF4C " "
 *   insn=0x000000000029EF58 string=0x000000000029EF5C "(a"
 *   insn=0x000000000029EF64 string=0x000000000029EF68 "*""
 *   insn=0x000000000029EF68 string=0x000000000029EF6C "J=G"
 *   insn=0x000000000029EF6C string=0x000000000029EF70 ")!"
 *   insn=0x000000000029EF74 string=0x000000000029EF78 "*"
 *   insn=0x000000000029EF78 string=0x000000000029EF7C "K"
 *   insn=0x000000000029EF7C string=0x000000000029EF80 "+"
 *   insn=0x000000000029EF90 string=0x000000000029EF94 "*""
 *   insn=0x000000000029EF94 string=0x000000000029EF98 "J"
 *   insn=0x000000000029EF9C string=0x000000000029EFA0 "(a"
 *   insn=0x000000000029EFA8 string=0x000000000029EFAC "*""
 *   insn=0x000000000029EFAC string=0x000000000029EFB0 "J=G"
 *   insn=0x000000000029EFB0 string=0x000000000029EFB4 ")!"
 *   insn=0x000000000029EFB4 string=0x000000000029EFB8 "j"
 *   insn=0x000000000029EFB8 string=0x000000000029EFBC "*"
 *   insn=0x000000000029EFBC string=0x000000000029EFC0 "K"
 *   insn=0x000000000029EFC0 string=0x000000000029EFC4 "+"
 *   insn=0x000000000029EFDC string=0x000000000029EFE0 ""
 *   insn=0x000000000029EFE4 string=0x000000000029EFE8 "K"
 *   insn=0x000000000029EFE8 string=0x000000000029EFEC "+"
 *   insn=0x000000000029EFEC string=0x000000000029EFF0 "_"
 *   insn=0x000000000029EFF0 string=0x000000000029EFF4 ""
 *   insn=0x000000000029F000 string=0x000000000029F004 "(C"
 *   insn=0x000000000029F004 string=0x000000000029F008 "h"
 *   insn=0x000000000029F00C string=0x000000000029F010 "@"
 *   insn=0x000000000029F00C string=0x000000000029F02C "`"
 *   insn=0x000000000029F010 string=0x000000000029F014 ""
 *   insn=0x000000000029F014 string=0x000000000029F018 ""
 *   insn=0x000000000029F01C string=0x000000000029F020 ""
 *   insn=0x000000000029F020 string=0x000000000029F024 ""
 *   insn=0x000000000029F02C string=0x000000000029F030 "C"
 *   insn=0x000000000029F030 string=0x000000000029F034 "h"
 *   insn=0x000000000029F038 string=0x000000000029F03C "@"
 *   insn=0x000000000029F038 string=0x000000000029F058 "`"
 *   insn=0x000000000029F03C string=0x000000000029F040 ""
 *   insn=0x000000000029F040 string=0x000000000029F044 ""
 *   insn=0x000000000029F048 string=0x000000000029F04C ""
 *   insn=0x000000000029F04C string=0x000000000029F050 ""
 *   insn=0x000000000029F05C string=0x000000000029F060 "h"
 *   insn=0x000000000029F064 string=0x000000000029F068 "@"
 *   insn=0x000000000029F064 string=0x000000000029F084 "`~@"
 *   insn=0x000000000029F068 string=0x000000000029F06C ""
 *   insn=0x000000000029F06C string=0x000000000029F070 ""
 *   insn=0x000000000029F074 string=0x000000000029F078 ""
 *   insn=0x000000000029F078 string=0x000000000029F07C ""
 *   insn=0x000000000029F088 string=0x000000000029F08C "uv"
 *   insn=0x000000000029F090 string=0x000000000029F094 "@"
 *   insn=0x000000000029F090 string=0x000000000029F0B0 "`r@"
 *   insn=0x000000000029F094 string=0x000000000029F098 ""
 *   insn=0x000000000029F098 string=0x000000000029F09C ""
 *   insn=0x000000000029F0A0 string=0x000000000029F0A4 ""
 *   insn=0x000000000029F0A4 string=0x000000000029F0A8 ""
 *   insn=0x000000000029F0B0 string=0x000000000029F0B4 "uj"
 *   insn=0x000000000029F0B8 string=0x000000000029F0BC "@"
 *   insn=0x000000000029F0BC string=0x000000000029F0C0 ""
 *   insn=0x000000000029F0C0 string=0x000000000029F0C4 ""
 *   insn=0x000000000029F0C8 string=0x000000000029F0CC ""
 *   insn=0x000000000029F0CC string=0x000000000029F0D0 ""
 *   insn=0x000000000029F0D8 string=0x000000000029F0DC "\t"
 *   insn=0x000000000029F100 string=0x00000000001F4020 "P'"
 *   insn=0x000000000029F104 string=0x000000000029F108 "i"
 *   insn=0x000000000029F108 string=0x000000000029F10C "?"
 *   insn=0x000000000029F110 string=0x000000000029F114 "`r@"
 *   insn=0x000000000029F114 string=0x000000000029F118 "h"
 *   insn=0x000000000029F120 string=0x000000000029F124 "@"
 *   insn=0x000000000029F124 string=0x000000000029F128 ""
 *   insn=0x000000000029F128 string=0x000000000029F12C ""
 *   insn=0x000000000029F130 string=0x000000000029F134 ""
 *   insn=0x000000000029F134 string=0x000000000029F138 ""
 *   insn=0x000000000029F140 string=0x000000000029F144 "i"
 *   insn=0x000000000029F144 string=0x000000000029F148 "?"
 *   insn=0x000000000029F14C string=0x000000000029F150 "`~@"
 *   insn=0x000000000029F150 string=0x000000000029F154 "h"
 *   insn=0x000000000029F15C string=0x000000000029F160 "@"
 *   insn=0x000000000029F160 string=0x000000000029F164 ""
 *   insn=0x000000000029F164 string=0x000000000029F168 ""
 *   insn=0x000000000029F16C string=0x000000000029F170 ""
 *   insn=0x000000000029F170 string=0x000000000029F174 ""
 *   insn=0x000000000029F17C string=0x000000000029F180 "i\nA"
 *   insn=0x000000000029F180 string=0x000000000029F184 "?"
 *   insn=0x000000000029F188 string=0x000000000029F18C "`"
 *   insn=0x000000000029F18C string=0x000000000029F190 "h\n"
 *   insn=0x000000000029F198 string=0x000000000029F19C "@"
 *   insn=0x000000000029F19C string=0x000000000029F1A0 ""
 *   insn=0x000000000029F1A0 string=0x000000000029F1A4 ""
 *   insn=0x000000000029F1A8 string=0x000000000029F1AC ""
 *   insn=0x000000000029F1AC string=0x000000000029F1B0 ""
 *   insn=0x000000000029F1B8 string=0x000000000029F1BC "i"A"
 *   insn=0x000000000029F1BC string=0x000000000029F1C0 "?"
 *   insn=0x000000000029F1C4 string=0x000000000029F1C8 "`"
 *   insn=0x000000000029F1C8 string=0x000000000029F1CC "h""
 *   insn=0x000000000029F1D4 string=0x000000000029F1D8 "@"
 *   insn=0x000000000029F1D8 string=0x000000000029F1DC ""
 *   insn=0x000000000029F1DC string=0x000000000029F1E0 ""
 *   insn=0x000000000029F1E4 string=0x000000000029F1E8 ""
 *   insn=0x000000000029F1E8 string=0x000000000029F1EC ""
 *   insn=0x000000000029F1F4 string=0x000000000029F1F8 "i:A"
 *   insn=0x000000000029F1F8 string=0x000000000029F1FC "?"
 *   insn=0x000000000029F1FC string=0x000000000029F200 " "
 *   insn=0x000000000029F200 string=0x000000000029F204 "`"
 *   insn=0x000000000029F204 string=0x000000000029F208 "h:"
 *   insn=0x000000000029F210 string=0x000000000029F214 "@"
 *   insn=0x000000000029F214 string=0x000000000029F218 ""
 *   insn=0x000000000029F218 string=0x000000000029F21C ""
 *   insn=0x000000000029F220 string=0x000000000029F230 ""
 *   insn=0x000000000029F23C string=0x000000000029F240 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(
        Caver::SnappingMonsterControllerComponent *this)
{
  __int128 v2; // q0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  void *v6; // x0
  void *v7; // x0
  unsigned int *v8; // x8
  int v9; // w9
  unsigned int *v10; // x8
  int v11; // w9
  unsigned int *v12; // x8
  int v13; // w9
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9
  _QWORD v18[3]; // [xsp+28h] [xbp-58h] BYREF

  v18[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::MonsterControllerComponent::MonsterControllerComponent(this);
  *(_QWORD *)this = off_6C2780;
  *(_QWORD *)&v2 = &off_6C2898;
  *((_QWORD *)&v2 + 1) = &off_6C28D8;
  *((_OWORD *)this + 1) = v2;
  *((_QWORD *)this + 26) = &off_6BDF68;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 28) = 0;
  *((_QWORD *)this + 29) = &off_6BDF68;
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 32) = &off_6C2938;
  *((_QWORD *)this + 34) = 0;
  *((_QWORD *)this + 35) = &off_6BEDF8;
  *((_QWORD *)this + 37) = 0;
  *((_QWORD *)this + 38) = off_6BE248;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 78) = 0;
  *((_QWORD *)this + 40) = 0;
  *((_BYTE *)this + 328) = 0;
  *((_DWORD *)this + 83) = 2139095039;
  sub_566BB8((int)v18, "standAnimation");
  Caver::Component::BindOutlet();
  v3 = (void *)(v18[0] - 24LL);
  if ( (__int64 *)(v18[0] - 24LL) != &qword_6FD2E0 )
  {
    v8 = (unsigned int *)(v18[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v9 = __ldaxr(v8);
      while ( __stlxr(v9 - 1, v8) );
    }
    else
    {
      v9 = (*v8)--;
    }
    if ( v9 <= 0 )
      operator delete(v3);
  }
  sub_566BB8((int)v18, "attackAnimation");
  Caver::Component::BindOutlet();
  v4 = (void *)(v18[0] - 24LL);
  if ( (__int64 *)(v18[0] - 24LL) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v18[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
    }
    else
    {
      v11 = (*v10)--;
    }
    if ( v11 <= 0 )
      operator delete(v4);
  }
  sub_566BB8((int)v18, "blendAnimation");
  Caver::Component::BindOutlet();
  v5 = (void *)(v18[0] - 24LL);
  if ( (__int64 *)(v18[0] - 24LL) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v18[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v13 = __ldaxr(v12);
      while ( __stlxr(v13 - 1, v12) );
    }
    else
    {
      v13 = (*v12)--;
    }
    if ( v13 <= 0 )
      operator delete(v5);
  }
  sub_566BB8((int)v18, "attackArea");
  Caver::Component::BindOutlet();
  v6 = (void *)(v18[0] - 24LL);
  if ( (__int64 *)(v18[0] - 24LL) != &qword_6FD2E0 )
  {
    v14 = (unsigned int *)(v18[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v15 = __ldaxr(v14);
      while ( __stlxr(v15 - 1, v14) );
    }
    else
    {
      v15 = (*v14)--;
    }
    if ( v15 <= 0 )
      operator delete(v6);
  }
  sub_566BB8((int)v18, "attackSound");
  Caver::Component::BindOutlet();
  v7 = (void *)(v18[0] - 24LL);
  if ( (__int64 *)(v18[0] - 24LL) != &qword_6FD2E0 )
  {
    v16 = (unsigned int *)(v18[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v17 = __ldaxr(v16);
      while ( __stlxr(v17 - 1, v16) );
    }
    else
    {
      v17 = (*v16)--;
    }
    if ( v17 <= 0 )
      operator delete(v7);
  }
}

