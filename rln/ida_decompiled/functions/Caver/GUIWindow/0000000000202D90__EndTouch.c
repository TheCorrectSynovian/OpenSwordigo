/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202D90
 * Mangled: ._ZN5Caver9GUIWindow8EndTouchERKNS_7FWTouchE
 * Demangled: Caver::GUIWindow::EndTouch(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x0000000000211464  Caver::CaverShell::TouchEnded(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000004A46B0  Caver::GUIWindow::EndTouch(Caver::FWTouch const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202D98 string=0x0000000000202D9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIWindow::EndTouch(Caver::GUIWindow *this, const Caver::FWTouch *a2)
{
  return _ZN5Caver9GUIWindow8EndTouchERKNS_7FWTouchE(this, a2);
}

