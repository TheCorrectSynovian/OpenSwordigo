/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA950
 * Mangled: ._ZN5Caver9GUIWindow16DismissModalViewEPNS_7GUIViewE
 * Demangled: Caver::GUIWindow::DismissModalView(Caver::GUIView *)
 *
 * Callers: 1
 *   0x000000000049E55C  Caver::GUIView::Update(float)
 *
 * Callees: 1
 *   0x00000000004A3540  Caver::GUIWindow::DismissModalView(Caver::GUIView *)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FA954 string=0x00000000004A3540 ""
 *   insn=0x00000000001FA958 string=0x00000000001FA95C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIWindow::DismissModalView(Caver::GUIWindow *this, Caver::GUIView *a2)
{
  return _ZN5Caver9GUIWindow16DismissModalViewEPNS_7GUIViewE(this, a2);
}

