/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8F50
 * Mangled: ._ZN5Caver18GameViewController35GameMenuViewControllerDidQuitToMenuEPNS_22GameMenuViewControllerE
 * Demangled: Caver::GameViewController::GameMenuViewControllerDidQuitToMenu(Caver::GameMenuViewController *)
 *
 * Callers: 1
 *   0x000000000035716C  Caver::GameViewController::GotoCredits(void)
 *
 * Callees: 1
 *   0x000000000035716C  Caver::GameViewController::GotoCredits(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8F58 string=0x00000000001F8F5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameViewController::GameMenuViewControllerDidQuitToMenu(
        Caver::GameViewController *this,
        Caver::GameMenuViewController *a2)
{
  JUMPOUT(0x357478);
}

