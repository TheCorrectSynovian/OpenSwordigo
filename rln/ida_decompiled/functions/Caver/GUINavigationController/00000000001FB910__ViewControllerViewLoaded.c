/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB910
 * Mangled: ._ZN5Caver23GUINavigationController24ViewControllerViewLoadedEPNS_17GUIViewControllerE
 * Demangled: Caver::GUINavigationController::ViewControllerViewLoaded(Caver::GUIViewController *)
 *
 * Callers: 1
 *   0x0000000000499288  Caver::GUINavigationController::ViewControllerViewLoaded(Caver::GUIViewController *)
 *
 * Callees: 1
 *   0x0000000000499288  Caver::GUINavigationController::ViewControllerViewLoaded(Caver::GUIViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB918 string=0x00000000001FB91C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUINavigationController::ViewControllerViewLoaded(
        Caver::GUINavigationController *this,
        Caver::GUIViewController *a2)
{
  return _ZN5Caver23GUINavigationController24ViewControllerViewLoadedEPNS_17GUIViewControllerE(this, a2);
}

