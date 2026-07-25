/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B3878
 * Mangled: _ZN5Caver27ElevatorControllerComponentC2Ev
 * Demangled: Caver::ElevatorControllerComponent::ElevatorControllerComponent(void)
 *
 * Callers: 2
 *   0x00000000001F9AF0  Caver::ElevatorControllerComponent::ElevatorControllerComponent(void)
 *   0x00000000001FC510  Caver::ElevatorControllerComponent::ElevatorControllerComponent(void)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 57
 *   insn=0x00000000002B3894 string=0x00000000002B3898 "U"
 *   insn=0x00000000002B389C string=0x00000000002B38A0 ")"
 *   insn=0x00000000002B38AC string=0x00000000002B38B0 "*"
 *   insn=0x00000000002B38B0 string=0x00000000002B38B4 "@"
 *   insn=0x00000000002B38B4 string=0x00000000002B38B8 "*"
 *   insn=0x00000000002B38BC string=0x00000000002B38C0 "@"
 *   insn=0x00000000002B38C0 string=0x00000000002B38C4 "\nc"
 *   insn=0x00000000002B38CC string=0x00000000002B38D0 "j"
 *   insn=0x00000000002B38E4 string=0x00000000002B38E8 "`"
 *   insn=0x00000000002B38E8 string=0x00000000002B38EC "@"
 *   insn=0x00000000002B38F0 string=0x00000000002B38F4 ")A"
 *   insn=0x00000000002B38F4 string=0x00000000002B38F8 "h"
 *   insn=0x00000000002B38FC string=0x00000000002B3900 "i"
 *   insn=0x00000000002B3920 string=0x00000000002B3924 ""
 *   insn=0x00000000002B3928 string=0x00000000002B392C "`N"
 *   insn=0x00000000002B393C string=0x0000000000589BD0 "elevationShape"
 *   insn=0x00000000002B3964 string=0x00000000001F6CE0 "0'"
 *   insn=0x00000000002B3970 string=0x00000000002B3974 "a"
 *   insn=0x00000000002B3984 string=0x00000000002B39E4 ";\n"
 *   insn=0x00000000002B39A0 string=0x00000000002B39A4 ")=G"
 *   insn=0x00000000002B39A4 string=0x00000000002B39A8 "!"
 *   insn=0x00000000002B39AC string=0x00000000002B39B0 "\t"
 *   insn=0x00000000002B39AC string=0x00000000002B39C4 "\t"
 *   insn=0x00000000002B39B0 string=0x00000000002B39B4 "*"
 *   insn=0x00000000002B39B4 string=0x00000000002B39B8 "\n"
 *   insn=0x00000000002B39C0 string=0x00000000002B39D0 "?"
 *   insn=0x00000000002B39C4 string=0x00000000002B39C8 "*"
 *   insn=0x00000000002B39C8 string=0x00000000002B39CC "\n"
 *   insn=0x00000000002B39D0 string=0x00000000002B39D4 ","
 *   insn=0x00000000002B39D8 string=0x00000000002B39DC "r"
 *   insn=0x00000000002B39E4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B39EC string=0x00000000002B39F0 "(a"
 *   insn=0x00000000002B39FC string=0x00000000002B3A00 "J=G"
 *   insn=0x00000000002B3A00 string=0x00000000002B3A04 ")!"
 *   insn=0x00000000002B3A04 string=0x00000000002B3A08 "j"
 *   insn=0x00000000002B3A08 string=0x00000000002B3A0C "*"
 *   insn=0x00000000002B3A08 string=0x00000000002B3A34 "*"
 *   insn=0x00000000002B3A0C string=0x00000000002B3A10 "K"
 *   insn=0x00000000002B3A10 string=0x00000000002B3A14 "+"
 *   insn=0x00000000002B3A18 string=0x00000000002B3A1C "_"
 *   insn=0x00000000002B3A28 string=0x00000000002B3A2C "^"
 *   insn=0x00000000002B3A2C string=0x00000000002B3A30 ""
 *   insn=0x00000000002B3A34 string=0x00000000002B3A38 "K"
 *   insn=0x00000000002B3A38 string=0x00000000002B3A3C "+"
 *   insn=0x00000000002B3A3C string=0x00000000002B3A40 "_"
 *   insn=0x00000000002B3A40 string=0x00000000002B3A44 ""
 *   insn=0x00000000002B3A5C string=0x00000000002B3A60 "@"
 *   insn=0x00000000002B3A60 string=0x00000000002B3A64 ""
 *   insn=0x00000000002B3A64 string=0x00000000002B3A68 ""
 *   insn=0x00000000002B3A6C string=0x00000000002B3A70 ""
 *   insn=0x00000000002B3A70 string=0x00000000002B3A74 ""
 *   insn=0x00000000002B3A80 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002B3A88 string=0x00000000002B3A8C "0j"
 *   insn=0x00000000002B3A9C string=0x00000000002B3AA0 "h"@"
 *   insn=0x00000000002B3AA4 string=0x00000000002B3AA8 "a"
 *   insn=0x00000000002B3AB4 string=0x00000000002B3AB8 "hz@"
 *   insn=0x00000000002B3ABC string=0x00000000002B3AC0 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ElevatorControllerComponent::ElevatorControllerComponent(
        Caver::ElevatorControllerComponent *this)
{
  __int128 v1; // q0
  void *v2; // x0
  unsigned int *v3; // x8
  int v4; // w9
  _QWORD v5[3]; // [xsp+28h] [xbp-48h] BYREF

  *(_QWORD *)&v1 = &off_6C4558;
  *((_QWORD *)&v1 + 1) = &off_6C4598;
  v5[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_OWORD *)this + 1) = v1;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *(_QWORD *)this = off_6C4440;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = off_6C1748;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 1127481344;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 18) = 0;
  *((_QWORD *)this + 19) = 1;
  *((_BYTE *)this + 160) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 2139095039;
  sub_566BB8((int)v5, "elevationShape");
  Caver::Component::BindOutlet();
  v2 = (void *)(v5[0] - 24LL);
  if ( (__int64 *)(v5[0] - 24LL) != &qword_6FD2E0 )
  {
    v3 = (unsigned int *)(v5[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v4 = __ldaxr(v3);
      while ( __stlxr(v4 - 1, v3) );
    }
    else
    {
      v4 = (*v3)--;
    }
    if ( v4 <= 0 )
      operator delete(v2);
  }
}

