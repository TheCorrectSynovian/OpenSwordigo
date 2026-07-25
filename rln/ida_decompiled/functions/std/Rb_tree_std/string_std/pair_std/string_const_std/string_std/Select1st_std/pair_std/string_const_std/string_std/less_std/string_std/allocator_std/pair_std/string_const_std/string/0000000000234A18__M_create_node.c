/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000234A18
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsSsESt10_Select1stIS2_ESt4lessISsESaIS2_EE14_M_create_nodeERKS2_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_create_node(std::pair<std::string const,std::string> const&)
 *
 * Callers: 1
 *   0x00000000002037E0  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_create_node(std::pair<std::string const,std::string> const&)
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
 * Referenced strings: 37
 *   insn=0x0000000000234A28 string=0x0000000000234A2C "V"
 *   insn=0x0000000000234A40 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000234A44 string=0x0000000000234A48 "t"
 *   insn=0x0000000000234A54 string=0x0000000000234A58 "`"
 *   insn=0x0000000000234A8C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000234A94 string=0x0000000000234A98 "J"
 *   insn=0x0000000000234A9C string=0x0000000000234AA0 "(a"
 *   insn=0x0000000000234AAC string=0x0000000000234AB0 "J=G"
 *   insn=0x0000000000234AB0 string=0x0000000000234AB4 ")!"
 *   insn=0x0000000000234AB4 string=0x0000000000234AB8 "j"
 *   insn=0x0000000000234AB8 string=0x0000000000234ABC "*"
 *   insn=0x0000000000234AB8 string=0x0000000000234AE4 "*"
 *   insn=0x0000000000234ABC string=0x0000000000234AC0 "K"
 *   insn=0x0000000000234AC0 string=0x0000000000234AC4 "+"
 *   insn=0x0000000000234AC8 string=0x0000000000234ACC "_"
 *   insn=0x0000000000234AD8 string=0x0000000000234ADC "2"
 *   insn=0x0000000000234ADC string=0x0000000000234AE0 ""
 *   insn=0x0000000000234AE4 string=0x0000000000234AE8 "K"
 *   insn=0x0000000000234AE8 string=0x0000000000234AEC "+"
 *   insn=0x0000000000234AEC string=0x0000000000234AF0 "_"
 *   insn=0x0000000000234AF0 string=0x0000000000234AF4 ""
 *   insn=0x0000000000234B04 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000234B0C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000234B18 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000234B1C string=0x0000000000234B20 "i3"
 *   insn=0x0000000000234B20 string=0x0000000000234B24 "\nf"
 *   insn=0x0000000000234B30 string=0x0000000000234B34 ""
 *   insn=0x0000000000234B38 string=0x0000000000234B3C "J"
 *   insn=0x0000000000234B40 string=0x0000000000234B44 "a"
 *   insn=0x0000000000234B44 string=0x0000000000234B48 ""
 *   insn=0x0000000000234B48 string=0x0000000000234B4C "H"
 *   insn=0x0000000000234B5C string=0x0000000000234B60 " "
 *   insn=0x0000000000234B60 string=0x0000000000234B64 ""
 *   insn=0x0000000000234B64 string=0x0000000000234B68 "H"
 *   insn=0x0000000000234B68 string=0x0000000000234B6C "KA"
 *   insn=0x0000000000234B70 string=0x0000000000234B74 ""
 *   insn=0x0000000000234B90 string=0x0000000000234B94 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_create_node(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // x19

  _ReadStatusReg(TPIDR_EL0);
  v3 = operator new(0x30u);
  sub_56A528(v3 + 32, a2);
  sub_56A528(v3 + 40, a2 + 8);
  return v3;
}

