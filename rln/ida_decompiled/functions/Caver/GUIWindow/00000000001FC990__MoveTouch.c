/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC990
 * Mangled: ._ZN5Caver9GUIWindow9MoveTouchERKNS_7FWTouchE
 * Demangled: Caver::GUIWindow::MoveTouch(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x0000000000211378  Caver::CaverShell::TouchMoved(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000004A3E0C  Caver::GUIWindow::BeginTouch(Caver::FWTouch const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC998 string=0x00000000001FC99C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUIWindow::MoveTouch()
{
  JUMPOUT(0x4A4370);
}

