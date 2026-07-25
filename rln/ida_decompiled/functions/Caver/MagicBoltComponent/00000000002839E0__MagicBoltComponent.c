/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002839E0
 * Mangled: _ZN5Caver18MagicBoltComponentC2Ev
 * Demangled: Caver::MagicBoltComponent::MagicBoltComponent(void)
 *
 * Callers: 2
 *   0x00000000001F4930  Caver::MagicBoltComponent::MagicBoltComponent(void)
 *   0x00000000002028B0  Caver::MagicBoltComponent::MagicBoltComponent(void)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001F8740  Caver::SpellComponent::SpellComponent(void)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000283E70  Caver::MagicBoltComponent::InitWithComponent(Caver::MagicBoltComponent const*)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 149
 *   insn=0x00000000002839F8 string=0x00000000002839FC "Y"
 *   insn=0x00000000002839FC string=0x0000000000283A00 "("
 *   insn=0x0000000000283A08 string=0x0000000000283A0C "M"
 *   insn=0x0000000000283A0C string=0x0000000000283A10 "#"
 *   insn=0x0000000000283A0C string=0x00000000001F8740 "0'"
 *   insn=0x0000000000283A10 string=0x0000000000283A14 ""
 *   insn=0x0000000000283A14 string=0x0000000000283A18 "7#"
 *   insn=0x0000000000283A20 string=0x0000000000283A24 ")"
 *   insn=0x0000000000283A24 string=0x0000000000283A28 "\n!"
 *   insn=0x0000000000283A24 string=0x0000000000588B30 "/]="
 *   insn=0x0000000000283A2C string=0x0000000000283A30 " "
 *   insn=0x0000000000283A30 string=0x0000000000283A34 "A"
 *   insn=0x0000000000283A34 string=0x0000000000283A38 "\t!"
 *   insn=0x0000000000283A38 string=0x0000000000283A3C "!"
 *   insn=0x0000000000283A3C string=0x0000000000283A40 "\t"
 *   insn=0x0000000000283A40 string=0x0000000000283A44 "a"
 *   insn=0x0000000000283A44 string=0x0000000000283A48 "!q@"
 *   insn=0x0000000000283A48 string=0x0000000000283A4C "A"
 *   insn=0x0000000000283A50 string=0x0000000000283A54 "h"
 *   insn=0x0000000000283A64 string=0x0000000000283A68 "C"
 *   insn=0x0000000000283A68 string=0x0000000000283A6C "i""
 *   insn=0x0000000000283A8C string=0x0000000000283A90 " "
 *   insn=0x0000000000283A90 string=0x0000000000283A94 "a"
 *   insn=0x0000000000283A9C string=0x0000000000283AA0 "!"
 *   insn=0x0000000000283AA0 string=0x0000000000588A18 "particleEmitter"
 *   insn=0x0000000000283AAC string=0x0000000000283AB0 "B"
 *   insn=0x0000000000283AC8 string=0x00000000001F6CE0 "0'"
 *   insn=0x0000000000283ADC string=0x0000000000283AE0 "A"
 *   insn=0x0000000000283AE0 string=0x0000000000283AE4 "!"
 *   insn=0x0000000000283AE0 string=0x0000000000283B88 "\t#"
 *   insn=0x0000000000283AE4 string=0x0000000000588A28 "swooshSound"
 *   insn=0x0000000000283AF0 string=0x0000000000283AF4 "1"
 *   insn=0x0000000000283B08 string=0x0000000000283B0C "u"
 *   insn=0x0000000000283B1C string=0x0000000000283B20 "!"
 *   insn=0x0000000000283B1C string=0x0000000000283BAC "\t#"
 *   insn=0x0000000000283B20 string=0x0000000000588B58 "hitSound"
 *   insn=0x0000000000283B2C string=0x0000000000283B30 """
 *   insn=0x0000000000283B44 string=0x0000000000283B48 "f"
 *   insn=0x0000000000283B58 string=0x0000000000283B5C "("
 *   insn=0x0000000000283B58 string=0x0000000000283BD0 "\t#"
 *   insn=0x0000000000283B64 string=0x0000000000283B68 "a"
 *   insn=0x0000000000283B88 string=0x0000000000283B8C ")=G"
 *   insn=0x0000000000283B8C string=0x0000000000283B90 "!"
 *   insn=0x0000000000283B90 string=0x0000000000283B94 "\t"
 *   insn=0x0000000000283B94 string=0x0000000000283B98 "\t"
 *   insn=0x0000000000283B94 string=0x0000000000283BF4 "\t"
 *   insn=0x0000000000283B98 string=0x0000000000283B9C "*"
 *   insn=0x0000000000283B9C string=0x0000000000283BA0 "\n"
 *   insn=0x0000000000283BA8 string=0x0000000000283C00 "?"
 *   insn=0x0000000000283BAC string=0x0000000000283BB0 ")=G"
 *   insn=0x0000000000283BB0 string=0x0000000000283BB4 "!"
 *   insn=0x0000000000283BB8 string=0x0000000000283BBC "\t"
 *   insn=0x0000000000283BB8 string=0x0000000000283C14 "\t"
 *   insn=0x0000000000283BBC string=0x0000000000283BC0 "*"
 *   insn=0x0000000000283BC0 string=0x0000000000283BC4 "\n"
 *   insn=0x0000000000283BCC string=0x0000000000283C20 "?"
 *   insn=0x0000000000283BD0 string=0x0000000000283BD4 ")=G"
 *   insn=0x0000000000283BD4 string=0x0000000000283BD8 "!"
 *   insn=0x0000000000283BDC string=0x0000000000283BE0 "\t"
 *   insn=0x0000000000283BDC string=0x0000000000283C34 "\t"
 *   insn=0x0000000000283BE0 string=0x0000000000283BE4 "*"
 *   insn=0x0000000000283BE4 string=0x0000000000283BE8 "\n"
 *   insn=0x0000000000283BF0 string=0x0000000000283C40 "?"
 *   insn=0x0000000000283BF4 string=0x0000000000283BF8 "*"
 *   insn=0x0000000000283BF8 string=0x0000000000283BFC "\n"
 *   insn=0x0000000000283C14 string=0x0000000000283C18 "*"
 *   insn=0x0000000000283C18 string=0x0000000000283C1C "\n"
 *   insn=0x0000000000283C34 string=0x0000000000283C38 "*"
 *   insn=0x0000000000283C38 string=0x0000000000283C3C "\n"
 *   insn=0x0000000000283C54 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000283C5C string=0x0000000000283C60 "(a"
 *   insn=0x0000000000283C68 string=0x0000000000283C6C "\n#"
 *   insn=0x0000000000283C68 string=0x0000000000283D40 "`"
 *   insn=0x0000000000283C6C string=0x0000000000283C70 "J=G"
 *   insn=0x0000000000283C70 string=0x0000000000283C74 ")!"
 *   insn=0x0000000000283C74 string=0x0000000000283C78 "j"
 *   insn=0x0000000000283C78 string=0x0000000000283C7C "*"
 *   insn=0x0000000000283C78 string=0x0000000000283D24 "*"
 *   insn=0x0000000000283C7C string=0x0000000000283C80 "K"
 *   insn=0x0000000000283C80 string=0x0000000000283C84 "+"
 *   insn=0x0000000000283C88 string=0x0000000000283C8C " "
 *   insn=0x0000000000283C8C string=0x0000000000283D0C "_"
 *   insn=0x0000000000283C98 string=0x0000000000283C9C "(a"
 *   insn=0x0000000000283CA4 string=0x0000000000283CA8 "\n#"
 *   insn=0x0000000000283CA8 string=0x0000000000283CAC "J=G"
 *   insn=0x0000000000283CAC string=0x0000000000283CB0 ")!"
 *   insn=0x0000000000283CB4 string=0x0000000000283CB8 "*"
 *   insn=0x0000000000283CB8 string=0x0000000000283CBC "K"
 *   insn=0x0000000000283CBC string=0x0000000000283CC0 "+"
 *   insn=0x0000000000283CD0 string=0x0000000000283CD4 "\n#"
 *   insn=0x0000000000283CD4 string=0x0000000000283CD8 "J"
 *   insn=0x0000000000283CDC string=0x0000000000283CE0 "(a"
 *   insn=0x0000000000283CE8 string=0x0000000000283CEC "\n#"
 *   insn=0x0000000000283CEC string=0x0000000000283CF0 "J=G"
 *   insn=0x0000000000283CF0 string=0x0000000000283CF4 ")!"
 *   insn=0x0000000000283CF4 string=0x0000000000283CF8 "j"
 *   insn=0x0000000000283CF8 string=0x0000000000283CFC "*"
 *   insn=0x0000000000283CFC string=0x0000000000283D00 "K"
 *   insn=0x0000000000283D00 string=0x0000000000283D04 "+"
 *   insn=0x0000000000283D1C string=0x0000000000283D20 ""
 *   insn=0x0000000000283D24 string=0x0000000000283D28 "K"
 *   insn=0x0000000000283D28 string=0x0000000000283D2C "+"
 *   insn=0x0000000000283D2C string=0x0000000000283D30 "_"
 *   insn=0x0000000000283D30 string=0x0000000000283D34 ""
 *   insn=0x0000000000283D44 string=0x0000000000283D48 "uz"
 *   insn=0x0000000000283D4C string=0x0000000000283D50 "@"
 *   insn=0x0000000000283D4C string=0x0000000000283D6C "`v@"
 *   insn=0x0000000000283D50 string=0x0000000000283D54 ""
 *   insn=0x0000000000283D54 string=0x0000000000283D58 ""
 *   insn=0x0000000000283D5C string=0x0000000000283D60 ""
 *   insn=0x0000000000283D60 string=0x0000000000283D64 ""
 *   insn=0x0000000000283D6C string=0x0000000000283D70 "un"
 *   insn=0x0000000000283D74 string=0x0000000000283D78 "@"
 *   insn=0x0000000000283D74 string=0x0000000000283D94 "`j@"
 *   insn=0x0000000000283D78 string=0x0000000000283D7C ""
 *   insn=0x0000000000283D7C string=0x0000000000283D80 ""
 *   insn=0x0000000000283D84 string=0x0000000000283D88 ""
 *   insn=0x0000000000283D88 string=0x0000000000283D8C ""
 *   insn=0x0000000000283D98 string=0x0000000000283D9C "hb"
 *   insn=0x0000000000283DA0 string=0x0000000000283DA4 "@"
 *   insn=0x0000000000283DA0 string=0x0000000000283DC0 "#"
 *   insn=0x0000000000283DA4 string=0x0000000000283DA8 ""
 *   insn=0x0000000000283DA8 string=0x0000000000283DAC ""
 *   insn=0x0000000000283DB0 string=0x0000000000283DB4 ""
 *   insn=0x0000000000283DB4 string=0x0000000000283DB8 ""
 *   insn=0x0000000000283DC0 string=0x0000000000283DC4 "5D"
 *   insn=0x0000000000283DC4 string=0x0000000000283DC8 "`B"
 *   insn=0x0000000000283DC8 string=0x0000000000283DCC "\n!"
 *   insn=0x0000000000283DCC string=0x0000000000283DD0 "\tA"
 *   insn=0x0000000000283DD0 string=0x0000000000283DD4 "!"
 *   insn=0x0000000000283DD4 string=0x0000000000283DD8 "@"
 *   insn=0x0000000000283DDC string=0x0000000000283DE0 "i"
 *   insn=0x0000000000283DE0 string=0x0000000000283DE4 "`"
 *   insn=0x0000000000283DE4 string=0x0000000000283DE8 "b"
 *   insn=0x0000000000283DE8 string=0x0000000000283DEC "`:@"
 *   insn=0x0000000000283DF0 string=0x0000000000283DF4 "@"
 *   insn=0x0000000000283DF4 string=0x0000000000283DF8 ""
 *   insn=0x0000000000283DF8 string=0x0000000000283DFC ""
 *   insn=0x0000000000283E00 string=0x0000000000283E04 ""
 *   insn=0x0000000000283E04 string=0x0000000000283E08 ""
 *   insn=0x0000000000283E14 string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000283E2C string=0x0000000000283E30 "("
 *   insn=0x0000000000283E30 string=0x0000000000283E34 "\t\t@"
 *   insn=0x0000000000283E34 string=0x0000000000283E38 ")"
 *   insn=0x0000000000283E38 string=0x0000000000283E3C "\t\t"
 *   insn=0x0000000000283E40 string=0x0000000000283E44 "\t"
 *   insn=0x0000000000283E44 string=0x0000000000283E48 ")"
 *   insn=0x0000000000283E4C string=0x0000000000283E50 " "
 *   insn=0x0000000000283E68 string=0x0000000000283E6C "8)"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicBoltComponent::MagicBoltComponent(Caver::MagicBoltComponent *this)
{
  __int128 v2; // q1
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  unsigned int *v6; // x8
  int v7; // w9
  unsigned int *v8; // x8
  int v9; // w9
  unsigned int *v10; // x8
  int v11; // w9
  _QWORD v12[3]; // [xsp+8h] [xbp-58h] BYREF

  v12[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::SpellComponent::SpellComponent(this);
  *(_QWORD *)&v2 = &off_6C05A8;
  *((_QWORD *)&v2 + 1) = &off_6C05E8;
  *((_OWORD *)this + 1) = v2;
  *(_QWORD *)this = off_6C0470;
  *((_QWORD *)this + 24) = off_6C0268;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 26) = 0;
  *((_QWORD *)this + 27) = off_6BE248;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 29) = 0;
  *((_QWORD *)this + 30) = off_6BE248;
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 32) = 0;
  *(_OWORD *)((char *)this + 264) = xmmword_588B30;
  *((_QWORD *)this + 35) = 0x3F80000000000000LL;
  *((_QWORD *)this + 36) = 0;
  *((_QWORD *)this + 37) = 0;
  *((_WORD *)this + 152) = 0;
  sub_566BB8((int)v12, "particleEmitter");
  Caver::Component::BindOutlet();
  v3 = (void *)(v12[0] - 24LL);
  if ( (__int64 *)(v12[0] - 24LL) != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(v12[0] - 8LL);
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
      operator delete(v3);
  }
  sub_566BB8((int)v12, "swooshSound");
  Caver::Component::BindOutlet();
  v4 = (void *)(v12[0] - 24LL);
  if ( (__int64 *)(v12[0] - 24LL) != &qword_6FD2E0 )
  {
    v8 = (unsigned int *)(v12[0] - 8LL);
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
      operator delete(v4);
  }
  sub_566BB8((int)v12, "hitSound");
  Caver::Component::BindOutlet();
  v5 = (void *)(v12[0] - 24LL);
  if ( (__int64 *)(v12[0] - 24LL) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v12[0] - 8LL);
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
      operator delete(v5);
  }
}

