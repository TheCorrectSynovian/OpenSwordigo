/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201BE0
 * Mangled: ._ZN5Caver14GUILoadingViewC2Ev_0
 * Demangled: Caver::GUILoadingView::GUILoadingView(void)
 *
 * Callers: 1
 *   0x000000000033E574  Caver::GUIViewController::NewLoadingView(void)
 *
 * Callees: 1
 *   0x00000000004987E8  Caver::GUILoadingView::GUILoadingView(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201BE8 string=0x0000000000201BEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUILoadingView::GUILoadingView(Caver::GUILoadingView *this)
{
  return _ZN5Caver14GUILoadingViewC2Ev(this);
}

