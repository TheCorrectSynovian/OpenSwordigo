/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002013C0
 * Mangled: ._ZN5Caver9GUIWindow16PresentModalViewERKN5boost10shared_ptrINS_7GUIViewEEEb
 * Demangled: Caver::GUIWindow::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *
 * Callers: 1
 *   0x00000000004A04B0  Caver::GUIView::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *
 * Callees: 1
 *   0x00000000004A31B4  Caver::GUIWindow::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000002013C8 string=0x00000000002013CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIWindow::PresentModalView()
{
  return _ZN5Caver9GUIWindow16PresentModalViewERKN5boost10shared_ptrINS_7GUIViewEEEb();
}

