/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9910
 * Mangled: ._ZN5Caver11LoadingView14LayoutSubviewsEv
 * Demangled: Caver::LoadingView::LayoutSubviews(void)
 *
 * Callers: 1
 *   0x0000000000434DD0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *
 * Callees: 1
 *   0x000000000041CA50  Caver::LoadingView::LoadingView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9918 string=0x00000000001F991C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::LoadingView::LayoutSubviews(Caver::LoadingView *this)
{
  JUMPOUT(0x41CCFC);
}

