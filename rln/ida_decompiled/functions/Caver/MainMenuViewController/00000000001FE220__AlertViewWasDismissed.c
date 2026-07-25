/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE220
 * Mangled: ._ZN5Caver22MainMenuViewController21AlertViewWasDismissedEPNS_12GUIAlertViewE
 * Demangled: Caver::MainMenuViewController::AlertViewWasDismissed(Caver::GUIAlertView *)
 *
 * Callers: 1
 *   0x000000000036E8E4  `non-virtual thunk to'Caver::MainMenuViewController::AlertViewWasDismissed(Caver::GUIAlertView *)
 *
 * Callees: 1
 *   0x000000000036E838  Caver::MainMenuViewController::AlertViewWasDismissed(Caver::GUIAlertView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE228 string=0x00000000001FE22C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MainMenuViewController::AlertViewWasDismissed(
        Caver::MainMenuViewController *this,
        Caver::GUIAlertView *a2)
{
  return _ZN5Caver22MainMenuViewController21AlertViewWasDismissedEPNS_12GUIAlertViewE(this, a2);
}

