/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD8A0
 * Mangled: ._ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5Caver14CharacterState9ItemStateEEE7destroyEPS6_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>::destroy(std::pair<std::string const,Caver::CharacterState::ItemState>*)
 *
 * Callers: 2
 *   0x00000000003ACD3C  Caver::CharacterState::HighestLevelItemOfType(Caver::ItemType)
 *   0x00000000003B9580  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Caver::CharacterState::ItemState>> *)
 *
 * Callees: 1
 *   0x00000000003AE86C  __gnu_cxx::new_allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>::destroy(std::pair<std::string const,Caver::CharacterState::ItemState>*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD8A8 string=0x00000000001FD8AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __gnu_cxx::new_allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>::destroy()
{
  return _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5Caver14CharacterState9ItemStateEEE7destroyEPS6_();
}

