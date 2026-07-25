/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDDE0
 * Mangled: ._ZN5Caver14CharacterState15HasItemWithNameERKSs
 * Demangled: Caver::CharacterState::HasItemWithName(std::string const&)
 *
 * Callers: 3
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003FB1F0  Caver::CharacterView::CreateAttributesHeaderView(void)
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *
 * Callees: 1
 *   0x00000000003AD0CC  Caver::CharacterState::HasItemWithName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDDE8 string=0x00000000001FDDEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::CharacterState::HasItemWithName()
{
  return _ZN5Caver14CharacterState15HasItemWithNameERKSs();
}

