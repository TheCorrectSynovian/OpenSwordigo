/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045D684
 * Mangled: _ZN5Caver13ObjectLibrary15GetAllTemplatesEPSt6vectorIN5boost13intrusive_ptrINS_14ObjectTemplateEEESaIS5_EEb
 * Demangled: Caver::ObjectLibrary::GetAllTemplates(std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>> *,bool)
 *
 * Callers: 1
 *   0x000000000045D684  Caver::ObjectLibrary::GetAllTemplates(std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>> *,bool)
 *
 * Callees: 12
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FF080  std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::ObjectTemplate>*,std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>,std::allocator<boost::intrusive_ptr<Caver::ObjectTemplate>>>>,boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001FF1E0  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(std::_Rb_tree_node<std::string> *)
 *   0x0000000000200210  std::vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::ObjectLibrary>*,std::vector<boost::shared_ptr<Caver::ObjectLibrary>,std::allocator<boost::shared_ptr<Caver::ObjectLibrary>>>>,boost::shared_ptr<Caver::ObjectLibrary> const&)
 *   0x00000000002003A0  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(std::string const&)
 *   0x0000000000200780  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::find(std::string const&)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000045DAD0  Caver::ObjectLibrary::IsLibraryImported(std::string const&,bool)
 *   0x000000000054C640  sub_54C640
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 79
 *   insn=0x000000000045D698 string=0x000000000045D69C "W"
 *   insn=0x000000000045D6C0 string=0x000000000045D754 "U"
 *   insn=0x000000000045D6D0 string=0x000000000045D6D4 "+"
 *   insn=0x000000000045D6D4 string=0x000000000045D6D8 "a"
 *   insn=0x000000000045D6D8 string=0x000000000045D6DC "?"
 *   insn=0x000000000045D6E4 string=0x000000000045D6E8 "("
 *   insn=0x000000000045D6EC string=0x000000000045D6F0 "\t\t@"
 *   insn=0x000000000045D6EC string=0x000000000045D6FC "( "
 *   insn=0x000000000045D6F0 string=0x000000000045D6F4 ")"
 *   insn=0x000000000045D6F4 string=0x000000000045D6F8 "\t\t"
 *   insn=0x000000000045D6FC string=0x000000000045D700 "h"
 *   insn=0x000000000045D708 string=0x000000000045D70C ""
 *   insn=0x000000000045D708 string=0x000000000045D724 "@"
 *   insn=0x000000000045D714 string=0x000000000045D718 "Z"
 *   insn=0x000000000045D724 string=0x000000000045D728 ""
 *   insn=0x000000000045D728 string=0x000000000045D72C ""
 *   insn=0x000000000045D730 string=0x000000000045D734 ""
 *   insn=0x000000000045D734 string=0x000000000045D738 ""
 *   insn=0x000000000045D774 string=0x000000000045D778 "a"
 *   insn=0x000000000045D7A4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000045D7AC string=0x000000000045D7B0 "("
 *   insn=0x000000000045D7B0 string=0x000000000045D7B4 "\t\t@"
 *   insn=0x000000000045D7B4 string=0x000000000045D7B8 ")"
 *   insn=0x000000000045D7B8 string=0x000000000045D7BC "\t\t"
 *   insn=0x000000000045D7C0 string=0x000000000045D7C4 "\t"
 *   insn=0x000000000045D7C4 string=0x000000000045D7C8 ")"
 *   insn=0x000000000045D7CC string=0x000000000045D7D0 " "
 *   insn=0x000000000045D7D4 string=0x000000000045D7D8 ";"
 *   insn=0x000000000045D7F8 string=0x000000000045D7FC "W"
 *   insn=0x000000000045D804 string=0x000000000045D808 "8!"
 *   insn=0x000000000045D830 string=0x000000000045D834 "a"
 *   insn=0x000000000045D830 string=0x000000000045D890 "U\t"
 *   insn=0x000000000045D834 string=0x000000000045D838 "?"
 *   insn=0x000000000045D840 string=0x000000000045D844 "("
 *   insn=0x000000000045D848 string=0x000000000045D84C "("
 *   insn=0x000000000045D850 string=0x000000000045D854 "\t"
 *   insn=0x000000000045D850 string=0x000000000045D860 "(@"
 *   insn=0x000000000045D854 string=0x000000000045D858 ")"
 *   insn=0x000000000045D858 string=0x000000000045D85C "\t"
 *   insn=0x000000000045D860 string=0x000000000045D864 "h"
 *   insn=0x000000000045D870 string=0x000000000045D874 "g"
 *   insn=0x000000000045D884 string=0x000000000045D888 "?"
 *   insn=0x000000000045D888 string=0x000000000045D88C "A"
 *   insn=0x000000000045D89C string=0x000000000045D8A0 "F"
 *   insn=0x000000000045D8A8 string=0x000000000045D8AC "`"
 *   insn=0x000000000045D8E4 string=0x000000000045D8E8 "a"
 *   insn=0x000000000045D8E8 string=0x000000000045D8EC "?"
 *   insn=0x000000000045D8F4 string=0x000000000045D8F8 "("
 *   insn=0x000000000045D8FC string=0x000000000045D900 "("
 *   insn=0x000000000045D904 string=0x000000000045D908 "\t"
 *   insn=0x000000000045D904 string=0x000000000045D914 "(@"
 *   insn=0x000000000045D908 string=0x000000000045D90C ")"
 *   insn=0x000000000045D90C string=0x000000000045D910 "\t"
 *   insn=0x000000000045D914 string=0x000000000045D918 "h"
 *   insn=0x000000000045D924 string=0x000000000045D928 ":"
 *   insn=0x000000000045D944 string=0x000000000045D948 "_"
 *   insn=0x000000000045D94C string=0x000000000045D950 "U@"
 *   insn=0x000000000045D950 string=0x000000000045D954 "5"
 *   insn=0x000000000045D954 string=0x000000000045D998 "ZC"
 *   insn=0x000000000045D958 string=0x000000000045D95C ""
 *   insn=0x000000000045D968 string=0x000000000045D96C "\t@"
 *   insn=0x000000000045D978 string=0x000000000045D97C ""
 *   insn=0x000000000045D988 string=0x000000000045D98C "@"
 *   insn=0x000000000045D9AC string=0x000000000045D9B0 "@f"
 *   insn=0x000000000045D9B0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000045D9BC string=0x000000000045D9C0 ""
 *   insn=0x000000000045D9D0 string=0x000000000045D9F0 "8b"
 *   insn=0x000000000045DA04 string=0x000000000045DA08 "*f"
 *   insn=0x000000000045DA08 string=0x000000000045DA0C ")"
 *   insn=0x000000000045DA20 string=0x000000000045DA24 "5"
 *   insn=0x000000000045DA28 string=0x000000000045DA2C ""
 *   insn=0x000000000045DA38 string=0x000000000045DA3C "\t@"
 *   insn=0x000000000045DA48 string=0x000000000045DA4C ""
 *   insn=0x000000000045DA58 string=0x000000000045DA5C "@"
 *   insn=0x000000000045DA80 string=0x000000000045DA84 ""
 *   insn=0x000000000045DA8C string=0x000000000045DA90 "h"
 *   insn=0x000000000045DA94 string=0x000000000045DA98 "-"
 *   insn=0x000000000045DAA4 string=0x000000000045DAA8 ")"
 *   insn=0x000000000045DAC8 string=0x000000000045DACC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ObjectLibrary::GetAllTemplates(__int64 result, __int64 a2, char a3)
{
  __int64 v3; // x20
  __int64 v4; // x24
  __int64 v6; // x22
  _QWORD *v8; // x1
  _DWORD *v9; // x0
  int v10; // w8
  __int64 *i; // x20
  __int64 *v12; // x21
  __int64 v13; // t1
  _DWORD *v14; // [xsp+A0h] [xbp-40h]

  v3 = result;
  v4 = result + 16;
  _ReadStatusReg(TPIDR_EL0);
  v6 = *(_QWORD *)(result + 32);
  if ( v6 != result + 16 )
  {
    while ( 1 )
    {
      Caver::ObjectLibrary::TemplateForName();
      v8 = *(_QWORD **)(a2 + 8);
      if ( v8 != *(_QWORD **)(a2 + 16) )
        break;
      std::vector<boost::intrusive_ptr<Caver::ObjectTemplate>>::_M_insert_aux();
      v9 = v14;
      if ( v14 )
        goto LABEL_8;
LABEL_10:
      result = sub_54C640(v6);
      v6 = result;
      if ( result == v4 )
        goto LABEL_11;
    }
    *v8 = v14;
    if ( v14 )
      ++v14[2];
    *(_QWORD *)(a2 + 8) = v8 + 1;
    v9 = v14;
    if ( !v14 )
      goto LABEL_10;
LABEL_8:
    v10 = v9[2] - 1;
    v9[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
    goto LABEL_10;
  }
LABEL_11:
  if ( (a3 & 1) != 0 )
  {
    v12 = *(__int64 **)(v3 + 56);
    for ( i = *(__int64 **)(v3 + 64); i != v12; result = Caver::ObjectLibrary::GetAllTemplates(v13, a2, 1) )
    {
      v13 = *v12;
      v12 += 2;
    }
  }
  return result;
}

