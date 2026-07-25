/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDB60
 * Mangled: ._ZN5Caver23GUINavigationControllerD2Ev
 * Demangled: Caver::GUINavigationController::~GUINavigationController()
 *
 * Callers: 1
 *   0x000000000049A550  Caver::GUINavigationController::SetCurrentViewController(boost::shared_ptr<Caver::GUIViewController> const&)
 *
 * Callees: 1
 *   0x000000000049A550  Caver::GUINavigationController::SetCurrentViewController(boost::shared_ptr<Caver::GUIViewController> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDB68 string=0x00000000001FDB6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUINavigationController::~GUINavigationController(Caver::GUINavigationController *this)
{
  JUMPOUT(0x49A9A8);
}

