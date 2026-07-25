/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043361C
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver8GUILabelEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>> *)
 *
 * Callers: 2
 *   0x00000000001FA8F0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>> *)
 *   0x0000000000433308  Caver::QuestsView::~QuestsView()
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA8F0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>> *)
 *   0x0000000000203250  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>*)
 *
 * Referenced strings: 4
 *   insn=0x000000000043362C string=0x0000000000433630 "U"
 *   insn=0x0000000000433650 string=0x00000000001FA8F0 "0'"
 *   insn=0x0000000000433668 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000433698 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_erase(
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
      std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>>::_M_erase();
      v3 = (_QWORD *)v2[2];
      __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUILabel>>>::destroy();
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}

