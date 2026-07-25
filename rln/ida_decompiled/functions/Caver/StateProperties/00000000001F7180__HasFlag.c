/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7180
 * Mangled: ._ZN5Caver15StateProperties7HasFlagERKSs
 * Demangled: Caver::StateProperties::HasFlag(std::string const&)
 *
 * Callers: 14
 *   0x0000000000262E78  Caver::CollectableItemComponent::Prepare(void)
 *   0x0000000000262EE4  Caver::CollectableItemComponent::RegisterLibrary(void)
 *   0x000000000026307C  Caver::CollectableItemComponent::HandleCollection(void)
 *   0x000000000026360C  sub_26360C
 *   0x0000000000278380  Caver::ItemDropComponent::IsItemCollected(std::string const&)
 *   0x00000000002783C8  Caver::ItemDropComponent::AllItemsCollected(void)
 *   0x00000000002784A0  Caver::ItemDropComponent::CreateItemObjects(void)
 *   0x0000000000279D94  sub_279D94
 *   0x000000000034D490  Caver::GameSceneController::RegisterTreasureCollection(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x000000000035EB00  sub_35EB00
 *   0x000000000035FB04  sub_35FB04
 *   0x00000000003601E8  sub_3601E8
 *   0x00000000003B82D4  Caver::GameState::AllNodesVisited(void)
 *   0x0000000000422FB4  Caver::MapView::Init(boost::shared_ptr<Caver::Map> const&,boost::shared_ptr<Caver::GameState> const&,bool,bool)
 *
 * Callees: 1
 *   0x00000000003C3F54  Caver::StateProperties::HasFlag(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7188 string=0x00000000001F718C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::StateProperties::HasFlag()
{
  return _ZN5Caver15StateProperties7HasFlagERKSs();
}

