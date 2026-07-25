/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB150
 * Mangled: ._ZN5Caver11LoadingViewC2Ev
 * Demangled: Caver::LoadingView::LoadingView(void)
 *
 * Callers: 1
 *   0x0000000000434DD0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *
 * Callees: 1
 *   0x000000000041CA50  Caver::LoadingView::LoadingView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB158 string=0x00000000001FB15C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::LoadingView::LoadingView(Caver::LoadingView *this)
{
  return _ZN5Caver11LoadingViewC2Ev(this);
}

