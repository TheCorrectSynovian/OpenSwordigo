/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7F20
 * Mangled: ._ZN5Caver11LoadingViewD2Ev
 * Demangled: Caver::LoadingView::~LoadingView()
 *
 * Callers: 3
 *   0x000000000041CD08  Caver::LoadingView::~LoadingView()
 *   0x0000000000434DD0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *   0x0000000000436A54  Caver::SceneLoadingView::AnimateIn(void)
 *
 * Callees: 1
 *   0x000000000041CD08  Caver::LoadingView::~LoadingView()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7F28 string=0x00000000001F7F2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::LoadingView::~LoadingView(Caver::LoadingView *this)
{
  _ZN5Caver11LoadingViewD2Ev(this);
}

