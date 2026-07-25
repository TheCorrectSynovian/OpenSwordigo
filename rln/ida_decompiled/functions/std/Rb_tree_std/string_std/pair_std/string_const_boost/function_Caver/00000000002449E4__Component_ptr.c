/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002449E4
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost8functionIFPN5Caver9ComponentEvEEEESt10_Select1stIS9_ESt4lessISsESaIS9_EE8_M_eraseEPSt13_Rb_tree_nodeIS9_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>> *)
 *
 * Callers: 2
 *   0x00000000001FAC30  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>> *)
 *   0x0000000000244834  boost::function<Caver::Component * ()(void)>::operator=(boost::function<Caver::Component * ()(void)> const&)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAC30  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>> *)
 *   0x0000000000203D00  __gnu_cxx::new_allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>::destroy(std::pair<std::string const,boost::function<Caver::Component * ()(void)>>*)
 *
 * Referenced strings: 5
 *   insn=0x00000000002449F4 string=0x00000000002449F8 "U"
 *   insn=0x0000000000244A18 string=0x00000000001FAC30 "0'"
 *   insn=0x0000000000244A2C string=0x0000000000244A30 " "
 *   insn=0x0000000000244A30 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000244A60 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_erase(
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
      std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_erase();
      v3 = (_QWORD *)v2[2];
      __gnu_cxx::new_allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>::destroy();
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}

