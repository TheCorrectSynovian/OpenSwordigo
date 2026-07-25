/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AC914
 * Mangled: _ZN5Caver23ParticleObjectComponentC2Ev
 * Demangled: Caver::ParticleObjectComponent::ParticleObjectComponent(void)
 *
 * Callers: 2
 *   0x00000000001FE6F0  Caver::ParticleObjectComponent::ParticleObjectComponent(void)
 *   0x0000000000202010  Caver::ParticleObjectComponent::ParticleObjectComponent(void)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001F7640  Caver::PhysicsObjectState::~PhysicsObjectState()
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FBE10  Caver::PhysicsObjectState::PhysicsObjectState(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 62
 *   insn=0x00000000002AC928 string=0x00000000002AC92C "W"
 *   insn=0x00000000002AC934 string=0x00000000002AC938 ""
 *   insn=0x00000000002AC94C string=0x00000000002AC950 "\tc"
 *   insn=0x00000000002AC950 string=0x00000000002AC954 "i"
 *   insn=0x00000000002AC958 string=0x00000000002AC95C "\n"
 *   insn=0x00000000002AC95C string=0x00000000002AC960 "@"
 *   insn=0x00000000002AC960 string=0x00000000002AC964 "\n"
 *   insn=0x00000000002AC964 string=0x00000000002AC968 "@"
 *   insn=0x00000000002AC96C string=0x00000000002AC970 "A"
 *   insn=0x00000000002AC97C string=0x00000000002AC980 "_"
 *   insn=0x00000000002AC980 string=0x00000000002AC984 "h"
 *   insn=0x00000000002AC98C string=0x00000000002AC990 "j"
 *   insn=0x00000000002AC998 string=0x00000000002AC99C "`"
 *   insn=0x00000000002AC9A0 string=0x00000000002AC9A4 "t""
 *   insn=0x00000000002AC9B4 string=0x00000000001FBE10 "0'"
 *   insn=0x00000000002AC9BC string=0x00000000002AC9C0 "`F"
 *   insn=0x00000000002AC9C4 string=0x0000000000583C3C "model"
 *   insn=0x00000000002AC9D0 string=0x00000000002AC9D4 "y"
 *   insn=0x00000000002AC9EC string=0x00000000001F6CE0 "0'"
 *   insn=0x00000000002AC9F8 string=0x00000000002AC9FC "a"
 *   insn=0x00000000002ACA28 string=0x00000000002ACA2C ")=G"
 *   insn=0x00000000002ACA2C string=0x00000000002ACA30 "!"
 *   insn=0x00000000002ACA34 string=0x00000000002ACA38 "\t"
 *   insn=0x00000000002ACA34 string=0x00000000002ACA4C "\t"
 *   insn=0x00000000002ACA38 string=0x00000000002ACA3C "*"
 *   insn=0x00000000002ACA3C string=0x00000000002ACA40 "\n"
 *   insn=0x00000000002ACA48 string=0x00000000002ACA58 "?"
 *   insn=0x00000000002ACA4C string=0x00000000002ACA50 "*"
 *   insn=0x00000000002ACA50 string=0x00000000002ACA54 "\n"
 *   insn=0x00000000002ACA58 string=0x00000000002ACA5C ","
 *   insn=0x00000000002ACA60 string=0x00000000002ACA64 "P"
 *   insn=0x00000000002ACA6C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002ACA78 string=0x00000000002ACA7C "(a"
 *   insn=0x00000000002ACA88 string=0x00000000002ACA8C "J=G"
 *   insn=0x00000000002ACA8C string=0x00000000002ACA90 ")!"
 *   insn=0x00000000002ACA90 string=0x00000000002ACA94 "j"
 *   insn=0x00000000002ACA94 string=0x00000000002ACA98 "*"
 *   insn=0x00000000002ACA94 string=0x00000000002ACAC0 "*"
 *   insn=0x00000000002ACA98 string=0x00000000002ACA9C "K"
 *   insn=0x00000000002ACA9C string=0x00000000002ACAA0 "+"
 *   insn=0x00000000002ACAA4 string=0x00000000002ACAA8 "_"
 *   insn=0x00000000002ACAB4 string=0x00000000002ACAB8 ";"
 *   insn=0x00000000002ACAB8 string=0x00000000002ACABC "\t"
 *   insn=0x00000000002ACAC0 string=0x00000000002ACAC4 "K"
 *   insn=0x00000000002ACAC4 string=0x00000000002ACAC8 "+"
 *   insn=0x00000000002ACAC8 string=0x00000000002ACACC "_"
 *   insn=0x00000000002ACACC string=0x00000000002ACAD0 ""
 *   insn=0x00000000002ACAE4 string=0x00000000001F7640 "0'"
 *   insn=0x00000000002ACAE8 string=0x00000000002ACAF0 "`B@"
 *   insn=0x00000000002ACAF4 string=0x00000000002ACAF8 "h:"
 *   insn=0x00000000002ACAFC string=0x00000000002ACB00 "@"
 *   insn=0x00000000002ACB00 string=0x00000000002ACB04 ""
 *   insn=0x00000000002ACB04 string=0x00000000002ACB08 ""
 *   insn=0x00000000002ACB0C string=0x00000000002ACB10 ""
 *   insn=0x00000000002ACB10 string=0x00000000002ACB14 ""
 *   insn=0x00000000002ACB1C string=0x00000000002ACB20 "l6"
 *   insn=0x00000000002ACB20 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002ACB24 string=0x00000000002ACB28 "gS"
 *   insn=0x00000000002ACB28 string=0x00000000002ACB2C ""
 *   insn=0x00000000002ACB3C string=0x00000000002ACB40 "h"@"
 *   insn=0x00000000002ACB44 string=0x00000000002ACB48 "a"
 *   insn=0x00000000002ACB54 string=0x00000000002ACB58 "hz@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ParticleObjectComponent::ParticleObjectComponent(Caver::ParticleObjectComponent *this)
{
  __int128 v2; // q0
  void *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9
  _QWORD v6[3]; // [xsp+38h] [xbp-48h] BYREF

  v6[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *(_QWORD *)&v2 = &off_6C3AA8;
  *((_QWORD *)&v2 + 1) = &off_6C3AE8;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 9) = 0;
  *(_QWORD *)this = off_6C3990;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_OWORD *)this + 1) = v2;
  *((_QWORD *)this + 14) = off_6B9438;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0;
  Caver::PhysicsObjectState::PhysicsObjectState((Caver::ParticleObjectComponent *)((char *)this + 136));
  *((_OWORD *)this + 17) = xmmword_5837F0;
  sub_566BB8((int)v6, "model");
  Caver::Component::BindOutlet();
  v3 = (void *)(v6[0] - 24LL);
  if ( (__int64 *)(v6[0] - 24LL) != &qword_6FD2E0 )
  {
    v4 = (unsigned int *)(v6[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = (*v4)--;
    }
    if ( v5 <= 0 )
      operator delete(v3);
  }
}

