/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200990
 * Mangled: ._ZNSt8_Rb_treeIjSt4pairIKjN5boost10shared_ptrIN5Caver16RenderingProgramEEEESt10_Select1stIS7_ESt4lessIjESaIS7_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS7_ERS1_
 * Demangled: std::_Rb_tree<uint,std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<uint>,std::allocator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>,uint const&)
 *
 * Callers: 1
 *   0x000000000048BA8C  std::map<uint,boost::shared_ptr<Caver::RenderingProgram>,std::less<uint>,std::allocator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>>::operator[](uint const&)
 *
 * Callees: 1
 *   0x000000000048CBA4  std::_Rb_tree<uint,std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<uint>,std::allocator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>,uint const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200998 string=0x000000000020099C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<unsigned int,std::pair<unsigned int const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned int const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,boost::shared_ptr<Caver::RenderingProgram>>>>::_M_get_insert_hint_unique_pos()
{
  return _ZNSt8_Rb_treeIjSt4pairIKjN5boost10shared_ptrIN5Caver16RenderingProgramEEEESt10_Select1stIS7_ESt4lessIjESaIS7_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS7_ERS1_();
}

