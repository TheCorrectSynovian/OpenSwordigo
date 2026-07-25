/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029C204
 * Mangled: _ZN5Caver34ShootingMonsterControllerComponentC2Ev
 * Demangled: Caver::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(void)
 *
 * Callers: 2
 *   0x0000000000200960  Caver::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(void)
 *   0x0000000000200B30  Caver::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(void)
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
 * Referenced strings: 105
 *   insn=0x000000000029C218 string=0x000000000029C21C "X"
 *   insn=0x000000000029C21C string=0x000000000029C220 ""
 *   insn=0x000000000029C228 string=0x000000000029C22C "ax"
 *   insn=0x000000000029C22C string=0x000000000029C230 "H""
 *   insn=0x000000000029C22C string=0x00000000001FA3B0 "0'"
 *   insn=0x000000000029C230 string=0x000000000029C234 ""
 *   insn=0x000000000029C234 string=0x000000000029C238 "V""
 *   insn=0x000000000029C240 string=0x000000000029C244 "\n"
 *   insn=0x000000000029C244 string=0x000000000029C248 "\tA"
 *   insn=0x000000000029C248 string=0x000000000029C24C "@"
 *   insn=0x000000000029C24C string=0x000000000029C250 ""
 *   insn=0x000000000029C260 string=0x000000000029C264 "i"
 *   insn=0x000000000029C264 string=0x000000000029C268 "`"
 *   insn=0x000000000029C278 string=0x000000000029C27C ""
 *   insn=0x000000000029C290 string=0x000000000029C294 "h"
 *   insn=0x000000000029C298 string=0x000000000029C29C "h""
 *   insn=0x000000000029C29C string=0x000000000029C2A0 "A"
 *   insn=0x000000000029C2A0 string=0x000000000058783F "walkAnimation"
 *   insn=0x000000000029C2AC string=0x000000000029C2B0 "B*"
 *   insn=0x000000000029C2C8 string=0x00000000001F6CE0 "0'"
 *   insn=0x000000000029C2CC string=0x000000000029C2D0 "U""
 *   insn=0x000000000029C2DC string=0x000000000029C2E0 "A"
 *   insn=0x000000000029C2E0 string=0x000000000029C2E4 "a"
 *   insn=0x000000000029C2E0 string=0x000000000029C348 "I""
 *   insn=0x000000000029C2E4 string=0x0000000000589320 "shootAnimation"
 *   insn=0x000000000029C2F0 string=0x000000000029C2F4 "1*"
 *   insn=0x000000000029C308 string=0x000000000029C30C "uj"
 *   insn=0x000000000029C31C string=0x000000000029C320 ""
 *   insn=0x000000000029C31C string=0x000000000029C36C "I""
 *   insn=0x000000000029C328 string=0x000000000029C32C "!"
 *   insn=0x000000000029C348 string=0x000000000029C34C ")=G"
 *   insn=0x000000000029C34C string=0x000000000029C350 "!"
 *   insn=0x000000000029C354 string=0x000000000029C358 "\t"
 *   insn=0x000000000029C354 string=0x000000000029C390 "\t"
 *   insn=0x000000000029C358 string=0x000000000029C35C "*"
 *   insn=0x000000000029C35C string=0x000000000029C360 "\n"
 *   insn=0x000000000029C364 string=0x000000000029C368 ""
 *   insn=0x000000000029C368 string=0x000000000029C39C "?"
 *   insn=0x000000000029C36C string=0x000000000029C370 ")=G"
 *   insn=0x000000000029C370 string=0x000000000029C374 "!"
 *   insn=0x000000000029C378 string=0x000000000029C37C "\t"
 *   insn=0x000000000029C378 string=0x000000000029C3B0 "\t"
 *   insn=0x000000000029C37C string=0x000000000029C380 "*"
 *   insn=0x000000000029C380 string=0x000000000029C384 "\n"
 *   insn=0x000000000029C38C string=0x000000000029C3BC "?"
 *   insn=0x000000000029C390 string=0x000000000029C394 "*"
 *   insn=0x000000000029C394 string=0x000000000029C398 "\n"
 *   insn=0x000000000029C39C string=0x000000000029C3A0 ","
 *   insn=0x000000000029C3B0 string=0x000000000029C3B4 "*"
 *   insn=0x000000000029C3B4 string=0x000000000029C3B8 "\n"
 *   insn=0x000000000029C3D0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000029C3D4 string=0x000000000029C3D8 "(a"
 *   insn=0x000000000029C3E4 string=0x000000000029C3E8 "J""
 *   insn=0x000000000029C3E4 string=0x000000000029C494 "`"
 *   insn=0x000000000029C3E8 string=0x000000000029C3EC "J=G"
 *   insn=0x000000000029C3EC string=0x000000000029C3F0 ")!"
 *   insn=0x000000000029C3F0 string=0x000000000029C3F4 "*"
 *   insn=0x000000000029C3F4 string=0x000000000029C3F8 "*"
 *   insn=0x000000000029C3F4 string=0x000000000029C478 "*"
 *   insn=0x000000000029C3F8 string=0x000000000029C3FC "K"
 *   insn=0x000000000029C3FC string=0x000000000029C400 "+"
 *   insn=0x000000000029C408 string=0x000000000029C458 "_"
 *   insn=0x000000000029C40C string=0x000000000029C410 "`"
 *   insn=0x000000000029C410 string=0x000000000029C414 "@"
 *   insn=0x000000000029C414 string=0x000000000029C418 "("
 *   insn=0x000000000029C414 string=0x000000000029C49C "@"
 *   insn=0x000000000029C418 string=0x000000000029C4B8 "`"
 *   insn=0x000000000029C41C string=0x000000000029C420 "J""
 *   insn=0x000000000029C420 string=0x000000000029C424 "J"
 *   insn=0x000000000029C428 string=0x000000000029C42C "(a"
 *   insn=0x000000000029C434 string=0x000000000029C438 "J""
 *   insn=0x000000000029C438 string=0x000000000029C43C "J=G"
 *   insn=0x000000000029C43C string=0x000000000029C440 ")!"
 *   insn=0x000000000029C444 string=0x000000000029C448 "*"
 *   insn=0x000000000029C448 string=0x000000000029C44C "K"
 *   insn=0x000000000029C44C string=0x000000000029C450 "+"
 *   insn=0x000000000029C468 string=0x000000000029C46C "`"
 *   insn=0x000000000029C46C string=0x000000000029C470 "`"
 *   insn=0x000000000029C478 string=0x000000000029C47C "K"
 *   insn=0x000000000029C47C string=0x000000000029C480 "+"
 *   insn=0x000000000029C480 string=0x000000000029C484 "_"
 *   insn=0x000000000029C49C string=0x000000000029C4A0 ""
 *   insn=0x000000000029C4A0 string=0x000000000029C4A4 ""
 *   insn=0x000000000029C4A8 string=0x000000000029C4AC ""
 *   insn=0x000000000029C4AC string=0x000000000029C4B0 ""
 *   insn=0x000000000029C4BC string=0x000000000029C4C0 "@"
 *   insn=0x000000000029C4C0 string=0x000000000029C4C4 ""
 *   insn=0x000000000029C4C4 string=0x000000000029C4C8 ""
 *   insn=0x000000000029C4CC string=0x000000000029C4D0 ""
 *   insn=0x000000000029C4D0 string=0x000000000029C4D4 ""
 *   insn=0x000000000029C4E8 string=0x000000000029C4EC "@"
 *   insn=0x000000000029C4E8 string=0x000000000029C508 "`r@"
 *   insn=0x000000000029C4EC string=0x000000000029C4F0 ""
 *   insn=0x000000000029C4F0 string=0x000000000029C4F4 ""
 *   insn=0x000000000029C4F8 string=0x000000000029C4FC ""
 *   insn=0x000000000029C4FC string=0x000000000029C500 ""
 *   insn=0x000000000029C508 string=0x000000000029C50C "vj"
 *   insn=0x000000000029C510 string=0x000000000029C514 "@"
 *   insn=0x000000000029C514 string=0x000000000029C518 ""
 *   insn=0x000000000029C518 string=0x000000000029C51C ""
 *   insn=0x000000000029C520 string=0x000000000029C524 ""
 *   insn=0x000000000029C524 string=0x000000000029C528 ""
 *   insn=0x000000000029C558 string=0x000000000029C55C "h"
 *   insn=0x000000000029C558 string=0x00000000001F4020 "P'"
 *   insn=0x000000000029C560 string=0x000000000029C564 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(
        Caver::ShootingMonsterControllerComponent *this)
{
  __int128 v2; // q0
  void *v3; // x0
  void *v4; // x0
  unsigned int *v5; // x8
  int v6; // w9
  unsigned int *v7; // x8
  int v8; // w9
  _QWORD v9[3]; // [xsp+28h] [xbp-48h] BYREF

  v9[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::MonsterControllerComponent::MonsterControllerComponent(this);
  *(_QWORD *)&v2 = &off_6C2508;
  *((_QWORD *)&v2 + 1) = &off_6C2548;
  *(_QWORD *)this = off_6C23F0;
  *((_OWORD *)this + 1) = v2;
  *((_QWORD *)this + 26) = &off_6BDF68;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 28) = 0;
  *((_QWORD *)this + 29) = &off_6BDF68;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 34) = 0;
  *((_QWORD *)this + 32) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 70) = 2139095039;
  *((_WORD *)this + 142) = 0;
  *((_DWORD *)this + 72) = 2139095039;
  sub_566BB8((int)v9, "walkAnimation");
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
  sub_566BB8((int)v9, "shootAnimation");
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

