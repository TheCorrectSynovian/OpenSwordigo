/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A1A00
 * Mangled: _ZN5Caver20FireEmitterComponentC2Ev
 * Demangled: Caver::FireEmitterComponent::FireEmitterComponent(void)
 *
 * Callers: 2
 *   0x00000000001F6FB0  Caver::FireEmitterComponent::FireEmitterComponent(void)
 *   0x00000000002015C0  Caver::FireEmitterComponent::FireEmitterComponent(void)
 *
 * Callees: 10
 *   0x00000000001F41A0  Caver::FloatColor::FromHSLA(float,float,float,float)
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
 * Referenced strings: 111
 *   insn=0x00000000002A1A18 string=0x00000000002A1A1C "9""
 *   insn=0x00000000002A1A1C string=0x00000000002A1A20 "\t""
 *   insn=0x00000000002A1A20 string=0x00000000002A1A24 "X"
 *   insn=0x00000000002A1A24 string=0x00000000002A1A28 "9"
 *   insn=0x00000000002A1A28 string=0x00000000002A1A2C ")"
 *   insn=0x00000000002A1A2C string=0x00000000002A1A30 "\n"
 *   insn=0x00000000002A1A34 string=0x00000000002A1A38 "6""
 *   insn=0x00000000002A1A38 string=0x00000000002A1A3C "+"
 *   insn=0x00000000002A1A3C string=0x00000000002A1A40 "`"
 *   insn=0x00000000002A1A40 string=0x00000000002A1A44 "+"
 *   insn=0x00000000002A1A4C string=0x00000000002A1A50 "`"
 *   insn=0x00000000002A1A54 string=0x00000000002A1A58 "*c"
 *   insn=0x00000000002A1A58 string=0x00000000002A1A5C "j"
 *   insn=0x00000000002A1A6C string=0x00000000002A1A70 "`"
 *   insn=0x00000000002A1A70 string=0x00000000002A1A74 "7""
 *   insn=0x00000000002A1A78 string=0x00000000002A1A7C "J"
 *   insn=0x00000000002A1A7C string=0x00000000002A1A80 "@"
 *   insn=0x00000000002A1A84 string=0x00000000002A1A88 ")A"
 *   insn=0x00000000002A1A88 string=0x00000000002A1A8C "h"
 *   insn=0x00000000002A1A90 string=0x00000000002A1A94 "i"
 *   insn=0x00000000002A1AB8 string=0x00000000002A1ABC "h"
 *   insn=0x00000000002A1ABC string=0x00000000002A1AC0 "h"
 *   insn=0x00000000002A1AC8 string=0x00000000002A1ACC "`R"
 *   insn=0x00000000002A1AD8 string=0x00000000002A1ADC "\t"
 *   insn=0x00000000002A1ADC string=0x00000000002A1AE0 " 9L"
 *   insn=0x00000000002A1ADC string=0x0000000000583C38 "\n"
 *   insn=0x00000000002A1AF0 string=0x00000000002A1AF4 "H"
 *   insn=0x00000000002A1AF0 string=0x00000000001F41A0 "P'"
 *   insn=0x00000000002A1AFC string=0x00000000002A1B00 "`"
 *   insn=0x00000000002A1B00 string=0x00000000002A1B04 "!"
 *   insn=0x00000000002A1B04 string=0x0000000000588A18 "particleEmitter"
 *   insn=0x00000000002A1B10 string=0x00000000002A1B14 ")"
 *   insn=0x00000000002A1B28 string=0x00000000002A1B2C "mT"
 *   insn=0x00000000002A1B2C string=0x00000000001F6CE0 "0'"
 *   insn=0x00000000002A1B38 string=0x00000000002A1B3C "a"
 *   insn=0x00000000002A1B3C string=0x00000000002A1B40 "a"
 *   insn=0x00000000002A1B3C string=0x00000000002A1BA8 "\t""
 *   insn=0x00000000002A1B40 string=0x000000000058E2C9 "light"
 *   insn=0x00000000002A1B64 string=0x00000000002A1B68 "^T"
 *   insn=0x00000000002A1B78 string=0x00000000002A1B7C ""
 *   insn=0x00000000002A1B78 string=0x00000000002A1BCC "\t""
 *   insn=0x00000000002A1B84 string=0x00000000002A1B88 "A"
 *   insn=0x00000000002A1BA8 string=0x00000000002A1BAC ")=G"
 *   insn=0x00000000002A1BAC string=0x00000000002A1BB0 "!"
 *   insn=0x00000000002A1BB4 string=0x00000000002A1BB8 "\t"
 *   insn=0x00000000002A1BB4 string=0x00000000002A1BF0 "\t"
 *   insn=0x00000000002A1BB8 string=0x00000000002A1BBC "*"
 *   insn=0x00000000002A1BBC string=0x00000000002A1BC0 "\n"
 *   insn=0x00000000002A1BC4 string=0x00000000002A1BC8 ""
 *   insn=0x00000000002A1BC8 string=0x00000000002A1BFC "?"
 *   insn=0x00000000002A1BCC string=0x00000000002A1BD0 ")=G"
 *   insn=0x00000000002A1BD0 string=0x00000000002A1BD4 "!"
 *   insn=0x00000000002A1BD8 string=0x00000000002A1BDC "\t"
 *   insn=0x00000000002A1BD8 string=0x00000000002A1C10 "\t"
 *   insn=0x00000000002A1BDC string=0x00000000002A1BE0 "*"
 *   insn=0x00000000002A1BE0 string=0x00000000002A1BE4 "\n"
 *   insn=0x00000000002A1BEC string=0x00000000002A1C1C "?"
 *   insn=0x00000000002A1BF0 string=0x00000000002A1BF4 "*"
 *   insn=0x00000000002A1BF4 string=0x00000000002A1BF8 "\n"
 *   insn=0x00000000002A1C10 string=0x00000000002A1C14 "*"
 *   insn=0x00000000002A1C14 string=0x00000000002A1C18 "\n"
 *   insn=0x00000000002A1C30 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002A1C38 string=0x00000000002A1C3C "(a"
 *   insn=0x00000000002A1C44 string=0x00000000002A1C48 "\n""
 *   insn=0x00000000002A1C44 string=0x00000000002A1CDC "`N@"
 *   insn=0x00000000002A1C48 string=0x00000000002A1C4C "J=G"
 *   insn=0x00000000002A1C4C string=0x00000000002A1C50 ")!"
 *   insn=0x00000000002A1C50 string=0x00000000002A1C54 "J"
 *   insn=0x00000000002A1C54 string=0x00000000002A1C58 "*"
 *   insn=0x00000000002A1C54 string=0x00000000002A1CBC "*"
 *   insn=0x00000000002A1C58 string=0x00000000002A1C5C "K"
 *   insn=0x00000000002A1C5C string=0x00000000002A1C60 "+"
 *   insn=0x00000000002A1C68 string=0x00000000002A1CA4 "_"
 *   insn=0x00000000002A1C74 string=0x00000000002A1C78 "(a"
 *   insn=0x00000000002A1C80 string=0x00000000002A1C84 "\n""
 *   insn=0x00000000002A1C84 string=0x00000000002A1C88 "J=G"
 *   insn=0x00000000002A1C88 string=0x00000000002A1C8C ")!"
 *   insn=0x00000000002A1C8C string=0x00000000002A1C90 "j"
 *   insn=0x00000000002A1C90 string=0x00000000002A1C94 "*"
 *   insn=0x00000000002A1C94 string=0x00000000002A1C98 "K"
 *   insn=0x00000000002A1C98 string=0x00000000002A1C9C "+"
 *   insn=0x00000000002A1CB4 string=0x00000000002A1CB8 "\t"
 *   insn=0x00000000002A1CBC string=0x00000000002A1CC0 "K"
 *   insn=0x00000000002A1CC0 string=0x00000000002A1CC4 "+"
 *   insn=0x00000000002A1CC4 string=0x00000000002A1CC8 "_"
 *   insn=0x00000000002A1CC8 string=0x00000000002A1CCC ""
 *   insn=0x00000000002A1CE0 string=0x00000000002A1CE4 "hF"
 *   insn=0x00000000002A1CE8 string=0x00000000002A1CEC "@"
 *   insn=0x00000000002A1CE8 string=0x00000000002A1D08 "`B@"
 *   insn=0x00000000002A1CEC string=0x00000000002A1CF0 ""
 *   insn=0x00000000002A1CF0 string=0x00000000002A1CF4 ""
 *   insn=0x00000000002A1CF8 string=0x00000000002A1CFC ""
 *   insn=0x00000000002A1CFC string=0x00000000002A1D00 ""
 *   insn=0x00000000002A1D0C string=0x00000000002A1D10 "h:"
 *   insn=0x00000000002A1D14 string=0x00000000002A1D18 "@"
 *   insn=0x00000000002A1D18 string=0x00000000002A1D1C ""
 *   insn=0x00000000002A1D1C string=0x00000000002A1D20 ""
 *   insn=0x00000000002A1D24 string=0x00000000002A1D28 ""
 *   insn=0x00000000002A1D28 string=0x00000000002A1D2C ""
 *   insn=0x00000000002A1D38 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002A1D54 string=0x00000000002A1D58 "h"@"
 *   insn=0x00000000002A1D5C string=0x00000000002A1D60 "a"
 *   insn=0x00000000002A1D68 string=0x00000000002A1D6C "O""
 *   insn=0x00000000002A1D6C string=0x00000000002A1D70 "hz@"
 *   insn=0x00000000002A1D74 string=0x00000000002A1D78 "h"
 *   insn=0x00000000002A1D7C string=0x00000000002A1D80 "h"
 *   insn=0x00000000002A1D84 string=0x00000000002A1D88 "h"
 *   insn=0x00000000002A1D8C string=0x00000000002A1D90 "h"
 *   insn=0x00000000002A1D94 string=0x00000000002A1D98 "`2"
 *   insn=0x00000000002A1D9C string=0x00000000002A1DA0 "`*"
 *   insn=0x00000000002A1DA4 string=0x00000000002A1DA8 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FireEmitterComponent::FireEmitterComponent(Caver::FireEmitterComponent *this)
{
  __int128 v2; // q0
  void *v3; // x0
  void *v4; // x0
  unsigned int *v5; // x8
  int v6; // w9
  unsigned int *v7; // x8
  int v8; // w9
  _QWORD v9[3]; // [xsp+28h] [xbp-58h] BYREF

  *(_QWORD *)&v2 = &off_6C2DE8;
  *((_QWORD *)&v2 + 1) = &off_6C2E28;
  v9[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_OWORD *)this + 1) = v2;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *(_QWORD *)this = off_6C2CD0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = off_6C0268;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = &off_6C2E68;
  *((_DWORD *)this + 42) = 0x40000000;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 20) = 0x3F6666663DCCCCCDLL;
  *((_DWORD *)this + 47) = 0;
  *(_QWORD *)((char *)this + 172) = 0;
  *(_QWORD *)((char *)this + 180) = 0;
  Caver::FloatColor::FromHSLA((__int64 *)this + 24, this, 0.08, 1.0, 0.5, 0.0);
  *((_DWORD *)this + 59) = 0;
  *(_OWORD *)((char *)this + 220) = xmmword_589520;
  sub_566BB8((int)v9, "particleEmitter");
  Caver::Component::BindOutlet();
  v3 = (void *)(v9[0] - 24LL);
  if ( (__int64 *)(v9[0] - 24LL) != &qword_6FD2E0 )
  {
    v5 = (unsigned int *)(v9[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v6 = __ldaxr(v5);
      while ( __stlxr(v6 - 1, v5) );
    }
    else
    {
      v6 = (*v5)--;
    }
    if ( v6 <= 0 )
      operator delete(v3);
  }
  sub_566BB8((int)v9, "light");
  Caver::Component::BindOutlet();
  v4 = (void *)(v9[0] - 24LL);
  if ( (__int64 *)(v9[0] - 24LL) != &qword_6FD2E0 )
  {
    v7 = (unsigned int *)(v9[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v8 = __ldaxr(v7);
      while ( __stlxr(v8 - 1, v7) );
    }
    else
    {
      v8 = (*v7)--;
    }
    if ( v8 <= 0 )
      operator delete(v4);
  }
}

