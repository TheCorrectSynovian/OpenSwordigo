/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A7754
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver13PlayerProfileEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>> *)
 *
 * Callers: 1
 *   0x00000000001FF620  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>> *)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC080  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>*)
 *   0x00000000001FF620  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>> *)
 *
 * Referenced strings: 5
 *   insn=0x00000000003A7764 string=0x00000000003A7768 "U"
 *   insn=0x00000000003A7794 string=0x00000000003A7798 ":R"
 *   insn=0x00000000003A7798 string=0x00000000001FC080 "0'"
 *   insn=0x00000000003A77A0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003A77D0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_erase(
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
      std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_erase();
      v3 = (_QWORD *)v2[2];
      __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>::destroy();
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}

