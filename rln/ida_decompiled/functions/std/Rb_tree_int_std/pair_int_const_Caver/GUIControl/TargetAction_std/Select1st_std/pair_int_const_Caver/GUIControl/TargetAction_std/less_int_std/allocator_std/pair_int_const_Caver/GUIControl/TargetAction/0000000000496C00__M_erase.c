/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000496C00
 * Mangled: _ZNSt8_Rb_treeIiSt4pairIKiN5Caver10GUIControl12TargetActionEESt10_Select1stIS5_ESt4lessIiESaIS5_EE8_M_eraseEPSt13_Rb_tree_nodeIS5_E
 * Demangled: std::_Rb_tree<int,std::pair<int const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int const,Caver::GUIControl::TargetAction>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,Caver::GUIControl::TargetAction>> *)
 *
 * Callers: 1
 *   0x00000000001F6880  std::_Rb_tree<int,std::pair<int const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int const,Caver::GUIControl::TargetAction>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,Caver::GUIControl::TargetAction>> *)
 *
 * Callees: 2
 *   0x00000000001F6880  std::_Rb_tree<int,std::pair<int const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int const,Caver::GUIControl::TargetAction>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,Caver::GUIControl::TargetAction>> *)
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 7
 *   insn=0x0000000000496C14 string=0x0000000000496C18 "t"
 *   insn=0x0000000000496C28 string=0x00000000001F6880 "0'"
 *   insn=0x0000000000496C30 string=0x0000000000496C34 "("
 *   insn=0x0000000000496C34 string=0x0000000000496C38 ""
 *   insn=0x0000000000496C38 string=0x0000000000496C3C ""
 *   insn=0x0000000000496C3C string=0x0000000000496C40 ""
 *   insn=0x0000000000496C5C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<int,std::pair<int const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int const,Caver::GUIControl::TargetAction>>>::_M_erase(
        __int64 a1,
        char *a2)
{
  char *v2; // x20
  char *v3; // x21
  __int64 v4; // x8
  void (__fastcall *v5)(char *, char *, __int64); // x8

  v2 = a2;
  while ( v2 )
  {
    v3 = v2;
    std::_Rb_tree<int,std::pair<int const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int const,Caver::GUIControl::TargetAction>>>::_M_erase();
    v4 = *((_QWORD *)v2 + 6);
    v2 = (char *)*((_QWORD *)v2 + 2);
    if ( v4 && (v4 & 1) == 0 )
    {
      v5 = *(void (__fastcall **)(char *, char *, __int64))(v4 & 0xFFFFFFFFFFFFFFFELL);
      if ( v5 )
        v5(v3 + 56, v3 + 56, 2);
    }
    operator delete(v3);
  }
}

