/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F94A0
 * Mangled: ._ZN5Caver16ProfilePanelView29AlertViewClickedButtonAtIndexEPNS_12GUIAlertViewEi
 * Demangled: Caver::ProfilePanelView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *
 * Callers: 1
 *   0x00000000003A06B8  `non-virtual thunk to'Caver::ProfilePanelView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *
 * Callees: 1
 *   0x00000000003A05B8  Caver::ProfilePanelView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F94A8 string=0x00000000001F94AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProfilePanelView::AlertViewClickedButtonAtIndex(
        Caver::ProfilePanelView *this,
        Caver::GUIAlertView *a2,
        int a3)
{
  return _ZN5Caver16ProfilePanelView29AlertViewClickedButtonAtIndexEPNS_12GUIAlertViewEi(this, a2, a3);
}

