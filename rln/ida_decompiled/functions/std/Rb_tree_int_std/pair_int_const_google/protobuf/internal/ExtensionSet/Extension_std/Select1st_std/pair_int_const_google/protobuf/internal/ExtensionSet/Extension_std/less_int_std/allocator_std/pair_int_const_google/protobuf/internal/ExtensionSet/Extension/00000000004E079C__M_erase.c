/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E079C
 * Mangled: _ZNSt8_Rb_treeIiSt4pairIKiN6google8protobuf8internal12ExtensionSet9ExtensionEESt10_Select1stIS7_ESt4lessIiESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>> *)
 *
 * Callers: 1
 *   0x00000000001F7F00  std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>> *)
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7F00  std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>> *)
 *
 * Referenced strings: 4
 *   insn=0x00000000004E07B0 string=0x00000000004E07B4 "4"
 *   insn=0x00000000004E07C0 string=0x00000000001F7F00 "0'"
 *   insn=0x00000000004E07CC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004E07D0 string=0x00000000004E07D4 "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>>::_M_erase(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x21

  v2 = a2;
  if ( a2 )
  {
    do
    {
      std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>>::_M_erase();
      v3 = (_QWORD *)v2[2];
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}

