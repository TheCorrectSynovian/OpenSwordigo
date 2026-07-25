/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044D6C4
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIKN5Caver5ModelEEEESt10_Select1stIS8_ESt4lessISsESaIS8_EE14_M_create_nodeERKS8_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Model const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::Model const>> const&)
 *
 * Callers: 1
 *   0x00000000001F7D00  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Model const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::Model const>> const&)
 *
 * Callees: 10
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C700  sub_54C700
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 53
 *   insn=0x000000000044D6D8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000044D6DC string=0x000000000044D6E0 "`"
 *   insn=0x000000000044D6EC string=0x000000000044D6F0 "h"
 *   insn=0x000000000044D6F4 string=0x000000000044D6F8 "h"
 *   insn=0x000000000044D6FC string=0x000000000044D700 "\t"
 *   insn=0x000000000044D700 string=0x000000000044D704 ")"
 *   insn=0x000000000044D704 string=0x000000000044D708 "\t"
 *   insn=0x000000000044D71C string=0x00000000001F45E0 "P'"
 *   insn=0x000000000044D724 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000044D730 string=0x00000000001FD590 "0'"
 *   insn=0x000000000044D734 string=0x000000000044D738 "c"
 *   insn=0x000000000044D764 string=0x000000000044D768 "@"
 *   insn=0x000000000044D76C string=0x000000000044D770 "h"
 *   insn=0x000000000044D78C string=0x000000000044D790 ""
 *   insn=0x000000000044D798 string=0x000000000044D79C ""
 *   insn=0x000000000044D7A8 string=0x000000000044D7AC "`"
 *   insn=0x000000000044D7BC string=0x000000000044D7C0 "\t"
 *   insn=0x000000000044D7C0 string=0x000000000044D7C4 "?"
 *   insn=0x000000000044D7C4 string=0x000000000044D7C8 "#"
 *   insn=0x000000000044D7E8 string=0x000000000044D7EC "i1"
 *   insn=0x000000000044D7EC string=0x000000000044D7F0 ")"
 *   insn=0x000000000044D7F0 string=0x000000000044D7F4 ")"
 *   insn=0x000000000044D820 string=0x000000000044D824 "?"
 *   insn=0x000000000044D828 string=0x000000000044D82C ":"
 *   insn=0x000000000044D82C string=0x000000000044D914 "s2"
 *   insn=0x000000000044D830 string=0x000000000044D834 """
 *   insn=0x000000000044D83C string=0x000000000044D840 "`"
 *   insn=0x000000000044D844 string=0x000000000044D848 "~"
 *   insn=0x000000000044D848 string=0x000000000044D84C ""
 *   insn=0x000000000044D854 string=0x000000000044D858 "h"
 *   insn=0x000000000044D860 string=0x000000000044D864 "s"
 *   insn=0x000000000044D864 string=0x000000000044D868 "1"
 *   insn=0x000000000044D870 string=0x000000000044D874 "."
 *   insn=0x000000000044D87C string=0x000000000044D880 "+"
 *   insn=0x000000000044D884 string=0x000000000044D888 ")"
 *   insn=0x000000000044D88C string=0x000000000044D890 "i"
 *   insn=0x000000000044D894 string=0x000000000044D898 "h"
 *   insn=0x000000000044D898 string=0x000000000044D89C "ib"
 *   insn=0x000000000044D89C string=0x000000000044D8A0 "jB"
 *   insn=0x000000000044D8A4 string=0x000000000044D8A8 "I1"
 *   insn=0x000000000044D8A8 string=0x000000000044D8AC ")"
 *   insn=0x000000000044D8AC string=0x000000000044D8B0 ")"
 *   insn=0x000000000044D8B8 string=0x000000000044D8BC "b"
 *   insn=0x000000000044D8BC string=0x000000000044D908 ""
 *   insn=0x000000000044D8C0 string=0x000000000044D8C4 " "
 *   insn=0x000000000044D8DC string=0x000000000044D8E0 "h"
 *   insn=0x000000000044D8E0 string=0x000000000044D8E4 "ib"
 *   insn=0x000000000044D8E4 string=0x000000000044D8E8 "jB"
 *   insn=0x000000000044D8EC string=0x000000000044D8F0 "I1"
 *   insn=0x000000000044D8F0 string=0x000000000044D8F4 ")"
 *   insn=0x000000000044D8F4 string=0x000000000044D8F8 ")"
 *   insn=0x000000000044D900 string=0x000000000044D904 "C"
 *   insn=0x000000000044D920 string=0x000000000044D924 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Model const>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>>::_M_create_node(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // x19
  __int64 v4; // x8

  v3 = operator new(0x38u);
  sub_56A528(v3 + 32, a2);
  *(_QWORD *)(v3 + 40) = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v3 + 48) = v4;
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  return v3;
}

