/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6880
 * Mangled: ._ZNSt8_Rb_treeIiSt4pairIKiN5Caver10GUIControl12TargetActionEESt10_Select1stIS5_ESt4lessIiESaIS5_EE8_M_eraseEPSt13_Rb_tree_nodeIS5_E
 * Demangled: std::_Rb_tree<int,std::pair<int const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int const,Caver::GUIControl::TargetAction>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,Caver::GUIControl::TargetAction>> *)
 *
 * Callers: 2
 *   0x0000000000496510  Caver::GUIControl::~GUIControl()
 *   0x0000000000496C00  std::_Rb_tree<int,std::pair<int const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int const,Caver::GUIControl::TargetAction>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,Caver::GUIControl::TargetAction>> *)
 *
 * Callees: 1
 *   0x0000000000496C00  std::_Rb_tree<int,std::pair<int const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int const,Caver::GUIControl::TargetAction>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,Caver::GUIControl::TargetAction>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6888 string=0x00000000001F688C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<int,std::pair<int const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int const,Caver::GUIControl::TargetAction>>>::_M_erase()
{
  return _ZNSt8_Rb_treeIiSt4pairIKiN5Caver10GUIControl12TargetActionEESt10_Select1stIS5_ESt4lessIiESaIS5_EE8_M_eraseEPSt13_Rb_tree_nodeIS5_E();
}

