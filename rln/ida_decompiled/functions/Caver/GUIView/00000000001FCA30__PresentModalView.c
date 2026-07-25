/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCA30
 * Mangled: ._ZN5Caver7GUIView16PresentModalViewERKN5boost10shared_ptrIS0_EEb
 * Demangled: Caver::GUIView::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *
 * Callers: 3
 *   0x00000000003601E8  sub_3601E8
 *   0x00000000004918F0  Caver::GUIAlertView::PresentFromView(Caver::GUIView *)
 *   0x00000000004A15E0  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Callees: 1
 *   0x00000000004A04B0  Caver::GUIView::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCA38 string=0x00000000001FCA3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIView::PresentModalView()
{
  return _ZN5Caver7GUIView16PresentModalViewERKN5boost10shared_ptrIS0_EEb();
}

