/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B93A0
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver10LevelStateEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>> *)
 *
 * Callers: 1
 *   0x0000000000200870  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>> *)
 *
 * Callees: 4
 *   0x00000000001F5C10  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>*)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200870  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>> *)
 *
 * Referenced strings: 6
 *   insn=0x00000000003B93B0 string=0x00000000003B93B4 "U"
 *   insn=0x00000000003B93D0 string=0x00000000003B93D4 "'"
 *   insn=0x00000000003B93E0 string=0x00000000003B93E4 ""
 *   insn=0x00000000003B93E4 string=0x00000000001F5C10 "P'"
 *   insn=0x00000000003B93EC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B941C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::_M_erase(
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
      std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::_M_erase();
      v3 = (_QWORD *)v2[2];
      __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>::destroy();
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}

