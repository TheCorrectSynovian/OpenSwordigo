/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF150
 * Mangled: ._ZN5Caver16SceneLoadingViewC2Ev
 * Demangled: Caver::SceneLoadingView::SceneLoadingView(void)
 *
 * Callers: 1
 *   0x000000000036332C  sub_36332C
 *
 * Callees: 1
 *   0x0000000000434DD0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF158 string=0x00000000001FF15C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SceneLoadingView::SceneLoadingView(Caver::SceneLoadingView *this)
{
  JUMPOUT(0x434E60);
}

