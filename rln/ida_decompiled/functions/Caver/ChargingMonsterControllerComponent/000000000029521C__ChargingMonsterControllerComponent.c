/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029521C
 * Mangled: _ZN5Caver34ChargingMonsterControllerComponentC2Ev
 * Demangled: Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(void)
 *
 * Callers: 2
 *   0x00000000001F6380  Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(void)
 *   0x00000000001FC820  Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(void)
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
 * Referenced strings: 174
 *   insn=0x0000000000295230 string=0x0000000000295234 "X"
 *   insn=0x0000000000295234 string=0x0000000000295238 ""
 *   insn=0x0000000000295240 string=0x0000000000295244 "["
 *   insn=0x0000000000295244 string=0x0000000000295248 "h""
 *   insn=0x0000000000295244 string=0x00000000001FA3B0 "0'"
 *   insn=0x0000000000295248 string=0x000000000029524C "ED"
 *   insn=0x0000000000295258 string=0x000000000029525C "\t"
 *   insn=0x000000000029525C string=0x0000000000295260 " "
 *   insn=0x0000000000295260 string=0x0000000000295264 "\t"
 *   insn=0x0000000000295264 string=0x0000000000295268 " "
 *   insn=0x000000000029526C string=0x0000000000295270 "`"
 *   insn=0x0000000000295270 string=0x0000000000295274 " a@"
 *   insn=0x0000000000295274 string=0x0000000000295278 "A"
 *   insn=0x000000000029527C string=0x0000000000295280 "h"
 *   insn=0x0000000000295298 string=0x000000000029529C "h"
 *   insn=0x00000000002952B0 string=0x00000000002952B4 "`"
 *   insn=0x00000000002952B8 string=0x00000000002952BC "h"
 *   insn=0x00000000002952BC string=0x00000000002952C0 "t"
 *   insn=0x00000000002952C0 string=0x00000000002952C4 "i"
 *   insn=0x00000000002952C8 string=0x00000000002952CC ""
 *   insn=0x00000000002952CC string=0x00000000002952D0 "?"
 *   insn=0x00000000002952D0 string=0x00000000002952D4 "hN"
 *   insn=0x00000000002952D4 string=0x00000000002952D8 "hR"
 *   insn=0x00000000002952E0 string=0x000000000058783F "walkAnimation"
 *   insn=0x00000000002952EC string=0x00000000002952F0 "2F"
 *   insn=0x0000000000295304 string=0x0000000000295308 "v"
 *   insn=0x0000000000295308 string=0x00000000001F6CE0 "0'"
 *   insn=0x000000000029531C string=0x0000000000295320 "!"
 *   insn=0x0000000000295320 string=0x00000000002953C4 "i""
 *   insn=0x0000000000295324 string=0x0000000000589110 "chargeAnimation"
 *   insn=0x0000000000295330 string=0x0000000000295334 "!F"
 *   insn=0x0000000000295348 string=0x000000000029534C "e"
 *   insn=0x0000000000295358 string=0x000000000029535C "a"
 *   insn=0x000000000029535C string=0x00000000002953E8 "i""
 *   insn=0x0000000000295360 string=0x0000000000589120 "runAnimation"
 *   insn=0x0000000000295384 string=0x0000000000295388 "V"
 *   insn=0x0000000000295398 string=0x000000000029539C ""
 *   insn=0x0000000000295398 string=0x000000000029540C "i""
 *   insn=0x00000000002953A4 string=0x00000000002953A8 "A"
 *   insn=0x00000000002953C4 string=0x00000000002953C8 ")=G"
 *   insn=0x00000000002953C8 string=0x00000000002953CC "!"
 *   insn=0x00000000002953CC string=0x00000000002953D0 "\t"
 *   insn=0x00000000002953D0 string=0x00000000002953D4 "\t"
 *   insn=0x00000000002953D0 string=0x0000000000295430 "\t"
 *   insn=0x00000000002953D4 string=0x00000000002953D8 "*"
 *   insn=0x00000000002953D8 string=0x00000000002953DC "\n"
 *   insn=0x00000000002953E4 string=0x000000000029543C "?"
 *   insn=0x00000000002953E8 string=0x00000000002953EC ")=G"
 *   insn=0x00000000002953EC string=0x00000000002953F0 "!"
 *   insn=0x00000000002953F4 string=0x00000000002953F8 "\t"
 *   insn=0x00000000002953F4 string=0x0000000000295450 "\t"
 *   insn=0x00000000002953F8 string=0x00000000002953FC "*"
 *   insn=0x00000000002953FC string=0x0000000000295400 "\n"
 *   insn=0x0000000000295408 string=0x000000000029545C "?"
 *   insn=0x000000000029540C string=0x0000000000295410 ")=G"
 *   insn=0x0000000000295410 string=0x0000000000295414 "!"
 *   insn=0x0000000000295418 string=0x000000000029541C "\t"
 *   insn=0x0000000000295418 string=0x0000000000295470 "\t"
 *   insn=0x000000000029541C string=0x0000000000295420 "*"
 *   insn=0x0000000000295420 string=0x0000000000295424 "\n"
 *   insn=0x000000000029542C string=0x000000000029547C "?"
 *   insn=0x0000000000295430 string=0x0000000000295434 "*"
 *   insn=0x0000000000295434 string=0x0000000000295438 "\n"
 *   insn=0x000000000029543C string=0x0000000000295440 ","
 *   insn=0x0000000000295450 string=0x0000000000295454 "*"
 *   insn=0x0000000000295454 string=0x0000000000295458 "\n"
 *   insn=0x0000000000295470 string=0x0000000000295474 "*"
 *   insn=0x0000000000295474 string=0x0000000000295478 "\n"
 *   insn=0x0000000000295490 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000295498 string=0x000000000029549C "(a"
 *   insn=0x00000000002954A0 string=0x00000000002954A4 "`"
 *   insn=0x00000000002954A4 string=0x00000000002954A8 "j""
 *   insn=0x00000000002954A4 string=0x0000000000295590 "`"
 *   insn=0x00000000002954A8 string=0x00000000002954AC "J=G"
 *   insn=0x00000000002954AC string=0x00000000002954B0 ")!"
 *   insn=0x00000000002954B0 string=0x00000000002954B4 "\n"
 *   insn=0x00000000002954B4 string=0x00000000002954B8 "*"
 *   insn=0x00000000002954B4 string=0x0000000000295574 "*"
 *   insn=0x00000000002954B8 string=0x00000000002954BC "K"
 *   insn=0x00000000002954BC string=0x00000000002954C0 "+"
 *   insn=0x00000000002954C4 string=0x00000000002954C8 "#"
 *   insn=0x00000000002954C8 string=0x0000000000295554 "_"
 *   insn=0x00000000002954D4 string=0x00000000002954D8 "(a"
 *   insn=0x00000000002954E0 string=0x00000000002954E4 "j""
 *   insn=0x00000000002954E4 string=0x00000000002954E8 "J=G"
 *   insn=0x00000000002954E8 string=0x00000000002954EC ")!"
 *   insn=0x00000000002954EC string=0x00000000002954F0 "*"
 *   insn=0x00000000002954F0 string=0x00000000002954F4 "*"
 *   insn=0x00000000002954F4 string=0x00000000002954F8 "K"
 *   insn=0x00000000002954F8 string=0x00000000002954FC "+"
 *   insn=0x0000000000295508 string=0x000000000029550C "`"
 *   insn=0x000000000029550C string=0x0000000000295510 "@"
 *   insn=0x0000000000295510 string=0x0000000000295514 "("
 *   insn=0x0000000000295510 string=0x0000000000295598 "@"
 *   insn=0x0000000000295514 string=0x00000000002955B4 "`"
 *   insn=0x000000000029551C string=0x0000000000295520 "J"
 *   insn=0x0000000000295524 string=0x0000000000295528 "(a"
 *   insn=0x0000000000295530 string=0x0000000000295534 "j""
 *   insn=0x0000000000295534 string=0x0000000000295538 "J=G"
 *   insn=0x0000000000295538 string=0x000000000029553C ")!"
 *   insn=0x0000000000295540 string=0x0000000000295544 "*"
 *   insn=0x0000000000295544 string=0x0000000000295548 "K"
 *   insn=0x0000000000295548 string=0x000000000029554C "+"
 *   insn=0x0000000000295564 string=0x0000000000295568 "`"
 *   insn=0x0000000000295568 string=0x000000000029556C "`"
 *   insn=0x0000000000295574 string=0x0000000000295578 "K"
 *   insn=0x0000000000295578 string=0x000000000029557C "+"
 *   insn=0x000000000029557C string=0x0000000000295580 "_"
 *   insn=0x0000000000295598 string=0x000000000029559C ""
 *   insn=0x000000000029559C string=0x00000000002955A0 ""
 *   insn=0x00000000002955A4 string=0x00000000002955A8 ""
 *   insn=0x00000000002955A8 string=0x00000000002955AC ""
 *   insn=0x00000000002955B8 string=0x00000000002955BC "@"
 *   insn=0x00000000002955B8 string=0x00000000002955D8 "`"
 *   insn=0x00000000002955BC string=0x00000000002955C0 ""
 *   insn=0x00000000002955C0 string=0x00000000002955C4 ""
 *   insn=0x00000000002955C8 string=0x00000000002955CC ""
 *   insn=0x00000000002955CC string=0x00000000002955D0 ""
 *   insn=0x00000000002955DC string=0x00000000002955E0 "@"
 *   insn=0x00000000002955E0 string=0x00000000002955E4 ""
 *   insn=0x00000000002955E4 string=0x00000000002955E8 ""
 *   insn=0x00000000002955EC string=0x00000000002955F0 ""
 *   insn=0x00000000002955F0 string=0x00000000002955F4 ""
 *   insn=0x00000000002955FC string=0x0000000000295600 "hB"
 *   insn=0x000000000029560C string=0x0000000000295610 "@"
 *   insn=0x000000000029560C string=0x000000000029562C "`~@"
 *   insn=0x0000000000295610 string=0x0000000000295614 ""
 *   insn=0x0000000000295614 string=0x0000000000295618 ""
 *   insn=0x000000000029561C string=0x0000000000295620 ""
 *   insn=0x0000000000295620 string=0x0000000000295624 ""
 *   insn=0x000000000029562C string=0x0000000000295630 "vv"
 *   insn=0x0000000000295634 string=0x0000000000295638 "@"
 *   insn=0x0000000000295634 string=0x0000000000295654 "`r@"
 *   insn=0x0000000000295638 string=0x000000000029563C ""
 *   insn=0x000000000029563C string=0x0000000000295640 ""
 *   insn=0x0000000000295644 string=0x0000000000295648 ""
 *   insn=0x0000000000295648 string=0x000000000029564C ""
 *   insn=0x0000000000295658 string=0x000000000029565C "hj"
 *   insn=0x0000000000295660 string=0x0000000000295664 "@"
 *   insn=0x0000000000295664 string=0x0000000000295668 ""
 *   insn=0x0000000000295668 string=0x000000000029566C ""
 *   insn=0x0000000000295670 string=0x0000000000295674 ""
 *   insn=0x0000000000295674 string=0x0000000000295678 ""
 *   insn=0x000000000029568C string=0x0000000000295690 "/"
 *   insn=0x00000000002956A4 string=0x00000000002956A8 "^z"
 *   insn=0x00000000002956A8 string=0x00000000001F4020 "P'"
 *   insn=0x00000000002956AC string=0x00000000002956B0 "i"
 *   insn=0x00000000002956B0 string=0x00000000002956B4 "?"
 *   insn=0x00000000002956B8 string=0x00000000002956BC "`r@"
 *   insn=0x00000000002956BC string=0x00000000002956C0 "h"
 *   insn=0x00000000002956C8 string=0x00000000002956CC "@"
 *   insn=0x00000000002956CC string=0x00000000002956D0 ""
 *   insn=0x00000000002956D0 string=0x00000000002956D4 ""
 *   insn=0x00000000002956D8 string=0x00000000002956DC ""
 *   insn=0x00000000002956DC string=0x00000000002956E0 ""
 *   insn=0x00000000002956E8 string=0x00000000002956EC "i"
 *   insn=0x00000000002956EC string=0x00000000002956F0 "?"
 *   insn=0x00000000002956F4 string=0x00000000002956F8 "`~@"
 *   insn=0x00000000002956F8 string=0x00000000002956FC "h"
 *   insn=0x0000000000295704 string=0x0000000000295708 "@"
 *   insn=0x0000000000295708 string=0x000000000029570C ""
 *   insn=0x000000000029570C string=0x0000000000295710 ""
 *   insn=0x0000000000295714 string=0x0000000000295718 ""
 *   insn=0x0000000000295718 string=0x000000000029571C ""
 *   insn=0x0000000000295724 string=0x0000000000295728 "i\nA"
 *   insn=0x0000000000295728 string=0x000000000029572C "?"
 *   insn=0x0000000000295730 string=0x0000000000295734 "`"
 *   insn=0x0000000000295734 string=0x0000000000295738 "h\n"
 *   insn=0x0000000000295740 string=0x0000000000295744 "@"
 *   insn=0x0000000000295744 string=0x0000000000295748 ""
 *   insn=0x0000000000295748 string=0x000000000029574C ""
 *   insn=0x0000000000295750 string=0x0000000000295754 ""
 *   insn=0x0000000000295754 string=0x0000000000295758 ""
 *   insn=0x0000000000295760 string=0x0000000000295764 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(
        Caver::ChargingMonsterControllerComponent *this)
{
  __int128 v2; // q0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  unsigned int *v6; // x8
  int v7; // w9
  unsigned int *v8; // x8
  int v9; // w9
  unsigned int *v10; // x8
  int v11; // w9
  _QWORD v12[3]; // [xsp+28h] [xbp-48h] BYREF

  v12[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::MonsterControllerComponent::MonsterControllerComponent(this);
  *(_QWORD *)&v2 = &off_6C1AA8;
  *((_QWORD *)&v2 + 1) = &off_6C1AE8;
  *((_OWORD *)this + 1) = v2;
  *(_QWORD *)this = off_6C1990;
  *((_QWORD *)this + 26) = &off_6BDF68;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 28) = 0;
  *((_QWORD *)this + 29) = &off_6BDF68;
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 32) = &off_6BDF68;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_QWORD *)this + 35) = 0;
  *((_QWORD *)this + 36) = 0;
  *((_QWORD *)this + 34) = 0;
  *((_WORD *)this + 152) = 0;
  *((_QWORD *)this + 37) = 0x4396000043660000LL;
  *(_QWORD *)((char *)this + 324) = 0;
  *(_QWORD *)((char *)this + 316) = 0;
  *(_QWORD *)((char *)this + 308) = 0;
  *((_DWORD *)this + 83) = 2139095039;
  *((_DWORD *)this + 84) = 2139095039;
  *((_BYTE *)this + 340) = 0;
  sub_566BB8((int)v12, "walkAnimation");
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
  sub_566BB8((int)v12, "chargeAnimation");
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
  sub_566BB8((int)v12, "runAnimation");
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

