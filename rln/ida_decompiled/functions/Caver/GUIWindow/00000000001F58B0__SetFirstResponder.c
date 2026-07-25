/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F58B0
 * Mangled: ._ZN5Caver9GUIWindow17SetFirstResponderERKN5boost10shared_ptrINS_7GUIViewEEE
 * Demangled: Caver::GUIWindow::SetFirstResponder(boost::shared_ptr<Caver::GUIView> const&)
 *
 * Callers: 2
 *   0x000000000049FA60  Caver::GUIView::RemoveFromSuperview(void)
 *   0x00000000004A05C8  Caver::GUIView::BecomeFirstResponder(void)
 *
 * Callees: 1
 *   0x00000000004A3B08  Caver::GUIWindow::SetFirstResponder(boost::shared_ptr<Caver::GUIView> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F58B8 string=0x00000000001F58BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIWindow::SetFirstResponder()
{
  return _ZN5Caver9GUIWindow17SetFirstResponderERKN5boost10shared_ptrINS_7GUIViewEEE();
}

