/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3E80
 * Mangled: ._ZN5Caver9GUIWindow11CancelTouchERKNS_7FWTouchE
 * Demangled: Caver::GUIWindow::CancelTouch(Caver::FWTouch const&)
 *
 * Callers: 4
 *   0x0000000000211550  Caver::CaverShell::TouchCancelled(Caver::FWTouch const&)
 *   0x00000000004A31B4  Caver::GUIWindow::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *   0x00000000004A3E0C  Caver::GUIWindow::BeginTouch(Caver::FWTouch const&)
 *   0x00000000004A46B0  Caver::GUIWindow::EndTouch(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000004A3E0C  Caver::GUIWindow::BeginTouch(Caver::FWTouch const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3E88 string=0x00000000001F3E8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUIWindow::CancelTouch()
{
  JUMPOUT(0x4A454C);
}

