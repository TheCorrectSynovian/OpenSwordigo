/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045E14C
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5Caver13ObjectLibrary18ObjectTemplateInfoEESt10_Select1stIS5_ESt4lessISsESaIS5_EE8_M_eraseEPSt13_Rb_tree_nodeIS5_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>> *)
 *
 * Callers: 1
 *   0x00000000001F8CB0  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>> *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8CB0  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>> *)
 *   0x00000000001FF200  std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>::~pair()
 *
 * Referenced strings: 5
 *   insn=0x000000000045E160 string=0x000000000045E164 "t"
 *   insn=0x000000000045E170 string=0x00000000001F8CB0 "0'"
 *   insn=0x000000000045E178 string=0x000000000045E17C "!"
 *   insn=0x000000000045E180 string=0x000000000045E184 "Kd"
 *   insn=0x000000000045E184 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase(
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
      std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase();
      v3 = (_QWORD *)v2[2];
      std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>::~pair();
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}

