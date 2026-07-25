/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200830
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5Caver14CharacterState9ItemStateEESt10_Select1stIS5_ESt4lessISsESaIS5_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS5_ERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::string const&)
 *
 * Callers: 1
 *   0x00000000003ABBF8  std::map<std::string,Caver::CharacterState::ItemState,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::operator[](std::string const&)
 *
 * Callees: 1
 *   0x00000000003AE9CC  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200838 string=0x000000000020083C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_get_insert_hint_unique_pos()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsN5Caver14CharacterState9ItemStateEESt10_Select1stIS5_ESt4lessISsESaIS5_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS5_ERS1_();
}

