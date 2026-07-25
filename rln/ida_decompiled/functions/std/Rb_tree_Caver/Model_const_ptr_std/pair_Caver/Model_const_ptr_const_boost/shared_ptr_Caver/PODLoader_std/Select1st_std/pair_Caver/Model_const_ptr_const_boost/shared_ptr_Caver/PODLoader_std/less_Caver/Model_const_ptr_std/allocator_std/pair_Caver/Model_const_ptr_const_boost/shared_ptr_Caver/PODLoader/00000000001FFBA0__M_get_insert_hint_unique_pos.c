/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFBA0
 * Mangled: ._ZNSt8_Rb_treeIPKN5Caver5ModelESt4pairIKS3_N5boost10shared_ptrINS0_9PODLoaderEEEESt10_Select1stISA_ESt4lessIS3_ESaISA_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorISA_ERS5_
 * Demangled: std::_Rb_tree<Caver::Model const*,std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>,Caver::Model const* const&)
 *
 * Callers: 1
 *   0x000000000044BEF4  std::map<Caver::Model const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::operator[](Caver::Model const* const&)
 *
 * Callees: 1
 *   0x000000000044D6C4  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Model const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::Model const>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFBA8 string=0x00000000001FFBAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<Caver::Model const*,std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::_M_get_insert_hint_unique_pos()
{
  JUMPOUT(0x44D740);
}

