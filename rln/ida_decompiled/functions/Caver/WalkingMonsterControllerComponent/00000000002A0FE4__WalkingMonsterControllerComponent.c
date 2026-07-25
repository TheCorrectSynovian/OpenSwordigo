/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A0FE4
 * Mangled: _ZN5Caver33WalkingMonsterControllerComponentC2Ev
 * Demangled: Caver::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(void)
 *
 * Callers: 2
 *   0x00000000001F6CF0  Caver::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(void)
 *   0x0000000000200C80  Caver::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(void)
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
 * Referenced strings: 66
 *   insn=0x00000000002A0FF4 string=0x00000000002A0FF8 "U"
 *   insn=0x00000000002A1008 string=0x00000000002A100C "(""
 *   insn=0x00000000002A1008 string=0x00000000001FA3B0 "0'"
 *   insn=0x00000000002A100C string=0x00000000002A1010 ""
 *   insn=0x00000000002A1010 string=0x00000000002A1014 "6""
 *   insn=0x00000000002A101C string=0x00000000002A1020 "\n"
 *   insn=0x00000000002A1020 string=0x00000000002A1024 "\tA"
 *   insn=0x00000000002A1024 string=0x00000000002A1028 ""
 *   insn=0x00000000002A1028 string=0x00000000002A102C "@"
 *   insn=0x00000000002A1034 string=0x00000000002A1038 "i"
 *   insn=0x00000000002A1038 string=0x00000000002A103C "`"
 *   insn=0x00000000002A104C string=0x00000000002A1050 "!"
 *   insn=0x00000000002A1050 string=0x000000000058783F "walkAnimation"
 *   insn=0x00000000002A1078 string=0x00000000001F6CE0 "0'"
 *   insn=0x00000000002A107C string=0x00000000002A1080 ")""
 *   insn=0x00000000002A1080 string=0x00000000002A1084 ")"
 *   insn=0x00000000002A108C string=0x00000000002A1090 "A"
 *   insn=0x00000000002A1090 string=0x00000000002A10B8 "\t""
 *   insn=0x00000000002A10A0 string=0x00000000002A10FC "uT"
 *   insn=0x00000000002A10B8 string=0x00000000002A10BC ")=G"
 *   insn=0x00000000002A10BC string=0x00000000002A10C0 "!"
 *   insn=0x00000000002A10C4 string=0x00000000002A10C8 "\t"
 *   insn=0x00000000002A10C4 string=0x00000000002A10DC "\t"
 *   insn=0x00000000002A10C8 string=0x00000000002A10CC "*"
 *   insn=0x00000000002A10CC string=0x00000000002A10D0 "\n"
 *   insn=0x00000000002A10D8 string=0x00000000002A10E8 "?"
 *   insn=0x00000000002A10DC string=0x00000000002A10E0 "*"
 *   insn=0x00000000002A10E0 string=0x00000000002A10E4 "\n"
 *   insn=0x00000000002A10E8 string=0x00000000002A10EC "L"
 *   insn=0x00000000002A10FC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002A1100 string=0x00000000002A1104 "*""
 *   insn=0x00000000002A1104 string=0x00000000002A1108 "J"
 *   insn=0x00000000002A110C string=0x00000000002A1110 "(a"
 *   insn=0x00000000002A1118 string=0x00000000002A111C "\n""
 *   insn=0x00000000002A1118 string=0x00000000002A1170 "`r@"
 *   insn=0x00000000002A111C string=0x00000000002A1120 "J=G"
 *   insn=0x00000000002A1120 string=0x00000000002A1124 ")!"
 *   insn=0x00000000002A1124 string=0x00000000002A1128 "j"
 *   insn=0x00000000002A1128 string=0x00000000002A112C "*"
 *   insn=0x00000000002A1128 string=0x00000000002A1154 "*"
 *   insn=0x00000000002A112C string=0x00000000002A1130 "K"
 *   insn=0x00000000002A1130 string=0x00000000002A1134 "+"
 *   insn=0x00000000002A1138 string=0x00000000002A113C "_"
 *   insn=0x00000000002A114C string=0x00000000002A1150 ""
 *   insn=0x00000000002A1154 string=0x00000000002A1158 "K"
 *   insn=0x00000000002A1158 string=0x00000000002A115C "+"
 *   insn=0x00000000002A115C string=0x00000000002A1160 "_"
 *   insn=0x00000000002A1160 string=0x00000000002A1164 ""
 *   insn=0x00000000002A1174 string=0x00000000002A1178 "hj"
 *   insn=0x00000000002A117C string=0x00000000002A1180 "@"
 *   insn=0x00000000002A1180 string=0x00000000002A1184 ""
 *   insn=0x00000000002A1184 string=0x00000000002A1188 ""
 *   insn=0x00000000002A118C string=0x00000000002A1190 ""
 *   insn=0x00000000002A1190 string=0x00000000002A1194 ""
 *   insn=0x00000000002A11A8 string=0x00000000002A11AC "h"
 *   insn=0x00000000002A11C4 string=0x00000000001F4020 "P'"
 *   insn=0x00000000002A11C8 string=0x00000000002A11CC "i"
 *   insn=0x00000000002A11CC string=0x00000000002A11D0 "?"
 *   insn=0x00000000002A11D0 string=0x00000000002A11D4 " "
 *   insn=0x00000000002A11D4 string=0x00000000002A11D8 "`r@"
 *   insn=0x00000000002A11D8 string=0x00000000002A11DC "h"
 *   insn=0x00000000002A11E4 string=0x00000000002A11E8 "@"
 *   insn=0x00000000002A11E8 string=0x00000000002A11EC ""
 *   insn=0x00000000002A11EC string=0x00000000002A11F0 ""
 *   insn=0x00000000002A11F4 string=0x00000000002A1204 ""
 *   insn=0x00000000002A1210 string=0x00000000002A1214 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(
        Caver::WalkingMonsterControllerComponent *this)
{
  __int128 v2; // q0
  void *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9
  _QWORD v6[3]; // [xsp+28h] [xbp-38h] BYREF

  v6[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::MonsterControllerComponent::MonsterControllerComponent(this);
  *(_QWORD *)&v2 = &off_6C2C48;
  *((_QWORD *)&v2 + 1) = &off_6C2C88;
  *(_QWORD *)this = off_6C2B30;
  *((_OWORD *)this + 1) = v2;
  *((_QWORD *)this + 26) = &off_6BDF68;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 28) = 0;
  *((_DWORD *)this + 58) = 0;
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

