/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BA070
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver10QuestStateEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::QuestState>> const&)
 *
 * Callers: 1
 *   0x00000000001F7DB0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::QuestState>> const&)
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
 * Referenced strings: 28
 *   insn=0x00000000003BA080 string=0x00000000003BA084 "W"
 *   insn=0x00000000003BA084 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003BA088 string=0x00000000003BA08C "`"
 *   insn=0x00000000003BA090 string=0x00000000003BA094 "%"
 *   insn=0x00000000003BA098 string=0x00000000003BA09C "h"
 *   insn=0x00000000003BA0A0 string=0x00000000003BA0A4 "h"
 *   insn=0x00000000003BA0A8 string=0x00000000003BA0AC "\t"
 *   insn=0x00000000003BA0AC string=0x00000000003BA0B0 ")"
 *   insn=0x00000000003BA0B0 string=0x00000000003BA0B4 "\t"
 *   insn=0x00000000003BA0C8 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003BA0CC string=0x00000000003BA0D0 "x"
 *   insn=0x00000000003BA0D0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003BA0D8 string=0x00000000003BA0DC "-"
 *   insn=0x00000000003BA0DC string=0x00000000001FD590 "0'"
 *   insn=0x00000000003BA12C string=0x00000000003BA130 "@"
 *   insn=0x00000000003BA134 string=0x00000000003BA138 ""
 *   insn=0x00000000003BA144 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003BA148 string=0x00000000003BA14C "@"
 *   insn=0x00000000003BA14C string=0x00000000003BA150 "Hc"
 *   insn=0x00000000003BA14C string=0x00000000003BA174 "HC"
 *   insn=0x00000000003BA158 string=0x00000000003BA15C "\n"
 *   insn=0x00000000003BA1A0 string=0x00000000003BA1A4 ""
 *   insn=0x00000000003BA1A4 string=0x00000000003BA1A8 ")"
 *   insn=0x00000000003BA1AC string=0x00000000003BA1B0 """
 *   insn=0x00000000003BA1B4 string=0x00000000003BA1B8 "`"
 *   insn=0x00000000003BA1B8 string=0x00000000003BA1BC "@"
 *   insn=0x00000000003BA1BC string=0x00000000003BA1C0 "\n"
 *   insn=0x00000000003BA1DC string=0x00000000003BA1E0 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::QuestState>>>>::_M_create_node(
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

