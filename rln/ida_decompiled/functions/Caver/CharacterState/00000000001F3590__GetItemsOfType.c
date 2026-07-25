/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3590
 * Mangled: ._ZN5Caver14CharacterState14GetItemsOfTypeENS_8ItemTypeEPSt6vectorIN5boost10shared_ptrINS_4ItemEEESaIS6_EE
 * Demangled: Caver::CharacterState::GetItemsOfType(Caver::ItemType,std::vector<boost::shared_ptr<Caver::Item>,std::allocator<boost::shared_ptr<Caver::Item>>> *)
 *
 * Callers: 2
 *   0x00000000003C9400  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableOverlayItem,Caver::DraggableOverlayItem>(boost::shared_ptr<Caver::DraggableOverlayItem> const*,Caver::DraggableOverlayItem *)
 *   0x00000000003DD450  Caver::ItemOverlay::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003AD294  Caver::CharacterState::GetItemsOfType(Caver::ItemType,std::vector<boost::shared_ptr<Caver::Item>,std::allocator<boost::shared_ptr<Caver::Item>>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3598 string=0x00000000001F359C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::CharacterState::GetItemsOfType()
{
  return _ZN5Caver14CharacterState14GetItemsOfTypeENS_8ItemTypeEPSt6vectorIN5boost10shared_ptrINS_4ItemEEESaIS6_EE();
}

