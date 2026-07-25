/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDA10
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5Caver14CharacterState9ItemStateEESt10_Select1stIS5_ESt4lessISsESaIS5_EE4findERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::find(std::string const&)
 *
 * Callers: 5
 *   0x00000000003AC900  Caver::CharacterState::AddItem(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003ACD3C  Caver::CharacterState::HighestLevelItemOfType(Caver::ItemType)
 *   0x00000000003AD0CC  Caver::CharacterState::HasItemWithName(std::string const&)
 *   0x00000000003AD0FC  Caver::CharacterState::ItemCount(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003AD258  Caver::CharacterState::ItemCount(std::string const&)
 *
 * Callees: 1
 *   0x00000000003AED44  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_create_node(std::pair<std::string const,Caver::CharacterState::ItemState> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDA18 string=0x00000000001FDA1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::find()
{
  JUMPOUT(0x3AF1A4);
}

