/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A06B8
 * Mangled: _ZThn272_N5Caver16ProfilePanelView29AlertViewClickedButtonAtIndexEPNS_12GUIAlertViewEi
 * Demangled: `non-virtual thunk to'Caver::ProfilePanelView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F94A0  Caver::ProfilePanelView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000003A06C0 string=0x00000000003A06C4 "wc"
 *   insn=0x00000000003A06C4 string=0x00000000001F94A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ProfilePanelView::AlertViewClickedButtonAtIndex(
        Caver::ProfilePanelView *this,
        Caver::GUIAlertView *a2,
        int a3)
{
  Caver::ProfilePanelView::AlertViewClickedButtonAtIndex((Caver::ProfilePanelView *)((char *)this - 272), a2, a3);
  return 1;
}

