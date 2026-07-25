/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4680
 * Mangled: ._ZN5Caver18InventoryItemPanel8SetSkillERKN5boost10shared_ptrINS_5SkillEEE
 * Demangled: Caver::InventoryItemPanel::SetSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Callers: 1
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *
 * Callees: 1
 *   0x000000000040AD68  Caver::InventoryItemPanel::SetItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4688 string=0x00000000001F468C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::InventoryItemPanel::SetSkill()
{
  JUMPOUT(0x40AF60);
}

