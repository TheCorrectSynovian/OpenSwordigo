/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041AB64
 * Mangled: _ZN5Caver12ItemInfoView7DismissEv
 * Demangled: Caver::ItemInfoView::Dismiss(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F42C0  Caver::ItemInfoView::AddAnimations(bool)
 *   0x00000000001F8750  Caver::GUIView::DismissModalView(Caver::GUIView*)
 *
 * Referenced strings: 2
 *   insn=0x000000000041AB78 string=0x00000000001F42C0 "P'"
 *   insn=0x000000000041AB8C string=0x00000000001F8750 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ItemInfoView::Dismiss(Caver::ItemInfoView *this)
{
  Caver::ItemInfoView::AddAnimations(this);
  Caver::GUIView::DismissModalView();
}

