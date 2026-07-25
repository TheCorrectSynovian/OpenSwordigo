/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037FE8C
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver11AchievementEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::Achievement>> const&)
 *
 * Callers: 1
 *   0x0000000000203460  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::Achievement>> const&)
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
 * Referenced strings: 27
 *   insn=0x000000000037FEA0 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000037FEA4 string=0x000000000037FEA8 "`"
 *   insn=0x000000000037FEB4 string=0x000000000037FEB8 "h"
 *   insn=0x000000000037FEBC string=0x000000000037FEC0 "h"
 *   insn=0x000000000037FEC4 string=0x000000000037FEC8 "\t"
 *   insn=0x000000000037FEC8 string=0x000000000037FECC ")"
 *   insn=0x000000000037FECC string=0x000000000037FED0 "\t"
 *   insn=0x000000000037FEE4 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000037FEEC string=0x000000000037FEF0 " "
 *   insn=0x000000000037FEEC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000037FEF8 string=0x00000000001FD590 "0'"
 *   insn=0x000000000037FEFC string=0x000000000037FF00 "q"
 *   insn=0x000000000037FF48 string=0x000000000037FF4C "@"
 *   insn=0x000000000037FF50 string=0x000000000037FF54 ""
 *   insn=0x000000000037FF60 string=0x00000000001F5190 "P'"
 *   insn=0x000000000037FF64 string=0x000000000037FF68 "@"
 *   insn=0x000000000037FF68 string=0x000000000037FF6C "Hc"
 *   insn=0x000000000037FF68 string=0x000000000037FF90 "HC"
 *   insn=0x000000000037FF74 string=0x000000000037FF78 "\n"
 *   insn=0x000000000037FFBC string=0x000000000037FFC0 ""
 *   insn=0x000000000037FFC0 string=0x000000000037FFC4 ")"
 *   insn=0x000000000037FFC8 string=0x000000000037FFCC """
 *   insn=0x000000000037FFCC string=0x000000000037FFD0 "p"
 *   insn=0x000000000037FFD0 string=0x000000000037FFD4 "`"
 *   insn=0x000000000037FFD4 string=0x000000000037FFD8 "@"
 *   insn=0x000000000037FFD8 string=0x000000000037FFDC "\n"
 *   insn=0x000000000037FFF8 string=0x000000000037FFFC "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::_M_create_node(
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

