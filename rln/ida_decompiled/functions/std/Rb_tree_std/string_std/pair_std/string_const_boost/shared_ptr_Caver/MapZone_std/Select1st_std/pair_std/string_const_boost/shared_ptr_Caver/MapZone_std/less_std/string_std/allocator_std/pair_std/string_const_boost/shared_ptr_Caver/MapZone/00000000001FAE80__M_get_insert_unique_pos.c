/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAE80
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver7MapZoneEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE24_M_get_insert_unique_posERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_get_insert_unique_pos(std::string const&)
 *
 * Callers: 1
 *   0x00000000003BD990  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::string const&)
 *
 * Callees: 1
 *   0x00000000003BDBC8  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_get_insert_unique_pos(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAE88 string=0x00000000001FAE8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_get_insert_unique_pos()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver7MapZoneEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE24_M_get_insert_unique_posERS1_();
}

