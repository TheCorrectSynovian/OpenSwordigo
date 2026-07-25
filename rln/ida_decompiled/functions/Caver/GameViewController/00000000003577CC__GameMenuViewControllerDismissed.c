/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003577CC
 * Mangled: _ZN5Caver18GameViewController31GameMenuViewControllerDismissedEPNS_22GameMenuViewControllerE
 * Demangled: Caver::GameViewController::GameMenuViewControllerDismissed(Caver::GameMenuViewController *)
 *
 * Callers: 1
 *   0x00000000001F4650  Caver::GameViewController::GameMenuViewControllerDismissed(Caver::GameMenuViewController *)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9DE0  Caver::GameSceneView::SetCurrentMenuTab(std::string const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 34
 *   insn=0x00000000003577D8 string=0x00000000003577DC "T"
 *   insn=0x00000000003577E4 string=0x00000000003577E8 "T@"
 *   insn=0x00000000003577F4 string=0x00000000003577F8 "LK"
 *   insn=0x0000000000357800 string=0x0000000000357804 "w"
 *   insn=0x0000000000357804 string=0x00000000001F9DE0 "0'"
 *   insn=0x0000000000357808 string=0x000000000035780C "i"
 *   insn=0x000000000035780C string=0x0000000000357810 ")"
 *   insn=0x0000000000357818 string=0x000000000035781C "!"
 *   insn=0x000000000035781C string=0x0000000000357840 "i"
 *   insn=0x0000000000357840 string=0x0000000000357844 ")=G"
 *   insn=0x0000000000357844 string=0x0000000000357848 "!"
 *   insn=0x000000000035784C string=0x0000000000357850 "\t"
 *   insn=0x000000000035784C string=0x0000000000357864 "\t"
 *   insn=0x0000000000357850 string=0x0000000000357854 "*"
 *   insn=0x0000000000357854 string=0x0000000000357858 "\n"
 *   insn=0x0000000000357860 string=0x0000000000357870 "?"
 *   insn=0x0000000000357864 string=0x0000000000357868 "*"
 *   insn=0x0000000000357868 string=0x000000000035786C "\n"
 *   insn=0x0000000000357870 string=0x0000000000357874 "l"
 *   insn=0x0000000000357884 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000357888 string=0x000000000035788C "j"
 *   insn=0x000000000035788C string=0x0000000000357890 "J"
 *   insn=0x0000000000357894 string=0x0000000000357898 "(a"
 *   insn=0x00000000003578A0 string=0x00000000003578A4 "j"
 *   insn=0x00000000003578A4 string=0x00000000003578A8 "J=G"
 *   insn=0x00000000003578A8 string=0x00000000003578AC ")!"
 *   insn=0x00000000003578B0 string=0x00000000003578B4 "*"
 *   insn=0x00000000003578B0 string=0x00000000003578E0 "*"
 *   insn=0x00000000003578B4 string=0x00000000003578B8 "K"
 *   insn=0x00000000003578B8 string=0x00000000003578BC "+"
 *   insn=0x00000000003578C0 string=0x00000000003578C4 "_"
 *   insn=0x00000000003578E0 string=0x00000000003578E4 "K"
 *   insn=0x00000000003578E4 string=0x00000000003578E8 "+"
 *   insn=0x00000000003578E8 string=0x00000000003578EC "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameViewController::GameMenuViewControllerDismissed(
        Caver::GameViewController *this,
        Caver::GameMenuViewController *a2)
{
  void *v2; // x0
  unsigned int *v3; // x8
  int v4; // w9
  _QWORD v5[3]; // [xsp+8h] [xbp-28h] BYREF

  v5[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_56A528(v5, *((_QWORD *)this + 21) + 400LL);
  Caver::GameSceneView::SetCurrentMenuTab();
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

