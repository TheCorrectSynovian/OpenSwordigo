/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFA90
 * Mangled: ._ZN5Caver9GUIWindow10BeginTouchERKNS_7FWTouchE
 * Demangled: Caver::GUIWindow::BeginTouch(Caver::FWTouch const&)
 *
 * Callers: 2
 *   0x000000000021127C  Caver::CaverShell::TouchBegan(Caver::FWTouch const&)
 *   0x00000000004A3E0C  Caver::GUIWindow::BeginTouch(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000004A3E0C  Caver::GUIWindow::BeginTouch(Caver::FWTouch const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFA98 string=0x00000000001FFA9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIWindow::BeginTouch(Caver::GUIWindow *this, const Caver::FWTouch *a2)
{
  return _ZN5Caver9GUIWindow10BeginTouchERKNS_7FWTouchE(this, a2);
}

