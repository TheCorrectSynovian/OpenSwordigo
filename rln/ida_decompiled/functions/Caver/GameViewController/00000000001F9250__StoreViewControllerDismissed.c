/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9250
 * Mangled: ._ZN5Caver18GameViewController28StoreViewControllerDismissedEPNS_19StoreViewControllerE
 * Demangled: Caver::GameViewController::StoreViewControllerDismissed(Caver::StoreViewController *)
 *
 * Callers: 1
 *   0x000000000035A6D4  Caver::GameViewController::StoreViewControllerDismissed(Caver::StoreViewController *)
 *
 * Callees: 1
 *   0x000000000035A6D4  Caver::GameViewController::StoreViewControllerDismissed(Caver::StoreViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9258 string=0x00000000001F925C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameViewController::StoreViewControllerDismissed(
        Caver::GameViewController *this,
        Caver::StoreViewController *a2)
{
  return _ZN5Caver18GameViewController28StoreViewControllerDismissedEPNS_19StoreViewControllerE(this, a2);
}

