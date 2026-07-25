/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200CD0
 * Mangled: ._ZN5Caver16SceneLoadingView17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEERKNS2_INS_7MapNodeEEE
 * Demangled: Caver::SceneLoadingView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&,boost::shared_ptr<Caver::MapNode> const&)
 *
 * Callers: 1
 *   0x000000000036332C  sub_36332C
 *
 * Callees: 1
 *   0x0000000000434DD0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200CD8 string=0x0000000000200CDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::SceneLoadingView::InitWithGameState()
{
  JUMPOUT(0x4358DC);
}

