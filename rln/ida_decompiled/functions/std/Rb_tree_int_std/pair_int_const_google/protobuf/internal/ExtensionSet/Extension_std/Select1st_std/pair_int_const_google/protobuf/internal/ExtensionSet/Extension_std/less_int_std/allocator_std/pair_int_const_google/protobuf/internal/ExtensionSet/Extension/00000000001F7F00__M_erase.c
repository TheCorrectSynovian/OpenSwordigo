/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7F00
 * Mangled: ._ZNSt8_Rb_treeIiSt4pairIKiN6google8protobuf8internal12ExtensionSet9ExtensionEESt10_Select1stIS7_ESt4lessIiESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>> *)
 *
 * Callers: 2
 *   0x00000000004D87B8  google::protobuf::internal::ExtensionSet::~ExtensionSet()
 *   0x00000000004E079C  std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>> *)
 *
 * Callees: 1
 *   0x00000000004E079C  std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7F08 string=0x00000000001F7F0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>>::_M_erase()
{
  return _ZNSt8_Rb_treeIiSt4pairIKiN6google8protobuf8internal12ExtensionSet9ExtensionEESt10_Select1stIS7_ESt4lessIiESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E();
}

