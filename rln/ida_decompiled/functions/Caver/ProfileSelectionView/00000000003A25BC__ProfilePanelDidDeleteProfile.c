/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A25BC
 * Mangled: _ZN5Caver20ProfileSelectionView28ProfilePanelDidDeleteProfileEPNS_16ProfilePanelViewE
 * Demangled: Caver::ProfileSelectionView::ProfilePanelDidDeleteProfile(Caver::ProfilePanelView *)
 *
 * Callers: 1
 *   0x00000000001F8150  Caver::ProfileSelectionView::ProfilePanelDidDeleteProfile(Caver::ProfilePanelView *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8150  Caver::ProfileSelectionView::ProfilePanelDidDeleteProfile(Caver::ProfilePanelView *)
 *   0x00000000001F8690  Caver::ProfileSelectionView::LoadProfiles(void)
 *   0x00000000001FAE50  Caver::ProfileManager::sharedManager(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 61
 *   insn=0x00000000003A25D0 string=0x00000000003A25D4 "V"
 *   insn=0x00000000003A25E0 string=0x00000000003A25E4 "7"
 *   insn=0x00000000003A25E8 string=0x00000000003A25EC "h"
 *   insn=0x00000000003A25EC string=0x00000000003A25F0 ""
 *   insn=0x00000000003A25F0 string=0x00000000003A25F4 "h"
 *   insn=0x00000000003A25F8 string=0x00000000001FAE50 "0'"
 *   insn=0x00000000003A2620 string=0x00000000003A2624 "\t"
 *   insn=0x00000000003A2624 string=0x00000000003A2628 ")"
 *   insn=0x00000000003A2634 string=0x00000000003A26AC "\t"
 *   insn=0x00000000003A263C string=0x00000000003A2640 "3"
 *   insn=0x00000000003A263C string=0x00000000001F8690 "0'"
 *   insn=0x00000000003A2640 string=0x00000000003A2644 "h"
 *   insn=0x00000000003A2644 string=0x00000000003A2648 ""
 *   insn=0x00000000003A2648 string=0x00000000003A264C "h"
 *   insn=0x00000000003A2650 string=0x00000000003A2654 "h"
 *   insn=0x00000000003A2658 string=0x00000000003A265C "\t@"
 *   insn=0x00000000003A2660 string=0x00000000003A2664 "h\n@"
 *   insn=0x00000000003A2664 string=0x00000000003A2668 ""
 *   insn=0x00000000003A2668 string=0x00000000003A266C "h\n"
 *   insn=0x00000000003A2670 string=0x00000000003A2674 "h"
 *   insn=0x00000000003A2678 string=0x00000000003A267C "@"
 *   insn=0x00000000003A26AC string=0x00000000003A26B0 ")=G"
 *   insn=0x00000000003A26B0 string=0x00000000003A26B4 "!"
 *   insn=0x00000000003A26B8 string=0x00000000003A26BC "\t"
 *   insn=0x00000000003A26B8 string=0x00000000003A26D0 "\t"
 *   insn=0x00000000003A26BC string=0x00000000003A26C0 "*"
 *   insn=0x00000000003A26C0 string=0x00000000003A26C4 "\n"
 *   insn=0x00000000003A26CC string=0x00000000003A26DC "?"
 *   insn=0x00000000003A26D0 string=0x00000000003A26D4 "*"
 *   insn=0x00000000003A26D4 string=0x00000000003A26D8 "\n"
 *   insn=0x00000000003A26E4 string=0x00000000003A26E8 "/"
 *   insn=0x00000000003A26F0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003A26F4 string=0x00000000003A26F8 "\n"
 *   insn=0x00000000003A26F8 string=0x00000000003A26FC "J"
 *   insn=0x00000000003A2700 string=0x00000000003A2704 "(a"
 *   insn=0x00000000003A2708 string=0x00000000003A270C "@"
 *   insn=0x00000000003A270C string=0x00000000003A2710 "\n"
 *   insn=0x00000000003A270C string=0x00000000003A2774 "3"
 *   insn=0x00000000003A2710 string=0x00000000003A2714 "J=G"
 *   insn=0x00000000003A2714 string=0x00000000003A2718 ")!"
 *   insn=0x00000000003A271C string=0x00000000003A2720 "*"
 *   insn=0x00000000003A271C string=0x00000000003A274C "*"
 *   insn=0x00000000003A2720 string=0x00000000003A2724 "K"
 *   insn=0x00000000003A2724 string=0x00000000003A2728 "+"
 *   insn=0x00000000003A272C string=0x00000000003A2730 "_"
 *   insn=0x00000000003A2744 string=0x00000000003A2778 "h"
 *   insn=0x00000000003A274C string=0x00000000003A2750 "K"
 *   insn=0x00000000003A2750 string=0x00000000003A2754 "+"
 *   insn=0x00000000003A2754 string=0x00000000003A2758 "_"
 *   insn=0x00000000003A2778 string=0x00000000003A277C ""
 *   insn=0x00000000003A277C string=0x00000000003A2780 "h"
 *   insn=0x00000000003A2784 string=0x00000000003A2788 "h"
 *   insn=0x00000000003A2788 string=0x00000000003A278C "\t@"
 *   insn=0x00000000003A2794 string=0x00000000003A2798 "h\n@"
 *   insn=0x00000000003A2798 string=0x00000000003A279C ""
 *   insn=0x00000000003A279C string=0x00000000003A27A0 "h\n"
 *   insn=0x00000000003A27A4 string=0x00000000003A27A8 "h"
 *   insn=0x00000000003A27A8 string=0x00000000003A27AC "@"
 *   insn=0x00000000003A27B8 string=0x00000000003A27BC "B|"
 *   insn=0x00000000003A27C4 string=0x00000000003A27C8 "bV"
 *   insn=0x00000000003A27C8 string=0x00000000001F8150 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProfileSelectionView::ProfilePanelDidDeleteProfile(
        Caver::ProfileSelectionView *this,
        Caver::ProfilePanelView *a2)
{
  _QWORD *v3; // x19
  __int64 v4; // x23
  __int64 v5; // x21
  void (__fastcall *v6)(__int64, _QWORD *); // x24
  void *v7; // x0
  __int64 v8; // x8
  __int64 v9; // x8
  unsigned int *v10; // x8
  int v11; // w9
  _QWORD v12[3]; // [xsp+8h] [xbp-48h] BYREF

  v12[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *((_QWORD *)a2 + 45);
  v3 = (_QWORD *)*((_QWORD *)a2 + 46);
  if ( v3 )
    ++v3[1];
  v5 = Caver::ProfileManager::sharedManager(this);
  v6 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 32LL);
  sub_56A528(v12, v4 + 24);
  v6(v5, v12);
  v7 = (void *)(v12[0] - 24LL);
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
      operator delete(v7);
  }
  Caver::ProfileSelectionView::LoadProfiles(this);
  if ( v3 )
  {
    v8 = v3[1] - 1LL;
    v3[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v9 = v3[2] - 1LL;
      v3[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
}

