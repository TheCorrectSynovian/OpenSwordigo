/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000269C68
 * Mangled: _ZN5Caver25EntityControllerComponentC2Ev
 * Demangled: Caver::EntityControllerComponent::EntityControllerComponent(void)
 *
 * Callers: 2
 *   0x00000000001F5FD0  Caver::EntityControllerComponent::EntityControllerComponent(void)
 *   0x00000000001FC560  Caver::EntityControllerComponent::EntityControllerComponent(void)
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000026A29C  Caver::EntityControllerComponent::InitWithComponent(Caver::EntityControllerComponent const*)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 174
 *   insn=0x0000000000269C8C string=0x0000000000269C90 "X"
 *   insn=0x0000000000269C90 string=0x0000000000269C94 "9"
 *   insn=0x0000000000269C94 string=0x0000000000269C98 ")9A"
 *   insn=0x0000000000269CA8 string=0x0000000000269CAC "\n"
 *   insn=0x0000000000269CAC string=0x0000000000269CB0 "+"
 *   insn=0x0000000000269CB8 string=0x0000000000269CBC "a"
 *   insn=0x0000000000269CBC string=0x0000000000269CC0 "+"
 *   insn=0x0000000000269CC8 string=0x0000000000269CCC "Z"
 *   insn=0x0000000000269CCC string=0x0000000000269CD0 "a"
 *   insn=0x0000000000269CD4 string=0x0000000000269CD8 "*c"
 *   insn=0x0000000000269CD8 string=0x0000000000269CDC "j"
 *   insn=0x0000000000269CE0 string=0x0000000000269CE4 "a"
 *   insn=0x0000000000269CF4 string=0x0000000000269CF8 ")A"
 *   insn=0x0000000000269D00 string=0x0000000000269D04 "i"
 *   insn=0x0000000000269D14 string=0x0000000000269D18 "A"
 *   insn=0x0000000000269D18 string=0x0000000000269D1C "h"
 *   insn=0x0000000000269D28 string=0x0000000000269D2C "IC"
 *   insn=0x0000000000269D48 string=0x0000000000269D4C "`"
 *   insn=0x0000000000269D5C string=0x0000000000269D60 "H"
 *   insn=0x0000000000269D68 string=0x0000000000269D6C "a"
 *   insn=0x0000000000269D84 string=0x0000000000269D88 "`"
 *   insn=0x0000000000269D88 string=0x0000000000269D8C "h_"
 *   insn=0x0000000000269D90 string=0x0000000000269D94 "`"
 *   insn=0x0000000000269D98 string=0x00000000005879D8 "entity"
 *   insn=0x0000000000269DC0 string=0x00000000001F6CE0 "0'"
 *   insn=0x0000000000269DCC string=0x0000000000269DD0 "A"
 *   insn=0x0000000000269DD4 string=0x000000000058801C "animationController"
 *   insn=0x0000000000269DE0 string=0x0000000000269DE4 "u"
 *   insn=0x0000000000269E10 string=0x0000000000588030 "defaultMoveAnimation"
 *   insn=0x0000000000269E1C string=0x0000000000269E20 "f"
 *   insn=0x0000000000269E4C string=0x0000000000588045 "roamArea"
 *   insn=0x0000000000269E58 string=0x0000000000269E5C "W"
 *   insn=0x0000000000269E84 string=0x0000000000269E88 ""
 *   insn=0x0000000000269EB8 string=0x0000000000269EBC ")=G"
 *   insn=0x0000000000269EBC string=0x0000000000269EC0 "!"
 *   insn=0x0000000000269EC0 string=0x0000000000269EC4 ")"
 *   insn=0x0000000000269EC4 string=0x0000000000269EC8 "\t"
 *   insn=0x0000000000269EC4 string=0x0000000000269F48 "\t"
 *   insn=0x0000000000269EC8 string=0x0000000000269ECC "*"
 *   insn=0x0000000000269ECC string=0x0000000000269ED0 "\n"
 *   insn=0x0000000000269ED8 string=0x0000000000269F54 "?"
 *   insn=0x0000000000269EDC string=0x0000000000269EE0 ")=G"
 *   insn=0x0000000000269EE0 string=0x0000000000269EE4 "!"
 *   insn=0x0000000000269EE4 string=0x0000000000269EE8 "\t"
 *   insn=0x0000000000269EE8 string=0x0000000000269EEC "\t"
 *   insn=0x0000000000269EE8 string=0x0000000000269F68 "\t"
 *   insn=0x0000000000269EEC string=0x0000000000269EF0 "*"
 *   insn=0x0000000000269EF0 string=0x0000000000269EF4 "\n"
 *   insn=0x0000000000269EFC string=0x0000000000269F74 "?"
 *   insn=0x0000000000269F00 string=0x0000000000269F04 ")=G"
 *   insn=0x0000000000269F04 string=0x0000000000269F08 "!"
 *   insn=0x0000000000269F0C string=0x0000000000269F10 "\t"
 *   insn=0x0000000000269F0C string=0x0000000000269F88 "\t"
 *   insn=0x0000000000269F10 string=0x0000000000269F14 "*"
 *   insn=0x0000000000269F14 string=0x0000000000269F18 "\n"
 *   insn=0x0000000000269F20 string=0x0000000000269F94 "?"
 *   insn=0x0000000000269F24 string=0x0000000000269F28 ")=G"
 *   insn=0x0000000000269F28 string=0x0000000000269F2C "!"
 *   insn=0x0000000000269F30 string=0x0000000000269F34 "\t"
 *   insn=0x0000000000269F30 string=0x0000000000269FA8 "\t"
 *   insn=0x0000000000269F34 string=0x0000000000269F38 "*"
 *   insn=0x0000000000269F38 string=0x0000000000269F3C "\n"
 *   insn=0x0000000000269F44 string=0x0000000000269FB4 "?"
 *   insn=0x0000000000269F48 string=0x0000000000269F4C "*"
 *   insn=0x0000000000269F4C string=0x0000000000269F50 "\n"
 *   insn=0x0000000000269F68 string=0x0000000000269F6C "*"
 *   insn=0x0000000000269F6C string=0x0000000000269F70 "\n"
 *   insn=0x0000000000269F7C string=0x0000000000269F80 "\t"
 *   insn=0x0000000000269F88 string=0x0000000000269F8C "*"
 *   insn=0x0000000000269F8C string=0x0000000000269F90 "\n"
 *   insn=0x0000000000269FA8 string=0x0000000000269FAC "*"
 *   insn=0x0000000000269FAC string=0x0000000000269FB0 "\n"
 *   insn=0x0000000000269FC8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000269FD0 string=0x0000000000269FD4 "(a"
 *   insn=0x0000000000269FD8 string=0x0000000000269FDC " "
 *   insn=0x0000000000269FDC string=0x000000000026A0E0 "v"
 *   insn=0x0000000000269FE0 string=0x0000000000269FE4 "J=G"
 *   insn=0x0000000000269FE4 string=0x0000000000269FE8 ")!"
 *   insn=0x0000000000269FE8 string=0x0000000000269FEC "j"
 *   insn=0x0000000000269FEC string=0x0000000000269FF0 "*"
 *   insn=0x0000000000269FEC string=0x000000000026A0B8 "*"
 *   insn=0x0000000000269FF0 string=0x0000000000269FF4 "K"
 *   insn=0x0000000000269FF4 string=0x0000000000269FF8 "+"
 *   insn=0x0000000000269FFC string=0x000000000026A000 "1"
 *   insn=0x000000000026A000 string=0x000000000026A0C4 "_"
 *   insn=0x000000000026A00C string=0x000000000026A010 "(a"
 *   insn=0x000000000026A014 string=0x000000000026A018 "@"
 *   insn=0x000000000026A01C string=0x000000000026A020 "J=G"
 *   insn=0x000000000026A020 string=0x000000000026A024 ")!"
 *   insn=0x000000000026A028 string=0x000000000026A02C "*"
 *   insn=0x000000000026A02C string=0x000000000026A030 "K"
 *   insn=0x000000000026A030 string=0x000000000026A034 "+"
 *   insn=0x000000000026A038 string=0x000000000026A03C """
 *   insn=0x000000000026A048 string=0x000000000026A04C "(a"
 *   insn=0x000000000026A050 string=0x000000000026A054 "`"
 *   insn=0x000000000026A058 string=0x000000000026A05C "J=G"
 *   insn=0x000000000026A05C string=0x000000000026A060 ")!"
 *   insn=0x000000000026A064 string=0x000000000026A068 "*"
 *   insn=0x000000000026A068 string=0x000000000026A06C "K"
 *   insn=0x000000000026A06C string=0x000000000026A070 "+"
 *   insn=0x000000000026A084 string=0x000000000026A088 "(a"
 *   insn=0x000000000026A094 string=0x000000000026A098 "J=G"
 *   insn=0x000000000026A098 string=0x000000000026A09C ")!"
 *   insn=0x000000000026A0A0 string=0x000000000026A0A4 "*"
 *   insn=0x000000000026A0A4 string=0x000000000026A0A8 "K"
 *   insn=0x000000000026A0A8 string=0x000000000026A0AC "+"
 *   insn=0x000000000026A0B8 string=0x000000000026A0BC "K"
 *   insn=0x000000000026A0BC string=0x000000000026A0C0 "+"
 *   insn=0x000000000026A0E8 string=0x000000000026A120 "v"
 *   insn=0x000000000026A0F0 string=0x000000000026A0F4 "@"
 *   insn=0x000000000026A0F4 string=0x000000000026A0F8 ""
 *   insn=0x000000000026A0F8 string=0x000000000026A0FC ""
 *   insn=0x000000000026A100 string=0x000000000026A104 ""
 *   insn=0x000000000026A104 string=0x000000000026A108 ""
 *   insn=0x000000000026A118 string=0x000000000026A11C "v"
 *   insn=0x000000000026A120 string=0x000000000026A12C "`"
 *   insn=0x000000000026A124 string=0x000000000026A128 "b4"
 *   insn=0x000000000026A128 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000026A130 string=0x000000000026A134 "@"
 *   insn=0x000000000026A130 string=0x000000000026A150 "h"
 *   insn=0x000000000026A134 string=0x000000000026A138 ""
 *   insn=0x000000000026A138 string=0x000000000026A13C ""
 *   insn=0x000000000026A140 string=0x000000000026A144 ""
 *   insn=0x000000000026A144 string=0x000000000026A148 ""
 *   insn=0x000000000026A158 string=0x000000000026A15C "@"
 *   insn=0x000000000026A158 string=0x000000000026A178 "`z@"
 *   insn=0x000000000026A15C string=0x000000000026A160 ""
 *   insn=0x000000000026A160 string=0x000000000026A164 ""
 *   insn=0x000000000026A168 string=0x000000000026A16C ""
 *   insn=0x000000000026A16C string=0x000000000026A170 ""
 *   insn=0x000000000026A17C string=0x000000000026A180 "@"
 *   insn=0x000000000026A180 string=0x000000000026A184 ""
 *   insn=0x000000000026A184 string=0x000000000026A188 ""
 *   insn=0x000000000026A18C string=0x000000000026A190 ""
 *   insn=0x000000000026A190 string=0x000000000026A194 ""
 *   insn=0x000000000026A1A0 string=0x000000000026A1A4 "`"
 *   insn=0x000000000026A1A8 string=0x000000000026A1AC "@"
 *   insn=0x000000000026A1A8 string=0x000000000026A1C8 "`Z@"
 *   insn=0x000000000026A1AC string=0x000000000026A1B0 ""
 *   insn=0x000000000026A1B0 string=0x000000000026A1B4 ""
 *   insn=0x000000000026A1B8 string=0x000000000026A1BC ""
 *   insn=0x000000000026A1BC string=0x000000000026A1C0 ""
 *   insn=0x000000000026A1C8 string=0x000000000026A1CC "HC"
 *   insn=0x000000000026A1CC string=0x000000000026A1D0 "hR"
 *   insn=0x000000000026A1D4 string=0x000000000026A1D8 "@"
 *   insn=0x000000000026A1D8 string=0x000000000026A1DC ""
 *   insn=0x000000000026A1DC string=0x000000000026A1E0 ""
 *   insn=0x000000000026A1E4 string=0x000000000026A1E8 ""
 *   insn=0x000000000026A1E8 string=0x000000000026A1EC ""
 *   insn=0x000000000026A1F4 string=0x000000000026A1F8 "`N@"
 *   insn=0x000000000026A1F8 string=0x000000000026A1FC ""
 *   insn=0x000000000026A1FC string=0x000000000026A200 "A"
 *   insn=0x000000000026A200 string=0x000000000026A204 "hF"
 *   insn=0x000000000026A208 string=0x000000000026A20C "@"
 *   insn=0x000000000026A20C string=0x000000000026A210 ""
 *   insn=0x000000000026A210 string=0x000000000026A214 ""
 *   insn=0x000000000026A218 string=0x000000000026A21C ""
 *   insn=0x000000000026A21C string=0x000000000026A220 ""
 *   insn=0x000000000026A228 string=0x000000000026A22C "`B@"
 *   insn=0x000000000026A22C string=0x000000000026A230 ""
 *   insn=0x000000000026A230 string=0x000000000026A234 "A"
 *   insn=0x000000000026A234 string=0x000000000026A238 "h:"
 *   insn=0x000000000026A23C string=0x000000000026A240 "@"
 *   insn=0x000000000026A240 string=0x000000000026A244 ""
 *   insn=0x000000000026A244 string=0x000000000026A248 ""
 *   insn=0x000000000026A24C string=0x000000000026A250 ""
 *   insn=0x000000000026A250 string=0x000000000026A254 ""
 *   insn=0x000000000026A260 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000026A270 string=0x000000000026A274 "6"
 *   insn=0x000000000026A274 string=0x000000000026A278 "h"
 *   insn=0x000000000026A27C string=0x000000000026A280 "h"
 *   insn=0x000000000026A284 string=0x000000000026A288 "1"
 *   insn=0x000000000026A28C string=0x000000000026A290 "4"
 *   insn=0x000000000026A294 string=0x000000000026A298 "-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::EntityControllerComponent::EntityControllerComponent(Caver::EntityControllerComponent *this)
{
  __int128 v1; // q1
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  unsigned int *v6; // x8
  int v7; // w9
  unsigned int *v8; // x8
  int v9; // w9
  unsigned int *v10; // x8
  int v11; // w9
  unsigned int *v12; // x8
  int v13; // w9
  _QWORD v14[3]; // [xsp+8h] [xbp-68h] BYREF

  *(_QWORD *)&v1 = &off_6BEBD8;
  *((_QWORD *)&v1 + 1) = &off_6BEC18;
  v14[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_DWORD *)this + 2) = 0;
  *((_OWORD *)this + 1) = v1;
  *((_OWORD *)this + 2) = 0u;
  *((_BYTE *)this + 48) = 0;
  *(_OWORD *)((char *)this + 72) = 0u;
  *(_QWORD *)this = off_6BEAC0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = off_6BE2E8;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = off_6BEE48;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 20) = &off_6BDF68;
  *((_DWORD *)this + 42) = 0;
  *(_OWORD *)((char *)this + 200) = 0u;
  *((_QWORD *)this + 22) = 0;
  *((_QWORD *)this + 23) = &off_6BEDF8;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 27) = 0;
  *((_QWORD *)this + 28) = 0x4448000042C80000LL;
  *((_DWORD *)this + 58) = 0;
  *((_QWORD *)this + 30) = 0;
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 35) = 0;
  *((_BYTE *)this + 288) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_OWORD *)this + 16) = 0u;
  *((_DWORD *)this + 73) = 1148846080;
  *((_QWORD *)this + 41) = 0;
  *(_OWORD *)((char *)this + 296) = 0u;
  *(_OWORD *)((char *)this + 312) = 0u;
  sub_566BB8((int)v14, "entity");
  Caver::Component::BindOutlet();
  v2 = (void *)(v14[0] - 24LL);
  if ( (__int64 *)(v14[0] - 24LL) != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(v14[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v7 = __ldaxr(v6);
      while ( __stlxr(v7 - 1, v6) );
    }
    else
    {
      v7 = (*v6)--;
    }
    if ( v7 <= 0 )
      operator delete(v2);
  }
  sub_566BB8((int)v14, "animationController");
  Caver::Component::BindOutlet();
  v3 = (void *)(v14[0] - 24LL);
  if ( (__int64 *)(v14[0] - 24LL) != &qword_6FD2E0 )
  {
    v8 = (unsigned int *)(v14[0] - 8LL);
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
  sub_566BB8((int)v14, "defaultMoveAnimation");
  Caver::Component::BindOutlet();
  v4 = (void *)(v14[0] - 24LL);
  if ( (__int64 *)(v14[0] - 24LL) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v14[0] - 8LL);
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
  sub_566BB8((int)v14, "roamArea");
  Caver::Component::BindOutlet();
  v5 = (void *)(v14[0] - 24LL);
  if ( (__int64 *)(v14[0] - 24LL) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v14[0] - 8LL);
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
}

