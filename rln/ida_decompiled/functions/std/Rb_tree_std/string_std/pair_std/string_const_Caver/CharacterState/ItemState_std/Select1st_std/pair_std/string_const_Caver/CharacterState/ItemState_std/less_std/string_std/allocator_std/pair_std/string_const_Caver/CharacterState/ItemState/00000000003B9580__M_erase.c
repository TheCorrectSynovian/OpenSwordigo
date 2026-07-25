/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B9580
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5Caver14CharacterState9ItemStateEESt10_Select1stIS5_ESt4lessISsESaIS5_EE8_M_eraseEPSt13_Rb_tree_nodeIS5_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Caver::CharacterState::ItemState>> *)
 *
 * Callers: 1
 *   0x00000000002026F0  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Caver::CharacterState::ItemState>> *)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD8A0  __gnu_cxx::new_allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>::destroy(std::pair<std::string const,Caver::CharacterState::ItemState>*)
 *   0x00000000002026F0  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Caver::CharacterState::ItemState>> *)
 *
 * Referenced strings: 7
 *   insn=0x00000000003B9590 string=0x00000000003B9594 "U"
 *   insn=0x00000000003B95B0 string=0x00000000003B95B4 "O$"
 *   insn=0x00000000003B95C4 string=0x00000000001FD8A0 "0'"
 *   insn=0x00000000003B95C8 string=0x00000000003B95CC "9"
 *   insn=0x00000000003B95CC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B95E4 string=0x00000000003B95FC "5"
 *   insn=0x00000000003B95FC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_erase(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x22

  v2 = a2;
  _ReadStatusReg(TPIDR_EL0);
  if ( a2 )
  {
    do
    {
      std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_erase();
      v3 = (_QWORD *)v2[2];
      __gnu_cxx::new_allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>::destroy();
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}

