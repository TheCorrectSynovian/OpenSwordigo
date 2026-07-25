/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C2818
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver7MapNodeEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>> *)
 *
 * Callers: 1
 *   0x00000000001F3500  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>> *)
 *
 * Callees: 4
 *   0x00000000001F3500  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000201E70  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>*)
 *
 * Referenced strings: 5
 *   insn=0x00000000003C2828 string=0x00000000003C282C "U"
 *   insn=0x00000000003C2848 string=0x00000000003C284C "-"
 *   insn=0x00000000003C284C string=0x00000000001F3500 "P'"
 *   insn=0x00000000003C2864 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003C2894 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_erase(
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
      std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_erase();
      v3 = (_QWORD *)v2[2];
      __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>::destroy();
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}

