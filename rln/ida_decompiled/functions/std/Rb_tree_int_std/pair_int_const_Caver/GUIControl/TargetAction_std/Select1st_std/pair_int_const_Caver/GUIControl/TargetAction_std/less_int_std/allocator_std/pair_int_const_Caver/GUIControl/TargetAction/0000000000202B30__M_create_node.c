/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202B30
 * Mangled: ._ZNSt8_Rb_treeIiSt4pairIKiN5Caver10GUIControl12TargetActionEESt10_Select1stIS5_ESt4lessIiESaIS5_EE14_M_create_nodeERKS5_
 * Demangled: std::_Rb_tree<int,std::pair<int const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int const,Caver::GUIControl::TargetAction>>>::_M_create_node(std::pair<int const,Caver::GUIControl::TargetAction> const&)
 *
 * Callers: 1
 *   0x00000000004965BC  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *
 * Callees: 1
 *   0x0000000000496C74  std::_Rb_tree<int,std::pair<int const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int const,Caver::GUIControl::TargetAction>>>::_M_create_node(std::pair<int const,Caver::GUIControl::TargetAction> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202B38 string=0x0000000000202B3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<int,std::pair<int const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int const,Caver::GUIControl::TargetAction>>>::_M_create_node()
{
  return _ZNSt8_Rb_treeIiSt4pairIKiN5Caver10GUIControl12TargetActionEESt10_Select1stIS5_ESt4lessIiESaIS5_EE14_M_create_nodeERKS5_();
}

