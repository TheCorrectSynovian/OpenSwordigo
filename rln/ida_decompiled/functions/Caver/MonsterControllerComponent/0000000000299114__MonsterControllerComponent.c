/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000299114
 * Mangled: _ZN5Caver26MonsterControllerComponentC2Ev
 * Demangled: Caver::MonsterControllerComponent::MonsterControllerComponent(void)
 *
 * Callers: 1
 *   0x00000000001FA3B0  Caver::MonsterControllerComponent::MonsterControllerComponent(void)
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
 * Referenced strings: 132
 *   insn=0x0000000000299130 string=0x0000000000299134 "["
 *   insn=0x0000000000299134 string=0x0000000000299138 "|""
 *   insn=0x0000000000299138 string=0x000000000029913C "i""
 *   insn=0x000000000029913C string=0x0000000000299140 "w""
 *   insn=0x0000000000299144 string=0x0000000000299148 ")"
 *   insn=0x000000000029914C string=0x0000000000299150 "j"
 *   insn=0x0000000000299150 string=0x0000000000299154 "x""
 *   insn=0x0000000000299164 string=0x0000000000299168 "j"
 *   insn=0x0000000000299168 string=0x000000000029916C "z""
 *   insn=0x0000000000299170 string=0x0000000000299174 "+"
 *   insn=0x0000000000299174 string=0x0000000000299178 "Z"
 *   insn=0x0000000000299178 string=0x000000000029917C "`"
 *   insn=0x000000000029917C string=0x0000000000299180 "+"
 *   insn=0x0000000000299180 string=0x0000000000299184 ")A"
 *   insn=0x000000000029919C string=0x00000000002991A0 "`"
 *   insn=0x00000000002991A4 string=0x00000000002991A8 "i"
 *   insn=0x00000000002991AC string=0x00000000002991B0 "h"
 *   insn=0x00000000002991B0 string=0x00000000002991B4 "C"
 *   insn=0x00000000002991BC string=0x00000000002991C0 "`"
 *   insn=0x00000000002991D4 string=0x00000000002991D8 "?"
 *   insn=0x00000000002991D8 string=0x00000000002991DC "IC"
 *   insn=0x00000000002991E0 string=0x00000000002991E4 "?"
 *   insn=0x00000000002991E8 string=0x00000000002991EC "Y"
 *   insn=0x00000000002991EC string=0x00000000002991F0 "?"
 *   insn=0x00000000002991F0 string=0x00000000002991F4 "?"
 *   insn=0x00000000002991F4 string=0x00000000002991F8 "("
 *   insn=0x00000000002991F8 string=0x00000000002991FC "a"
 *   insn=0x00000000002991FC string=0x00000000005879D8 "entity"
 *   insn=0x0000000000299208 string=0x000000000029920C "k6"
 *   insn=0x0000000000299224 string=0x00000000001F6CE0 "0'"
 *   insn=0x0000000000299230 string=0x0000000000299234 "a"
 *   insn=0x0000000000299234 string=0x0000000000299238 "a"
 *   insn=0x0000000000299234 string=0x00000000002992E0 "I""
 *   insn=0x0000000000299238 string=0x000000000058801C "animationController"
 *   insn=0x0000000000299244 string=0x0000000000299248 "\6"
 *   insn=0x0000000000299270 string=0x0000000000299274 "a"
 *   insn=0x0000000000299270 string=0x0000000000299304 "I""
 *   insn=0x0000000000299274 string=0x0000000000588045 "roamArea"
 *   insn=0x0000000000299280 string=0x0000000000299284 "M6"
 *   insn=0x00000000002992AC string=0x00000000002992B0 "h"
 *   insn=0x00000000002992AC string=0x0000000000299328 "I""
 *   insn=0x00000000002992E0 string=0x00000000002992E4 ")=G"
 *   insn=0x00000000002992E4 string=0x00000000002992E8 "!"
 *   insn=0x00000000002992E8 string=0x00000000002992EC "\t"
 *   insn=0x00000000002992EC string=0x00000000002992F0 "\t"
 *   insn=0x00000000002992EC string=0x000000000029934C "\t"
 *   insn=0x00000000002992F0 string=0x00000000002992F4 "*"
 *   insn=0x00000000002992F4 string=0x00000000002992F8 "\n"
 *   insn=0x0000000000299300 string=0x0000000000299358 "?"
 *   insn=0x0000000000299304 string=0x0000000000299308 ")=G"
 *   insn=0x0000000000299308 string=0x000000000029930C "!"
 *   insn=0x0000000000299310 string=0x0000000000299314 "\t"
 *   insn=0x0000000000299310 string=0x000000000029936C "\t"
 *   insn=0x0000000000299314 string=0x0000000000299318 "*"
 *   insn=0x0000000000299318 string=0x000000000029931C "\n"
 *   insn=0x0000000000299324 string=0x0000000000299378 "?"
 *   insn=0x0000000000299328 string=0x000000000029932C ")=G"
 *   insn=0x000000000029932C string=0x0000000000299330 "!"
 *   insn=0x0000000000299334 string=0x0000000000299338 "\t"
 *   insn=0x0000000000299334 string=0x000000000029938C "\t"
 *   insn=0x0000000000299338 string=0x000000000029933C "*"
 *   insn=0x000000000029933C string=0x0000000000299340 "\n"
 *   insn=0x0000000000299348 string=0x0000000000299398 "?"
 *   insn=0x000000000029934C string=0x0000000000299350 "*"
 *   insn=0x0000000000299350 string=0x0000000000299354 "\n"
 *   insn=0x000000000029936C string=0x0000000000299370 "*"
 *   insn=0x0000000000299370 string=0x0000000000299374 "\n"
 *   insn=0x0000000000299380 string=0x0000000000299384 "D"
 *   insn=0x000000000029938C string=0x0000000000299390 "*"
 *   insn=0x0000000000299390 string=0x0000000000299394 "\n"
 *   insn=0x00000000002993AC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002993B4 string=0x00000000002993B8 "(a"
 *   insn=0x00000000002993C0 string=0x00000000002993C4 "J""
 *   insn=0x00000000002993C0 string=0x0000000000299490 "HC"
 *   insn=0x00000000002993C4 string=0x00000000002993C8 "J=G"
 *   insn=0x00000000002993C8 string=0x00000000002993CC ")!"
 *   insn=0x00000000002993CC string=0x00000000002993D0 "*"
 *   insn=0x00000000002993D0 string=0x00000000002993D4 "*"
 *   insn=0x00000000002993D0 string=0x0000000000299474 "*"
 *   insn=0x00000000002993D4 string=0x00000000002993D8 "K"
 *   insn=0x00000000002993D8 string=0x00000000002993DC "+"
 *   insn=0x00000000002993E4 string=0x000000000029945C "_"
 *   insn=0x00000000002993F0 string=0x00000000002993F4 "(a"
 *   insn=0x00000000002993FC string=0x0000000000299400 "J""
 *   insn=0x0000000000299400 string=0x0000000000299404 "J=G"
 *   insn=0x0000000000299404 string=0x0000000000299408 ")!"
 *   insn=0x0000000000299408 string=0x000000000029940C "J"
 *   insn=0x000000000029940C string=0x0000000000299410 "*"
 *   insn=0x0000000000299410 string=0x0000000000299414 "K"
 *   insn=0x0000000000299414 string=0x0000000000299418 "+"
 *   insn=0x000000000029942C string=0x0000000000299430 "(a"
 *   insn=0x0000000000299438 string=0x000000000029943C "J""
 *   insn=0x000000000029943C string=0x0000000000299440 "J=G"
 *   insn=0x0000000000299440 string=0x0000000000299444 ")!"
 *   insn=0x0000000000299444 string=0x0000000000299448 "j"
 *   insn=0x0000000000299448 string=0x000000000029944C "*"
 *   insn=0x000000000029944C string=0x0000000000299450 "K"
 *   insn=0x0000000000299450 string=0x0000000000299454 "+"
 *   insn=0x000000000029946C string=0x0000000000299470 ""
 *   insn=0x0000000000299474 string=0x0000000000299478 "K"
 *   insn=0x0000000000299478 string=0x000000000029947C "+"
 *   insn=0x000000000029947C string=0x0000000000299480 "_"
 *   insn=0x0000000000299480 string=0x0000000000299484 ""
 *   insn=0x0000000000299494 string=0x0000000000299498 " "
 *   insn=0x000000000029949C string=0x00000000002994A0 "@"
 *   insn=0x000000000029949C string=0x00000000002994BC "`N@"
 *   insn=0x00000000002994A0 string=0x00000000002994A4 ""
 *   insn=0x00000000002994A4 string=0x00000000002994A8 ""
 *   insn=0x00000000002994AC string=0x00000000002994B0 ""
 *   insn=0x00000000002994B0 string=0x00000000002994B4 ""
 *   insn=0x00000000002994BC string=0x00000000002994C0 "C"
 *   insn=0x00000000002994C0 string=0x00000000002994C4 "hF"
 *   insn=0x00000000002994C8 string=0x00000000002994CC "@"
 *   insn=0x00000000002994C8 string=0x00000000002994E8 "`B@"
 *   insn=0x00000000002994CC string=0x00000000002994D0 ""
 *   insn=0x00000000002994D0 string=0x00000000002994D4 ""
 *   insn=0x00000000002994D8 string=0x00000000002994DC ""
 *   insn=0x00000000002994DC string=0x00000000002994E0 ""
 *   insn=0x00000000002994EC string=0x00000000002994F0 "h:"
 *   insn=0x00000000002994F4 string=0x00000000002994F8 "@"
 *   insn=0x00000000002994F8 string=0x00000000002994FC ""
 *   insn=0x00000000002994FC string=0x0000000000299500 ""
 *   insn=0x0000000000299504 string=0x0000000000299508 ""
 *   insn=0x0000000000299508 string=0x000000000029950C ""
 *   insn=0x0000000000299518 string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000299534 string=0x0000000000299538 "h"@"
 *   insn=0x000000000029953C string=0x0000000000299540 "a"
 *   insn=0x0000000000299548 string=0x000000000029954C "WD"
 *   insn=0x000000000029954C string=0x0000000000299550 "hz@"
 *   insn=0x0000000000299554 string=0x0000000000299558 "h"
 *   insn=0x000000000029955C string=0x0000000000299560 "h"
 *   insn=0x0000000000299564 string=0x0000000000299568 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MonsterControllerComponent::MonsterControllerComponent(Caver::MonsterControllerComponent *this)
{
  __int128 v1; // q0
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  unsigned int *v5; // x8
  int v6; // w9
  unsigned int *v7; // x8
  int v8; // w9
  unsigned int *v9; // x8
  int v10; // w9
  _QWORD v11[3]; // [xsp+28h] [xbp-68h] BYREF

  v11[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *(_QWORD *)&v1 = &off_6C1FD8;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)&v1 + 1) = &off_6C2018;
  *(_QWORD *)this = off_6C1EC0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_OWORD *)this + 1) = v1;
  *((_QWORD *)this + 14) = off_6C1798;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = off_6BEE48;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 22) = 0;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 20) = off_6C1748;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 23) = 0;
  *((_QWORD *)this + 24) = 0;
  *((_DWORD *)this + 50) = 1120403456;
  sub_566BB8((int)v11, "entity");
  Caver::Component::BindOutlet();
  v2 = (void *)(v11[0] - 24LL);
  if ( (__int64 *)(v11[0] - 24LL) != &qword_6FD2E0 )
  {
    v5 = (unsigned int *)(v11[0] - 8LL);
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
      operator delete(v2);
  }
  sub_566BB8((int)v11, "animationController");
  Caver::Component::BindOutlet();
  v3 = (void *)(v11[0] - 24LL);
  if ( (__int64 *)(v11[0] - 24LL) != &qword_6FD2E0 )
  {
    v7 = (unsigned int *)(v11[0] - 8LL);
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
      operator delete(v3);
  }
  sub_566BB8((int)v11, "roamArea");
  Caver::Component::BindOutlet();
  v4 = (void *)(v11[0] - 24LL);
  if ( (__int64 *)(v11[0] - 24LL) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)(v11[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v10 = __ldaxr(v9);
      while ( __stlxr(v10 - 1, v9) );
    }
    else
    {
      v10 = (*v9)--;
    }
    if ( v10 <= 0 )
      operator delete(v4);
  }
}

