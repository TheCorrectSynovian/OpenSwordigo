/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000296F64
 * Mangled: _ZN5Caver33GenericMonsterControllerComponentC2Ev
 * Demangled: Caver::GenericMonsterControllerComponent::GenericMonsterControllerComponent(void)
 *
 * Callers: 2
 *   0x00000000001F8250  Caver::GenericMonsterControllerComponent::GenericMonsterControllerComponent(void)
 *   0x00000000001FBE70  Caver::GenericMonsterControllerComponent::GenericMonsterControllerComponent(void)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA3B0  Caver::MonsterControllerComponent::MonsterControllerComponent(void)
 *   0x0000000000202D00  Caver::MonsterControllerComponent::~MonsterControllerComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000297214  Caver::GenericMonsterControllerComponent::InitWithComponent(Caver::GenericMonsterControllerComponent const*)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 79
 *   insn=0x0000000000296F7C string=0x0000000000296F80 "V"
 *   insn=0x0000000000296F8C string=0x0000000000296F90 ""
 *   insn=0x0000000000296F90 string=0x0000000000296F94 "h""
 *   insn=0x0000000000296F90 string=0x00000000001FA3B0 "0'"
 *   insn=0x0000000000296F94 string=0x0000000000296F98 "qA"
 *   insn=0x0000000000296F98 string=0x0000000000296F9C "w""
 *   insn=0x0000000000296FA4 string=0x0000000000296FA8 "\t"
 *   insn=0x0000000000296FA8 string=0x0000000000296FAC " "
 *   insn=0x0000000000296FAC string=0x0000000000296FB0 "\t"
 *   insn=0x0000000000296FB0 string=0x0000000000296FB4 "A"
 *   insn=0x0000000000296FB8 string=0x0000000000296FBC " "
 *   insn=0x0000000000296FBC string=0x0000000000296FC0 "\t"
 *   insn=0x0000000000296FC0 string=0x0000000000296FC4 "h"
 *   insn=0x0000000000296FC8 string=0x0000000000296FCC "`"
 *   insn=0x0000000000296FCC string=0x0000000000296FD0 " "
 *   insn=0x0000000000296FD0 string=0x0000000000296FD4 "i2"
 *   insn=0x0000000000296FEC string=0x0000000000296FF0 " "
 *   insn=0x0000000000296FF8 string=0x000000000058783F "walkAnimation"
 *   insn=0x000000000029701C string=0x0000000000297020 "0"
 *   insn=0x0000000000297020 string=0x00000000001F6CE0 "0'"
 *   insn=0x0000000000297024 string=0x0000000000297028 "i""
 *   insn=0x0000000000297028 string=0x000000000029702C ")"
 *   insn=0x0000000000297038 string=0x0000000000297068 "i""
 *   insn=0x0000000000297044 string=0x0000000000297048 "!"
 *   insn=0x0000000000297068 string=0x000000000029706C ")=G"
 *   insn=0x000000000029706C string=0x0000000000297070 "!"
 *   insn=0x0000000000297074 string=0x0000000000297078 "\t"
 *   insn=0x0000000000297074 string=0x000000000029708C "\t"
 *   insn=0x0000000000297078 string=0x000000000029707C "*"
 *   insn=0x000000000029707C string=0x0000000000297080 "\n"
 *   insn=0x0000000000297088 string=0x0000000000297098 "?"
 *   insn=0x000000000029708C string=0x0000000000297090 "*"
 *   insn=0x0000000000297090 string=0x0000000000297094 "\n"
 *   insn=0x00000000002970AC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002970B0 string=0x00000000002970B4 "j""
 *   insn=0x00000000002970B4 string=0x00000000002970B8 "J"
 *   insn=0x00000000002970BC string=0x00000000002970C0 "(a"
 *   insn=0x00000000002970CC string=0x00000000002970D0 "j""
 *   insn=0x00000000002970CC string=0x0000000000297128 "`"
 *   insn=0x00000000002970D0 string=0x00000000002970D4 "J=G"
 *   insn=0x00000000002970D4 string=0x00000000002970D8 ")!"
 *   insn=0x00000000002970DC string=0x00000000002970E0 "*"
 *   insn=0x00000000002970DC string=0x00000000002970F4 "*"
 *   insn=0x00000000002970E0 string=0x00000000002970E4 "K"
 *   insn=0x00000000002970E4 string=0x00000000002970E8 "+"
 *   insn=0x00000000002970F0 string=0x0000000000297100 "_"
 *   insn=0x00000000002970F4 string=0x00000000002970F8 "K"
 *   insn=0x00000000002970F8 string=0x00000000002970FC "+"
 *   insn=0x0000000000297100 string=0x0000000000297104 ","
 *   insn=0x0000000000297110 string=0x0000000000297114 "`"
 *   insn=0x0000000000297118 string=0x0000000000297130 "@"
 *   insn=0x000000000029711C string=0x000000000029714C "h"
 *   insn=0x0000000000297130 string=0x0000000000297134 ""
 *   insn=0x0000000000297134 string=0x0000000000297138 ""
 *   insn=0x000000000029713C string=0x0000000000297140 ""
 *   insn=0x0000000000297140 string=0x0000000000297144 ""
 *   insn=0x000000000029715C string=0x000000000029719C "x"
 *   insn=0x0000000000297164 string=0x0000000000297168 " "
 *   insn=0x0000000000297168 string=0x000000000029716C "\n@"
 *   insn=0x000000000029716C string=0x0000000000297170 "J"
 *   insn=0x0000000000297170 string=0x0000000000297174 "\n"
 *   insn=0x0000000000297178 string=0x000000000029717C "\t"
 *   insn=0x000000000029717C string=0x0000000000297180 ")"
 *   insn=0x0000000000297180 string=0x0000000000297184 " "
 *   insn=0x000000000029718C string=0x0000000000297190 "?"
 *   insn=0x0000000000297194 string=0x0000000000297198 "xv@"
 *   insn=0x00000000002971A0 string=0x00000000002971A4 "C"
 *   insn=0x00000000002971A4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002971B4 string=0x00000000002971B8 "@"
 *   insn=0x00000000002971B8 string=0x00000000002971BC ""
 *   insn=0x00000000002971BC string=0x00000000002971C0 ""
 *   insn=0x00000000002971C4 string=0x00000000002971C8 ""
 *   insn=0x00000000002971C8 string=0x00000000002971CC ""
 *   insn=0x00000000002971E8 string=0x00000000002971EC "X"
 *   insn=0x00000000002971EC string=0x00000000002971F0 "hv@"
 *   insn=0x00000000002971F4 string=0x00000000002971F8 "h"
 *   insn=0x00000000002971FC string=0x0000000000297200 "S"
 *   insn=0x0000000000297204 string=0x0000000000297208 "*"
 *   insn=0x000000000029720C string=0x0000000000297210 "O"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GenericMonsterControllerComponent::GenericMonsterControllerComponent(
        Caver::GenericMonsterControllerComponent *this)
{
  __int128 v2; // q0
  void *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9
  _QWORD v6[3]; // [xsp+8h] [xbp-58h] BYREF

  v6[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::MonsterControllerComponent::MonsterControllerComponent(this);
  *(_QWORD *)&v2 = &off_6C1C48;
  *((_QWORD *)&v2 + 1) = &off_6C1C88;
  *(_QWORD *)this = off_6C1B30;
  *((_OWORD *)this + 1) = v2;
  *((_QWORD *)this + 26) = &off_6BDF68;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 28) = 0;
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 32) = 0;
  *((_QWORD *)this + 29) = 0;
  *((_QWORD *)this + 30) = 0;
  *((_DWORD *)this + 66) = 0;
  *(int32x2_t *)((char *)this + 268) = vdup_n_s32(0x7F7FFFFFu);
  *((_QWORD *)this + 35) = 0;
  sub_566BB8((int)v6, "walkAnimation");
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

