/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF020
 * Mangled: ._ZNSt8_Rb_treeIiSt4pairIKiiESt10_Select1stIS2_ESt4lessIiESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E
 * Demangled: std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,int>> *)
 *
 * Callers: 1
 *   0x000000000044D1A8  Caver::PODLoader::~PODLoader()
 *
 * Callees: 1
 *   0x000000000044D1A8  Caver::PODLoader::~PODLoader()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF028 string=0x00000000001FF02C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_erase()
{
  JUMPOUT(0x44D300);
}

