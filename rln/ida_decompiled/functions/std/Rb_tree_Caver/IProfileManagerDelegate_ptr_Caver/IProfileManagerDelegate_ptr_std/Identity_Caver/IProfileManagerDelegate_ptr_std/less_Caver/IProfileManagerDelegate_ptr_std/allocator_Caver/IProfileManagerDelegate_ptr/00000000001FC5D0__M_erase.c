/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC5D0
 * Mangled: ._ZNSt8_Rb_treeIPN5Caver23IProfileManagerDelegateES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E
 * Demangled: std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_erase(std::_Rb_tree_node<Caver::IProfileManagerDelegate *> *)
 *
 * Callers: 5
 *   0x00000000003A5F0C  Caver::ProfileManager::~ProfileManager()
 *   0x00000000003A7708  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_erase(std::_Rb_tree_node<Caver::IProfileManagerDelegate *> *)
 *   0x00000000003A7F2C  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::erase(Caver::IProfileManagerDelegate * const&)
 *   0x00000000004BBE60  Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *   0x00000000004BCE3C  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_copy(std::_Rb_tree_node<Caver::IProfileManagerDelegate *> const*,std::_Rb_tree_node<Caver::IProfileManagerDelegate *>*)
 *
 * Callees: 1
 *   0x00000000003A7708  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_erase(std::_Rb_tree_node<Caver::IProfileManagerDelegate *> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC5D8 string=0x00000000001FC5DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_erase()
{
  return _ZNSt8_Rb_treeIPN5Caver23IProfileManagerDelegateES2_St9_IdentityIS2_ESt4lessIS2_ESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E();
}

