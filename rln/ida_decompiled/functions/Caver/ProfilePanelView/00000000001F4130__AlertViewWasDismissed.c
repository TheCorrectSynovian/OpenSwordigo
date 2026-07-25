/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4130
 * Mangled: ._ZN5Caver16ProfilePanelView21AlertViewWasDismissedEPNS_12GUIAlertViewE
 * Demangled: Caver::ProfilePanelView::AlertViewWasDismissed(Caver::GUIAlertView *)
 *
 * Callers: 1
 *   0x00000000003A0770  `non-virtual thunk to'Caver::ProfilePanelView::AlertViewWasDismissed(Caver::GUIAlertView *)
 *
 * Callees: 1
 *   0x00000000003A06D4  Caver::ProfilePanelView::AlertViewWasDismissed(Caver::GUIAlertView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4138 string=0x00000000001F413C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProfilePanelView::AlertViewWasDismissed(
        Caver::ProfilePanelView *this,
        Caver::GUIAlertView *a2)
{
  return _ZN5Caver16ProfilePanelView21AlertViewWasDismissedEPNS_12GUIAlertViewE(this, a2);
}

