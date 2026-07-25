/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036F898
 * Mangled: _ZThn80_N5Caver22MainMenuViewController26MainMenuViewDidGoToCreditsEPNS_12MainMenuViewE
 * Demangled: `non-virtual thunk to'Caver::MainMenuViewController::MainMenuViewDidGoToCredits(Caver::MainMenuView *)
 *
 * Callers: 1
 *   0x000000000036F67C  Caver::MainMenuViewController::MainMenuViewDidGoToCredits(Caver::MainMenuView *)
 *
 * Callees: 1
 *   0x00000000001F9070  Caver::MainMenuViewController::MainMenuViewDidGoToCredits(Caver::MainMenuView *)
 *
 * Referenced strings: 1
 *   insn=0x000000000036F89C string=0x00000000001F9070 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MainMenuViewController::MainMenuViewDidGoToCredits(
        Caver::MainMenuViewController *this,
        Caver::MainMenuView *a2)
{
  return Caver::MainMenuViewController::MainMenuViewDidGoToCredits(
           (Caver::MainMenuViewController *)((char *)this - 80),
           a2);
}

