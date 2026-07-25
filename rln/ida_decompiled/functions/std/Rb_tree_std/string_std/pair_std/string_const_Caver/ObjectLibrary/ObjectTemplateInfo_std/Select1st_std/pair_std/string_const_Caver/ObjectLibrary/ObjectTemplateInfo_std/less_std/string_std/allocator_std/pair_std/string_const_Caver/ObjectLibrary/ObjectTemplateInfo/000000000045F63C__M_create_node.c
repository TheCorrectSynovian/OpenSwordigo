/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045F63C
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5Caver13ObjectLibrary18ObjectTemplateInfoEESt10_Select1stIS5_ESt4lessISsESaIS5_EE14_M_create_nodeERKS5_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_create_node(std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo> const&)
 *
 * Callers: 1
 *   0x00000000001F6E40  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_create_node(std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo> const&)
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 37
 *   insn=0x000000000045F650 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000045F654 string=0x000000000045F658 "`"
 *   insn=0x000000000045F664 string=0x000000000045F668 "h"
 *   insn=0x000000000045F66C string=0x000000000045F670 "h"
 *   insn=0x000000000045F674 string=0x000000000045F678 "\t"
 *   insn=0x000000000045F678 string=0x000000000045F67C ")"
 *   insn=0x000000000045F67C string=0x000000000045F680 "\t"
 *   insn=0x000000000045F684 string=0x000000000045F688 "h"
 *   insn=0x000000000045F68C string=0x000000000045F690 "\t\t@"
 *   insn=0x000000000045F690 string=0x000000000045F694 ")"
 *   insn=0x000000000045F694 string=0x000000000045F698 "\t\t"
 *   insn=0x000000000045F6AC string=0x00000000001F45E0 "P'"
 *   insn=0x000000000045F6B4 string=0x000000000045F6B8 "."
 *   insn=0x000000000045F6B4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000045F6C0 string=0x00000000001FD590 "0'"
 *   insn=0x000000000045F6C8 string=0x000000000045F6CC " "
 *   insn=0x000000000045F6F4 string=0x000000000045F6F8 "5"
 *   insn=0x000000000045F718 string=0x000000000045F71C "|"
 *   insn=0x000000000045F724 string=0x00000000001F5190 "P'"
 *   insn=0x000000000045F728 string=0x000000000045F72C "@"
 *   insn=0x000000000045F754 string=0x000000000045F758 "b"
 *   insn=0x000000000045F76C string=0x000000000045F770 "J"
 *   insn=0x000000000045F788 string=0x000000000045F78C ""
 *   insn=0x000000000045F7BC string=0x000000000045F7C0 ";"
 *   insn=0x000000000045F7CC string=0x000000000045F7D0 "`"
 *   insn=0x000000000045F7D4 string=0x000000000045F7D8 ""
 *   insn=0x000000000045F7E0 string=0x000000000045F7E4 "kV"
 *   insn=0x000000000045F7E8 string=0x000000000045F7EC "@"
 *   insn=0x000000000045F7EC string=0x000000000045F7F0 "hc"
 *   insn=0x000000000045F7EC string=0x000000000045F814 "hC"
 *   insn=0x000000000045F7F0 string=0x000000000045F7F4 ""
 *   insn=0x000000000045F7F8 string=0x000000000045F7FC "\n"
 *   insn=0x000000000045F818 string=0x000000000045F81C ""
 *   insn=0x000000000045F838 string=0x000000000045F83C "("
 *   insn=0x000000000045F844 string=0x000000000045F848 "RV"
 *   insn=0x000000000045F84C string=0x000000000045F850 "`"
 *   insn=0x000000000045F870 string=0x000000000045F874 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::_M_create_node(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x8

  v3 = (_QWORD *)operator new(0x40u);
  sub_56A528(v3 + 4, a2);
  v3[5] = a2[1];
  v4 = a2[2];
  v3[6] = v4;
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  v5 = a2[3];
  v3[7] = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  return v3;
}

