/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D8500
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver7GUIViewEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>> *)
 *
 * Callers: 1
 *   0x00000000001F39F0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>> *)
 *
 * Callees: 4
 *   0x00000000001F39F0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F70B0  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>*)
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 8
 *   insn=0x00000000003D8510 string=0x00000000003D8514 "U"
 *   insn=0x00000000003D8530 string=0x00000000003D8534 "/m"
 *   insn=0x00000000003D8534 string=0x00000000001F39F0 "P'"
 *   insn=0x00000000003D8544 string=0x00000000001F70B0 "0'"
 *   insn=0x00000000003D8548 string=0x00000000003D854C "Y{"
 *   insn=0x00000000003D854C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003D8564 string=0x00000000003D857C "Uw"
 *   insn=0x00000000003D857C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase(
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
      std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase();
      v3 = (_QWORD *)v2[2];
      __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>::destroy();
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}

