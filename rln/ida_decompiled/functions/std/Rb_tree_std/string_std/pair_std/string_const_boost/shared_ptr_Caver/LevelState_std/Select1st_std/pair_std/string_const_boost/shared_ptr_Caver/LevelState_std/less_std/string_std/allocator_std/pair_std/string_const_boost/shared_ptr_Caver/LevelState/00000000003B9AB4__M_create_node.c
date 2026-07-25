/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B9AB4
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver10LevelStateEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::LevelState>> const&)
 *
 * Callers: 1
 *   0x00000000002003C0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::LevelState>> const&)
 *
 * Callees: 11
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 35
 *   insn=0x00000000003B9AC8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B9ACC string=0x00000000003B9AD0 "`"
 *   insn=0x00000000003B9ADC string=0x00000000003B9AE0 "h"
 *   insn=0x00000000003B9AE4 string=0x00000000003B9AE8 "h"
 *   insn=0x00000000003B9AEC string=0x00000000003B9AF0 "\t"
 *   insn=0x00000000003B9AF0 string=0x00000000003B9AF4 ")"
 *   insn=0x00000000003B9AF4 string=0x00000000003B9AF8 "\t"
 *   insn=0x00000000003B9B0C string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003B9B14 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003B9B20 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003B9B24 string=0x00000000003B9B28 "g"
 *   insn=0x00000000003B9B28 string=0x00000000003B9B2C "R"
 *   insn=0x00000000003B9B40 string=0x00000000003B9B44 "U"
 *   insn=0x00000000003B9B60 string=0x00000000003B9B64 "i"
 *   insn=0x00000000003B9B64 string=0x00000000003B9B68 ")-A"
 *   insn=0x00000000003B9B74 string=0x00000000003B9B78 "(A"
 *   insn=0x00000000003B9B7C string=0x00000000003B9B80 ""
 *   insn=0x00000000003B9BAC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003B9BB4 string=0x00000000003B9BB8 "h"
 *   insn=0x00000000003B9BB8 string=0x00000000003B9BBC "i"
 *   insn=0x00000000003B9BBC string=0x00000000003B9BC0 ")"
 *   insn=0x00000000003B9BCC string=0x00000000003B9BD0 "I"
 *   insn=0x00000000003B9BD0 string=0x00000000003B9BD4 ")=G"
 *   insn=0x00000000003B9BD4 string=0x00000000003B9BD8 "!"
 *   insn=0x00000000003B9BDC string=0x00000000003B9BE0 "\t"
 *   insn=0x00000000003B9BDC string=0x00000000003B9C0C "\t"
 *   insn=0x00000000003B9BE0 string=0x00000000003B9BE4 "*"
 *   insn=0x00000000003B9BE4 string=0x00000000003B9BE8 "\n"
 *   insn=0x00000000003B9BEC string=0x00000000003B9BF0 "?"
 *   insn=0x00000000003B9BF0 string=0x00000000003B9BF4 "l"
 *   insn=0x00000000003B9C0C string=0x00000000003B9C10 "*"
 *   insn=0x00000000003B9C10 string=0x00000000003B9C14 "\n"
 *   insn=0x00000000003B9C14 string=0x00000000003B9C18 "?"
 *   insn=0x00000000003B9C24 string=0x00000000003B9C28 "Z"
 *   insn=0x00000000003B9C2C string=0x00000000003B9C30 "%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::LevelState>>>>::_M_create_node(
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

