/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBF60
 * Mangled: ._ZNSt8_Rb_treeIjSt4pairIKjN5boost10shared_ptrIN5Caver16RenderingProgramEEEESt10_Select1stIS7_ESt4lessIjESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<uint,std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<uint>,std::allocator<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>>>::_M_erase(std::_Rb_tree_node<std::pair<uint const,boost::shared_ptr<Caver::RenderingProgram>>> *)
 *
 * Callers: 2
 *   0x000000000047BA50  Caver::RenderingContext::~RenderingContext()
 *   0x000000000048AFB0  Caver::RenderingContext::RenderingContext(Caver::RenderingAPI)
 *
 * Callees: 1
 *   0x000000000047BA50  Caver::RenderingContext::~RenderingContext()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBF68 string=0x00000000001FBF6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<unsigned int,std::pair<unsigned int const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned int const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,boost::shared_ptr<Caver::RenderingProgram>>>>::_M_erase()
{
  JUMPOUT(0x47BB54);
}

