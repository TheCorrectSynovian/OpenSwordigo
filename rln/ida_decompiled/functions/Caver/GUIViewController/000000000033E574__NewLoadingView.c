/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033E574
 * Mangled: _ZN5Caver17GUIViewController14NewLoadingViewEv
 * Demangled: Caver::GUIViewController::NewLoadingView(void)
 *
 * Callers: 1
 *   0x000000000033E404  Caver::ConfigureOverlayViewController::~ConfigureOverlayViewController()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD8E0  boost::shared_ptr<Caver::GUILoadingView>::shared_ptr<Caver::GUILoadingView>(Caver::GUILoadingView *)
 *   0x0000000000201BE0  Caver::GUILoadingView::GUILoadingView(void)
 *   0x000000000033E5BC  Caver::GUIViewController::SuspendView(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000033E588 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000033E5A4 string=0x00000000001FD8E0 "0'"
 *   insn=0x000000000033E5AC string=0x000000000033E5B0 "@"
 *   insn=0x000000000033E5B0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIViewController::NewLoadingView(Caver::GUIViewController *this)
{
  Caver::GUILoadingView *v1; // x0

  v1 = (Caver::GUILoadingView *)operator new(0xF8u);
  Caver::GUILoadingView::GUILoadingView(v1);
  return boost::shared_ptr<Caver::GUILoadingView>::shared_ptr<Caver::GUILoadingView>();
}

