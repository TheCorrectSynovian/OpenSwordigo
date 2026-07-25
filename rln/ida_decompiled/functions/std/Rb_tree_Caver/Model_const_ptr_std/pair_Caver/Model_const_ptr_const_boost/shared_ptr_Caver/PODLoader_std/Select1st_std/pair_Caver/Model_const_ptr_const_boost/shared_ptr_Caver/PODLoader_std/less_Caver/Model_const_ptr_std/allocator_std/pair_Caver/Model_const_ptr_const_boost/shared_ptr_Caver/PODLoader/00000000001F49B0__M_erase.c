/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F49B0
 * Mangled: ._ZNSt8_Rb_treeIPKN5Caver5ModelESt4pairIKS3_N5boost10shared_ptrINS0_9PODLoaderEEEESt10_Select1stISA_ESt4lessIS3_ESaISA_EE8_M_eraseEPSt13_Rb_tree_nodeISA_E
 * Demangled: std::_Rb_tree<Caver::Model const*,std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::_M_erase(std::_Rb_tree_node<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>> *)
 *
 * Callers: 2
 *   0x000000000044B4C0  Caver::ModelLibrary::SetSharedLibrary(Caver::ModelLibrary*)
 *   0x000000000044CB50  std::_Rb_tree<Caver::Model const*,std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::_M_erase(std::_Rb_tree_node<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>> *)
 *
 * Callees: 1
 *   0x000000000044CB50  std::_Rb_tree<Caver::Model const*,std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::_M_erase(std::_Rb_tree_node<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F49B8 string=0x00000000001F49BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<Caver::Model const*,std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::_M_erase()
{
  return _ZNSt8_Rb_treeIPKN5Caver5ModelESt4pairIKS3_N5boost10shared_ptrINS0_9PODLoaderEEEESt10_Select1stISA_ESt4lessIS3_ESaISA_EE8_M_eraseEPSt13_Rb_tree_nodeISA_E();
}

