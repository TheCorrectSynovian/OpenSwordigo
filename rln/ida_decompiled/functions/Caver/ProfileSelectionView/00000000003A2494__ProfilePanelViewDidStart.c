/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A2494
 * Mangled: _ZN5Caver20ProfileSelectionView24ProfilePanelViewDidStartEPNS_16ProfilePanelViewE
 * Demangled: Caver::ProfileSelectionView::ProfilePanelViewDidStart(Caver::ProfilePanelView *)
 *
 * Callers: 1
 *   0x00000000001FB560  Caver::ProfileSelectionView::ProfilePanelViewDidStart(Caver::ProfilePanelView *)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB560  Caver::ProfileSelectionView::ProfilePanelViewDidStart(Caver::ProfilePanelView *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x00000000003A24A0 string=0x00000000003A24A4 "T"
 *   insn=0x00000000003A24B8 string=0x00000000003A24BC "\t"
 *   insn=0x00000000003A24BC string=0x00000000003A24C0 "*"
 *   insn=0x00000000003A24C0 string=0x00000000003A24C4 ")"
 *   insn=0x00000000003A24C8 string=0x00000000003A24CC "*"
 *   insn=0x00000000003A24D4 string=0x00000000003A24D8 "K"
 *   insn=0x00000000003A24D8 string=0x00000000003A24DC "k"
 *   insn=0x00000000003A24DC string=0x00000000003A24E0 "K"
 *   insn=0x00000000003A24E8 string=0x00000000003A24EC " "
 *   insn=0x00000000003A24F0 string=0x00000000003A24F4 "3"
 *   insn=0x00000000003A24F4 string=0x00000000003A24F8 "h"
 *   insn=0x00000000003A24F8 string=0x00000000003A24FC ""
 *   insn=0x00000000003A24FC string=0x00000000003A2500 "h"
 *   insn=0x00000000003A2504 string=0x00000000003A2508 "h"
 *   insn=0x00000000003A250C string=0x00000000003A2510 "\t@"
 *   insn=0x00000000003A2514 string=0x00000000003A2518 "h\n@"
 *   insn=0x00000000003A2518 string=0x00000000003A251C ""
 *   insn=0x00000000003A251C string=0x00000000003A2520 "h\n"
 *   insn=0x00000000003A2524 string=0x00000000003A2528 "h"
 *   insn=0x00000000003A252C string=0x00000000003A2530 "@"
 *   insn=0x00000000003A2544 string=0x00000000003A2558 "^O"
 *   insn=0x00000000003A2558 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003A2560 string=0x00000000003A2564 "4"
 *   insn=0x00000000003A2568 string=0x00000000003A256C ""
 *   insn=0x00000000003A2578 string=0x00000000003A257C "\t@"
 *   insn=0x00000000003A2588 string=0x00000000003A258C ""
 *   insn=0x00000000003A2598 string=0x00000000003A259C "@"
 *   insn=0x00000000003A25AC string=0x00000000003A25B0 "g"
 *   insn=0x00000000003A25B8 string=0x00000000001FB560 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (***__fastcall Caver::ProfileSelectionView::ProfilePanelViewDidStart(
        Caver::ProfileSelectionView *this,
        Caver::ProfilePanelView *a2))(void)
{
  __int64 (***result)(void); // x0
  __int64 (*v3)(void); // x9
  _QWORD *v4; // x10
  __int64 v5; // x8
  __int64 v6; // x8
  _QWORD *v7; // [xsp+10h] [xbp-20h]

  _ReadStatusReg(TPIDR_EL0);
  result = (__int64 (***)(void))*((_QWORD *)this + 31);
  if ( result )
  {
    v3 = **result;
    v4 = (_QWORD *)*((_QWORD *)a2 + 46);
    v7 = v4;
    if ( v4 )
      ++v4[1];
    result = (__int64 (***)(void))v3();
    if ( v7 )
    {
      v5 = v7[1] - 1LL;
      v7[1] = v5;
      if ( !v5 )
      {
        result = (__int64 (***)(void))(*(__int64 (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
        v6 = v7[2] - 1LL;
        v7[2] = v6;
        if ( !v6 )
          return (__int64 (***)(void))(*(__int64 (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
      }
    }
  }
  return result;
}

