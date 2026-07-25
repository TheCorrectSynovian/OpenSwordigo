/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9070
 * Mangled: ._ZN5Caver22MainMenuViewController26MainMenuViewDidGoToCreditsEPNS_12MainMenuViewE
 * Demangled: Caver::MainMenuViewController::MainMenuViewDidGoToCredits(Caver::MainMenuView *)
 *
 * Callers: 1
 *   0x000000000036F898  `non-virtual thunk to'Caver::MainMenuViewController::MainMenuViewDidGoToCredits(Caver::MainMenuView *)
 *
 * Callees: 1
 *   0x000000000036F67C  Caver::MainMenuViewController::MainMenuViewDidGoToCredits(Caver::MainMenuView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9078 string=0x00000000001F907C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MainMenuViewController::MainMenuViewDidGoToCredits(
        Caver::MainMenuViewController *this,
        Caver::MainMenuView *a2)
{
  return _ZN5Caver22MainMenuViewController26MainMenuViewDidGoToCreditsEPNS_12MainMenuViewE(this, a2);
}

