/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045F88C
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5Caver13ObjectLibrary18ObjectTemplateInfoEESt10_Select1stIS5_ESt4lessISsESaIS5_EE12_M_erase_auxESt23_Rb_tree_const_iteratorIS5_ESD_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>)
 *
 * Callers: 1
 *   0x00000000001FABD0  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>)
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8CB0  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>> *)
 *   0x00000000001FF200  std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>::~pair()
 *   0x000000000054C6A0  sub_54C6A0
 *   0x000000000054CA60  sub_54CA60
 *
 * Referenced strings: 9
 *   insn=0x000000000045F8B0 string=0x000000000045F8B4 "A"
 *   insn=0x000000000045F8CC string=0x00000000001F8CB0 "0'"
 *   insn=0x000000000045F8DC string=0x000000000045F8E0 "@"
 *   insn=0x000000000045F8E4 string=0x000000000045F8E8 "n"
 *   insn=0x000000000045F8F4 string=0x000000000045F8F8 "Z"
 *   insn=0x000000000045F900 string=0x000000000045F904 "?~"
 *   insn=0x000000000045F908 string=0x000000000045F90C "i^"
 *   insn=0x000000000045F90C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000045F918 string=0x000000000045F91C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase_aux(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v5; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  void *v8; // x22

  v5 = a1 + 1;
  v6 = (__int64)a2;
  if ( a1 + 1 == a3 && (_QWORD *)a1[3] == a2 )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_erase();
    a1[2] = 0;
    a1[3] = a3;
    a1[4] = a3;
    a1[5] = 0;
  }
  else if ( a2 != a3 )
  {
    do
    {
      v7 = sub_54C6A0(v6);
      v8 = (void *)sub_54CA60(v6, v5);
      std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>::~pair();
      operator delete(v8);
      v6 = v7;
      --a1[5];
    }
    while ( (_QWORD *)v7 != a3 );
  }
}

