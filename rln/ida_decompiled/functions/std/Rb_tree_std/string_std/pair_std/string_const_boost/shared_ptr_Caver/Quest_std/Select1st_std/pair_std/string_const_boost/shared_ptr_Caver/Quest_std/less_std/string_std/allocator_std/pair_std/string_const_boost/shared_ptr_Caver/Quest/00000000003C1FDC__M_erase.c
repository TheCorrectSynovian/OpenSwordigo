/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C1FDC
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver5QuestEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>> *)
 *
 * Callers: 1
 *   0x00000000001F3C50  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>> *)
 *
 * Callees: 4
 *   0x00000000001F3C50  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6970  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::Quest>>*)
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 6
 *   insn=0x00000000003C1FEC string=0x00000000003C1FF0 "U"
 *   insn=0x00000000003C2010 string=0x00000000001F3C50 "P'"
 *   insn=0x00000000003C201C string=0x00000000003C2020 "T"
 *   insn=0x00000000003C2020 string=0x00000000001F6970 "0'"
 *   insn=0x00000000003C2028 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003C2058 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::_M_erase(
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
      std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>>::_M_erase();
      v3 = (_QWORD *)v2[2];
      __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Quest>>>::destroy();
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}

