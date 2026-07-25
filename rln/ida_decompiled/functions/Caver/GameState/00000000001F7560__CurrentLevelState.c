/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7560
 * Mangled: ._ZN5Caver9GameState17CurrentLevelStateEb
 * Demangled: Caver::GameState::CurrentLevelState(bool)
 *
 * Callers: 12
 *   0x0000000000262E78  Caver::CollectableItemComponent::Prepare(void)
 *   0x0000000000262EE4  Caver::CollectableItemComponent::RegisterLibrary(void)
 *   0x000000000026307C  Caver::CollectableItemComponent::HandleCollection(void)
 *   0x000000000026360C  sub_26360C
 *   0x0000000000278380  Caver::ItemDropComponent::IsItemCollected(std::string const&)
 *   0x00000000002783C8  Caver::ItemDropComponent::AllItemsCollected(void)
 *   0x00000000002784A0  Caver::ItemDropComponent::CreateItemObjects(void)
 *   0x0000000000279D94  sub_279D94
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x000000000035FB04  sub_35FB04
 *   0x000000000035FF9C  sub_35FF9C
 *   0x00000000003601E8  sub_3601E8
 *
 * Callees: 1
 *   0x00000000003B7C8C  Caver::GameState::StateForLevelWithName(std::string const&,bool)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F7564 string=0x00000000003B7E60 ""
 *   insn=0x00000000001F7568 string=0x00000000001F756C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameState::CurrentLevelState(Caver::GameState *this)
{
  JUMPOUT(0x3B7E60);
}

