/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F70E0
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5Caver14CharacterState9ItemStateEESt10_Select1stIS5_ESt4lessISsESaIS5_EE14_M_create_nodeERKS5_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_create_node(std::pair<std::string const,Caver::CharacterState::ItemState> const&)
 *
 * Callers: 1
 *   0x00000000003ABBF8  std::map<std::string,Caver::CharacterState::ItemState,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::operator[](std::string const&)
 *
 * Callees: 1
 *   0x00000000003AED44  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_create_node(std::pair<std::string const,Caver::CharacterState::ItemState> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F70E8 string=0x00000000001F70EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_create_node()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsN5Caver14CharacterState9ItemStateEESt10_Select1stIS5_ESt4lessISsESaIS5_EE14_M_create_nodeERKS5_();
}

