/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C2638
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver7MapZoneEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>> *)
 *
 * Callers: 2
 *   0x00000000001F3510  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>> *)
 *   0x00000000003C2484  Caver::Map::~Map()
 *
 * Callees: 4
 *   0x00000000001F3510  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6340  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>*)
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 8
 *   insn=0x00000000003C2648 string=0x00000000003C264C "U"
 *   insn=0x00000000003C266C string=0x00000000001F3510 "P'"
 *   insn=0x00000000003C2678 string=0x00000000003C267C "1"
 *   insn=0x00000000003C267C string=0x00000000001F6340 "0'"
 *   insn=0x00000000003C2680 string=0x00000000003C2684 ""
 *   insn=0x00000000003C2684 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003C269C string=0x00000000003C26B4 ""
 *   insn=0x00000000003C26B4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_erase(
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
      std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_erase();
      v3 = (_QWORD *)v2[2];
      __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>::destroy();
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}

