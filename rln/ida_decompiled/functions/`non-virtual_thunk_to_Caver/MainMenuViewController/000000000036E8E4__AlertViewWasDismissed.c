/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036E8E4
 * Mangled: _ZThn72_N5Caver22MainMenuViewController21AlertViewWasDismissedEPNS_12GUIAlertViewE
 * Demangled: `non-virtual thunk to'Caver::MainMenuViewController::AlertViewWasDismissed(Caver::GUIAlertView *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE220  Caver::MainMenuViewController::AlertViewWasDismissed(Caver::GUIAlertView *)
 *
 * Referenced strings: 1
 *   insn=0x000000000036E8E4 string=0x000000000036E8E8 "N>"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MainMenuViewController::AlertViewWasDismissed(
        Caver::MainMenuViewController *this,
        Caver::GUIAlertView *a2)
{
  return Caver::MainMenuViewController::AlertViewWasDismissed((Caver::MainMenuViewController *)((char *)this - 72), a2);
}

