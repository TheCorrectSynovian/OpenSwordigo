/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7730
 * Mangled: ._ZN5Caver8GameData11ItemForNameERKSs
 * Demangled: Caver::GameData::ItemForName(std::string const&)
 *
 * Callers: 8
 *   0x000000000026360C  sub_26360C
 *   0x000000000035AC54  Caver::GameViewController::GameControlButtonUp(Caver::GameControlButton)
 *   0x000000000035D214  sub_35D214
 *   0x00000000003601E8  sub_3601E8
 *   0x00000000003AB174  Caver::CharacterState::LoadFromProtobufMessage(Caver::Proto::CharacterState const&)
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000003FB1F0  Caver::CharacterView::CreateAttributesHeaderView(void)
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *
 * Callees: 1
 *   0x00000000003B0788  Caver::GameData::ItemForName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7738 string=0x00000000001F773C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameData::ItemForName()
{
  return _ZN5Caver8GameData11ItemForNameERKSs();
}

