/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F71F0
 * Mangled: ._ZN5Caver15StateProperties7AddFlagERKSs
 * Demangled: Caver::StateProperties::AddFlag(std::string const&)
 *
 * Callers: 6
 *   0x000000000026307C  Caver::CollectableItemComponent::HandleCollection(void)
 *   0x000000000034D490  Caver::GameSceneController::RegisterTreasureCollection(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x000000000035FB04  sub_35FB04
 *   0x000000000035FF9C  sub_35FF9C
 *   0x000000000039FB4C  Caver::ProfilePanelView::DeleteTextFieldValueChanged(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x00000000003C3E90  Caver::StateProperties::AddFlag(std::string const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F71F4 string=0x00000000003C3E90 "D"
 *   insn=0x00000000001F71F8 string=0x00000000001F71FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::StateProperties::AddFlag()
{
  return _ZN5Caver15StateProperties7AddFlagERKSs();
}

