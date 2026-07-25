/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046A968
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost13intrusive_ptrIN5Caver11SceneObjectEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>> const&)
 *
 * Callers: 1
 *   0x00000000001FC1C0  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_create_node(std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>> const&)
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
 * Referenced strings: 31
 *   insn=0x000000000046A97C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000046A980 string=0x000000000046A984 "`"
 *   insn=0x000000000046A990 string=0x000000000046A994 "h"
 *   insn=0x000000000046A998 string=0x000000000046A99C "\t\t@"
 *   insn=0x000000000046A99C string=0x000000000046A9A0 ")"
 *   insn=0x000000000046A9A0 string=0x000000000046A9A4 "\t\t"
 *   insn=0x000000000046A9B8 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000046A9BC string=0x000000000046A9C0 "<2"
 *   insn=0x000000000046A9C0 string=0x000000000046A9C4 "k`"
 *   insn=0x000000000046A9C0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000046A9CC string=0x00000000001FD590 "0'"
 *   insn=0x000000000046A9D4 string=0x000000000046A9D8 "]"
 *   insn=0x000000000046AA00 string=0x000000000046AA04 "5"
 *   insn=0x000000000046AA24 string=0x000000000046AA28 "|"
 *   insn=0x000000000046AA30 string=0x00000000001F5190 "P'"
 *   insn=0x000000000046AA34 string=0x000000000046AA38 "@"
 *   insn=0x000000000046AA60 string=0x000000000046AA64 "b"
 *   insn=0x000000000046AA78 string=0x000000000046AA7C "J"
 *   insn=0x000000000046AA94 string=0x000000000046AA98 ""
 *   insn=0x000000000046AAC8 string=0x000000000046AACC ";"
 *   insn=0x000000000046AAD8 string=0x000000000046AADC "`"
 *   insn=0x000000000046AAE0 string=0x000000000046AAE4 ""
 *   insn=0x000000000046AAF4 string=0x000000000046AAF8 "@"
 *   insn=0x000000000046AAF8 string=0x000000000046AAFC "hc"
 *   insn=0x000000000046AAF8 string=0x000000000046AB20 "hC"
 *   insn=0x000000000046AAFC string=0x000000000046AB00 ""
 *   insn=0x000000000046AB04 string=0x000000000046AB08 "\n"
 *   insn=0x000000000046AB24 string=0x000000000046AB28 ""
 *   insn=0x000000000046AB44 string=0x000000000046AB48 "("
 *   insn=0x000000000046AB58 string=0x000000000046AB5C "`"
 *   insn=0x000000000046AB7C string=0x000000000046AB80 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::SceneObject>>>>::_M_create_node(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // x19
  __int64 v4; // x8

  v3 = operator new(0x30u);
  sub_56A528(v3 + 32, a2);
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v3 + 40) = v4;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  return v3;
}

