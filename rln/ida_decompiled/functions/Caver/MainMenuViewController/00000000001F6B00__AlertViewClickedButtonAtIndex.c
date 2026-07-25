/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6B00
 * Mangled: ._ZN5Caver22MainMenuViewController29AlertViewClickedButtonAtIndexEPNS_12GUIAlertViewEi
 * Demangled: Caver::MainMenuViewController::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *
 * Callers: 1
 *   0x000000000036E830  `non-virtual thunk to'Caver::MainMenuViewController::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *
 * Callees: 1
 *   0x000000000036E764  Caver::MainMenuViewController::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6B08 string=0x00000000001F6B0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MainMenuViewController::AlertViewClickedButtonAtIndex(
        Caver::MainMenuViewController *this,
        Caver::GUIAlertView *a2,
        int a3)
{
  return _ZN5Caver22MainMenuViewController29AlertViewClickedButtonAtIndexEPNS_12GUIAlertViewEi(this, a2, a3);
}

