/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4650
 * Mangled: ._ZN5Caver18GameViewController31GameMenuViewControllerDismissedEPNS_22GameMenuViewControllerE
 * Demangled: Caver::GameViewController::GameMenuViewControllerDismissed(Caver::GameMenuViewController *)
 *
 * Callers: 1
 *   0x00000000003578F8  `non-virtual thunk to'Caver::GameViewController::GameMenuViewControllerDismissed(Caver::GameMenuViewController *)
 *
 * Callees: 1
 *   0x00000000003577CC  Caver::GameViewController::GameMenuViewControllerDismissed(Caver::GameMenuViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4658 string=0x00000000001F465C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameViewController::GameMenuViewControllerDismissed(
        Caver::GameViewController *this,
        Caver::GameMenuViewController *a2)
{
  return _ZN5Caver18GameViewController31GameMenuViewControllerDismissedEPNS_22GameMenuViewControllerE(this, a2);
}

