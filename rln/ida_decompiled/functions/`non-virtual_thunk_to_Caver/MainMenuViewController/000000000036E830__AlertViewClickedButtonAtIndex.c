/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036E830
 * Mangled: _ZThn72_N5Caver22MainMenuViewController29AlertViewClickedButtonAtIndexEPNS_12GUIAlertViewEi
 * Demangled: `non-virtual thunk to'Caver::MainMenuViewController::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6B00  Caver::MainMenuViewController::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *
 * Referenced strings: 1
 *   insn=0x000000000036E834 string=0x00000000001F6B00 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MainMenuViewController::AlertViewClickedButtonAtIndex(
        Caver::MainMenuViewController *this,
        Caver::GUIAlertView *a2,
        int a3)
{
  return Caver::MainMenuViewController::AlertViewClickedButtonAtIndex(
           (Caver::MainMenuViewController *)((char *)this - 72),
           a2,
           a3);
}

