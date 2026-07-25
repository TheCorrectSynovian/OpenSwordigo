/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B2344
 * Mangled: _ZN5Caver23DoorControllerComponentC2Ev
 * Demangled: Caver::DoorControllerComponent::DoorControllerComponent(void)
 *
 * Callers: 2
 *   0x00000000001FC300  Caver::DoorControllerComponent::DoorControllerComponent(void)
 *   0x00000000001FFC80  Caver::DoorControllerComponent::DoorControllerComponent(void)
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
 * Referenced strings: 147
 *   insn=0x00000000002B2368 string=0x00000000002B236C "["
 *   insn=0x00000000002B2370 string=0x00000000002B2374 ")AF"
 *   insn=0x00000000002B2380 string=0x00000000002B2384 "9"
 *   insn=0x00000000002B2384 string=0x00000000002B2388 "k"
 *   insn=0x00000000002B238C string=0x00000000002B2390 "*"
 *   insn=0x00000000002B2390 string=0x00000000002B2394 "Z+E"
 *   insn=0x00000000002B2398 string=0x00000000002B239C "@"
 *   insn=0x00000000002B239C string=0x00000000002B23A0 "*"
 *   insn=0x00000000002B23A4 string=0x00000000002B23A8 "@"
 *   insn=0x00000000002B23AC string=0x00000000002B23B0 ")A"
 *   insn=0x00000000002B23B8 string=0x00000000002B23BC "j"
 *   insn=0x00000000002B23CC string=0x00000000002B23D0 "i"
 *   insn=0x00000000002B23D0 string=0x00000000002B23D4 "\tC"
 *   insn=0x00000000002B23DC string=0x00000000002B23E0 "h"
 *   insn=0x00000000002B23E0 string=0x00000000002B23E4 "(C"
 *   insn=0x00000000002B23EC string=0x00000000002B23F0 "`"
 *   insn=0x00000000002B23F4 string=0x00000000002B23F8 "IC"
 *   insn=0x00000000002B2434 string=0x000000000058801C "animationController"
 *   insn=0x00000000002B2458 string=0x00000000002B245C "!"
 *   insn=0x00000000002B245C string=0x00000000001F6CE0 "0'"
 *   insn=0x00000000002B2468 string=0x00000000002B246C "A"
 *   insn=0x00000000002B2470 string=0x0000000000588ED0 "animation"
 *   insn=0x00000000002B24AC string=0x0000000000589B72 "closeSound"
 *   insn=0x00000000002B24E8 string=0x0000000000589B7D "openSound"
 *   insn=0x00000000002B2520 string=0x00000000002B2524 "h"
 *   insn=0x00000000002B2530 string=0x00000000002B2664 ""
 *   insn=0x00000000002B2554 string=0x00000000002B2558 ")=G"
 *   insn=0x00000000002B2558 string=0x00000000002B255C "!"
 *   insn=0x00000000002B255C string=0x00000000002B2560 ")"
 *   insn=0x00000000002B2560 string=0x00000000002B2564 "\t"
 *   insn=0x00000000002B2560 string=0x00000000002B25E4 "\t"
 *   insn=0x00000000002B2564 string=0x00000000002B2568 "*"
 *   insn=0x00000000002B2568 string=0x00000000002B256C "\n"
 *   insn=0x00000000002B2574 string=0x00000000002B25F0 "?"
 *   insn=0x00000000002B2578 string=0x00000000002B257C ")=G"
 *   insn=0x00000000002B257C string=0x00000000002B2580 "!"
 *   insn=0x00000000002B2580 string=0x00000000002B2584 "\t"
 *   insn=0x00000000002B2584 string=0x00000000002B2588 "\t"
 *   insn=0x00000000002B2584 string=0x00000000002B2604 "\t"
 *   insn=0x00000000002B2588 string=0x00000000002B258C "*"
 *   insn=0x00000000002B258C string=0x00000000002B2590 "\n"
 *   insn=0x00000000002B2598 string=0x00000000002B2610 "?"
 *   insn=0x00000000002B259C string=0x00000000002B25A0 ")=G"
 *   insn=0x00000000002B25A0 string=0x00000000002B25A4 "!"
 *   insn=0x00000000002B25A8 string=0x00000000002B25AC "\t"
 *   insn=0x00000000002B25A8 string=0x00000000002B2624 "\t"
 *   insn=0x00000000002B25AC string=0x00000000002B25B0 "*"
 *   insn=0x00000000002B25B0 string=0x00000000002B25B4 "\n"
 *   insn=0x00000000002B25BC string=0x00000000002B2630 "?"
 *   insn=0x00000000002B25C0 string=0x00000000002B25C4 ")=G"
 *   insn=0x00000000002B25C4 string=0x00000000002B25C8 "!"
 *   insn=0x00000000002B25CC string=0x00000000002B25D0 "\t"
 *   insn=0x00000000002B25CC string=0x00000000002B2644 "\t"
 *   insn=0x00000000002B25D0 string=0x00000000002B25D4 "*"
 *   insn=0x00000000002B25D4 string=0x00000000002B25D8 "\n"
 *   insn=0x00000000002B25E0 string=0x00000000002B2650 "?"
 *   insn=0x00000000002B25E4 string=0x00000000002B25E8 "*"
 *   insn=0x00000000002B25E8 string=0x00000000002B25EC "\n"
 *   insn=0x00000000002B25F8 string=0x00000000002B25FC "j"
 *   insn=0x00000000002B2604 string=0x00000000002B2608 "*"
 *   insn=0x00000000002B2608 string=0x00000000002B260C "\n"
 *   insn=0x00000000002B2618 string=0x00000000002B261C "b"
 *   insn=0x00000000002B2624 string=0x00000000002B2628 "*"
 *   insn=0x00000000002B2628 string=0x00000000002B262C "\n"
 *   insn=0x00000000002B2638 string=0x00000000002B263C "Z"
 *   insn=0x00000000002B2644 string=0x00000000002B2648 "*"
 *   insn=0x00000000002B2648 string=0x00000000002B264C "\n"
 *   insn=0x00000000002B2658 string=0x00000000002B265C "R"
 *   insn=0x00000000002B2664 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B266C string=0x00000000002B2670 "(a"
 *   insn=0x00000000002B2674 string=0x00000000002B2678 "`"
 *   insn=0x00000000002B2678 string=0x00000000002B2784 "`f@"
 *   insn=0x00000000002B267C string=0x00000000002B2680 "J=G"
 *   insn=0x00000000002B2680 string=0x00000000002B2684 ")!"
 *   insn=0x00000000002B2684 string=0x00000000002B2688 "\n"
 *   insn=0x00000000002B2688 string=0x00000000002B268C "*"
 *   insn=0x00000000002B2688 string=0x00000000002B2768 "*"
 *   insn=0x00000000002B268C string=0x00000000002B2690 "K"
 *   insn=0x00000000002B2690 string=0x00000000002B2694 "+"
 *   insn=0x00000000002B2698 string=0x00000000002B269C "-"
 *   insn=0x00000000002B269C string=0x00000000002B2750 "_"
 *   insn=0x00000000002B26A8 string=0x00000000002B26AC "(a"
 *   insn=0x00000000002B26B8 string=0x00000000002B26BC "J=G"
 *   insn=0x00000000002B26BC string=0x00000000002B26C0 ")!"
 *   insn=0x00000000002B26C0 string=0x00000000002B26C4 "*"
 *   insn=0x00000000002B26C4 string=0x00000000002B26C8 "*"
 *   insn=0x00000000002B26C8 string=0x00000000002B26CC "K"
 *   insn=0x00000000002B26CC string=0x00000000002B26D0 "+"
 *   insn=0x00000000002B26E4 string=0x00000000002B26E8 "(a"
 *   insn=0x00000000002B26F4 string=0x00000000002B26F8 "J=G"
 *   insn=0x00000000002B26F8 string=0x00000000002B26FC ")!"
 *   insn=0x00000000002B26FC string=0x00000000002B2700 "J"
 *   insn=0x00000000002B2700 string=0x00000000002B2704 "*"
 *   insn=0x00000000002B2704 string=0x00000000002B2708 "K"
 *   insn=0x00000000002B2708 string=0x00000000002B270C "+"
 *   insn=0x00000000002B2720 string=0x00000000002B2724 "(a"
 *   insn=0x00000000002B2730 string=0x00000000002B2734 "J=G"
 *   insn=0x00000000002B2734 string=0x00000000002B2738 ")!"
 *   insn=0x00000000002B2738 string=0x00000000002B273C "j"
 *   insn=0x00000000002B273C string=0x00000000002B2740 "*"
 *   insn=0x00000000002B2740 string=0x00000000002B2744 "K"
 *   insn=0x00000000002B2744 string=0x00000000002B2748 "+"
 *   insn=0x00000000002B2760 string=0x00000000002B2764 ""
 *   insn=0x00000000002B2768 string=0x00000000002B276C "K"
 *   insn=0x00000000002B276C string=0x00000000002B2770 "+"
 *   insn=0x00000000002B2770 string=0x00000000002B2774 "_"
 *   insn=0x00000000002B2774 string=0x00000000002B2778 ""
 *   insn=0x00000000002B2784 string=0x00000000002B2788 "UC"
 *   insn=0x00000000002B2788 string=0x00000000002B278C "u^"
 *   insn=0x00000000002B2790 string=0x00000000002B2794 "@"
 *   insn=0x00000000002B2790 string=0x00000000002B27B0 "`Z@"
 *   insn=0x00000000002B2794 string=0x00000000002B2798 ""
 *   insn=0x00000000002B2798 string=0x00000000002B279C ""
 *   insn=0x00000000002B27A0 string=0x00000000002B27A4 ""
 *   insn=0x00000000002B27A4 string=0x00000000002B27A8 ""
 *   insn=0x00000000002B27B0 string=0x00000000002B27B4 "uR"
 *   insn=0x00000000002B27B8 string=0x00000000002B27BC "@"
 *   insn=0x00000000002B27B8 string=0x00000000002B27D8 "`N@"
 *   insn=0x00000000002B27BC string=0x00000000002B27C0 ""
 *   insn=0x00000000002B27C0 string=0x00000000002B27C4 ""
 *   insn=0x00000000002B27C8 string=0x00000000002B27CC ""
 *   insn=0x00000000002B27CC string=0x00000000002B27D0 ""
 *   insn=0x00000000002B27D8 string=0x00000000002B27DC "(C"
 *   insn=0x00000000002B27DC string=0x00000000002B27E0 "hF"
 *   insn=0x00000000002B27E4 string=0x00000000002B27E8 "@"
 *   insn=0x00000000002B27E4 string=0x00000000002B2804 "`B@"
 *   insn=0x00000000002B27E8 string=0x00000000002B27EC ""
 *   insn=0x00000000002B27EC string=0x00000000002B27F0 ""
 *   insn=0x00000000002B27F4 string=0x00000000002B27F8 ""
 *   insn=0x00000000002B27F8 string=0x00000000002B27FC ""
 *   insn=0x00000000002B2804 string=0x00000000002B2808 "C"
 *   insn=0x00000000002B2808 string=0x00000000002B280C "h:"
 *   insn=0x00000000002B2810 string=0x00000000002B2814 "@"
 *   insn=0x00000000002B2814 string=0x00000000002B2818 ""
 *   insn=0x00000000002B2818 string=0x00000000002B281C ""
 *   insn=0x00000000002B2820 string=0x00000000002B2824 ""
 *   insn=0x00000000002B2824 string=0x00000000002B2828 ""
 *   insn=0x00000000002B2830 string=0x00000000002B2834 "'"
 *   insn=0x00000000002B2834 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002B2838 string=0x00000000002B283C ""<"
 *   insn=0x00000000002B2850 string=0x00000000002B2854 "h"@"
 *   insn=0x00000000002B2858 string=0x00000000002B285C "a"
 *   insn=0x00000000002B2868 string=0x00000000002B286C "hz@"
 *   insn=0x00000000002B2870 string=0x00000000002B2874 "h"
 *   insn=0x00000000002B2878 string=0x00000000002B287C "h"
 *   insn=0x00000000002B2880 string=0x00000000002B2884 "h"
 *   insn=0x00000000002B2888 string=0x00000000002B288C "hBC9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::DoorControllerComponent::DoorControllerComponent(Caver::DoorControllerComponent *this)
{
  __int128 v1; // q0
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
  _QWORD v14[3]; // [xsp+28h] [xbp-68h] BYREF

  *(_QWORD *)&v1 = &off_6C4388;
  *((_QWORD *)&v1 + 1) = &off_6C43C8;
  v14[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 9) = 0;
  *(_QWORD *)this = off_6C4270;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_OWORD *)this + 1) = v1;
  *((_QWORD *)this + 14) = off_6BEE48;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = &off_6BDF68;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 23) = off_6BE248;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 20) = off_6BE248;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = 0;
  *((_BYTE *)this + 208) = 0;
  *((_DWORD *)this + 53) = 0;
  sub_566BB8((int)v14, "animationController");
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
  sub_566BB8((int)v14, "animation");
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
  sub_566BB8((int)v14, "closeSound");
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
  sub_566BB8((int)v14, "openSound");
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

