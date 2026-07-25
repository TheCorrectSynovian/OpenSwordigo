/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB990
 * Mangled: ._ZN5Caver18InventoryItemPanel4InitERKN5boost10shared_ptrINS_9GameStateEEE
 * Demangled: Caver::InventoryItemPanel::Init(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callers: 1
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *
 * Callees: 1
 *   0x0000000000407478  Caver::InventoryItemPanel::Init(boost::shared_ptr<Caver::GameState> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB998 string=0x00000000001FB99C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::InventoryItemPanel::Init()
{
  return _ZN5Caver18InventoryItemPanel4InitERKN5boost10shared_ptrINS_9GameStateEEE();
}

