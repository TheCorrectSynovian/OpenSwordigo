/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A0770
 * Mangled: _ZThn272_N5Caver16ProfilePanelView21AlertViewWasDismissedEPNS_12GUIAlertViewE
 * Demangled: `non-virtual thunk to'Caver::ProfilePanelView::AlertViewWasDismissed(Caver::GUIAlertView *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4130  Caver::ProfilePanelView::AlertViewWasDismissed(Caver::GUIAlertView *)
 *
 * Referenced strings: 2
 *   insn=0x00000000003A0770 string=0x00000000003A0774 "oN"
 *   insn=0x00000000003A0774 string=0x00000000001F4130 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ProfilePanelView::AlertViewWasDismissed(
        Caver::ProfilePanelView *this,
        Caver::GUIAlertView *a2)
{
  return Caver::ProfilePanelView::AlertViewWasDismissed((Caver::ProfilePanelView *)((char *)this - 272), a2);
}

