/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4E10
 * Mangled: ._ZN5Caver23GUINavigationControllerC2Ev
 * Demangled: Caver::GUINavigationController::GUINavigationController(void)
 *
 * Callers: 1
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *
 * Callees: 1
 *   0x0000000000498FDC  Caver::GUINavigationController::GUINavigationController(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4E18 string=0x00000000001F4E1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUINavigationController::GUINavigationController(Caver::GUINavigationController *this)
{
  return _ZN5Caver23GUINavigationControllerC2Ev(this);
}

