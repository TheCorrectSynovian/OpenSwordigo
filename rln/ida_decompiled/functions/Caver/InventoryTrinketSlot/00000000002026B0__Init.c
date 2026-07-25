/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002026B0
 * Mangled: ._ZN5Caver20InventoryTrinketSlot4InitERKN5boost10shared_ptrINS_9GameStateEEEf
 * Demangled: Caver::InventoryTrinketSlot::Init(boost::shared_ptr<Caver::GameState> const&,float)
 *
 * Callers: 2
 *   0x0000000000407478  Caver::InventoryItemPanel::Init(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *
 * Callees: 1
 *   0x000000000040D64C  Caver::InventoryTrinketSlot::Init(boost::shared_ptr<Caver::GameState> const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000002026B8 string=0x00000000002026BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::InventoryTrinketSlot::Init()
{
  return _ZN5Caver20InventoryTrinketSlot4InitERKN5boost10shared_ptrINS_9GameStateEEEf();
}

