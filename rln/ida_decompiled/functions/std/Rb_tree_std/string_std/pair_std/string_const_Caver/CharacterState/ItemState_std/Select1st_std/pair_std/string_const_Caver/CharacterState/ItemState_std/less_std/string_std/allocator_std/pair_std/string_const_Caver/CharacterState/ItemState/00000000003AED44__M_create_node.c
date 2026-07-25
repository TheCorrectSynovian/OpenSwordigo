/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AED44
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5Caver14CharacterState9ItemStateEESt10_Select1stIS5_ESt4lessISsESaIS5_EE14_M_create_nodeERKS5_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_create_node(std::pair<std::string const,Caver::CharacterState::ItemState> const&)
 *
 * Callers: 1
 *   0x00000000001F70E0  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_create_node(std::pair<std::string const,Caver::CharacterState::ItemState> const&)
 *
 * Callees: 10
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 130
 *   insn=0x00000000003AED54 string=0x00000000003AED58 """
 *   insn=0x00000000003AED58 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003AED5C string=0x00000000003AED60 "`"
 *   insn=0x00000000003AED6C string=0x00000000003AED70 "h"
 *   insn=0x00000000003AED74 string=0x00000000003AED78 "h"
 *   insn=0x00000000003AED7C string=0x00000000003AED80 "\t"
 *   insn=0x00000000003AED80 string=0x00000000003AED84 ")"
 *   insn=0x00000000003AED84 string=0x00000000003AED88 "\t"
 *   insn=0x00000000003AED94 string=0x00000000003AED98 "h:"
 *   insn=0x00000000003AEDA4 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003AEDA8 string=0x00000000003AEDAC "A!"
 *   insn=0x00000000003AEDAC string=0x00000000003AEDB0 "pO"
 *   insn=0x00000000003AEDAC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003AEDB8 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003AEDC0 string=0x00000000003AEDC4 "b}"
 *   insn=0x00000000003AEDEC string=0x00000000003AEDF0 "?"
 *   insn=0x00000000003AEDF8 string=0x00000000003AEDFC "_"
 *   insn=0x00000000003AEDFC string=0x00000000003AEE00 "*"
 *   insn=0x00000000003AEE00 string=0x00000000003AEE04 "+)"
 *   insn=0x00000000003AEE08 string=0x00000000003AEE0C "K"
 *   insn=0x00000000003AEE08 string=0x00000000003AEE18 ")A"
 *   insn=0x00000000003AEE0C string=0x00000000003AEE10 "k"
 *   insn=0x00000000003AEE10 string=0x00000000003AEE14 "K"
 *   insn=0x00000000003AEE24 string=0x00000000003AEE34 "\t"
 *   insn=0x00000000003AEE28 string=0x00000000003AEE2C ")"
 *   insn=0x00000000003AEE34 string=0x00000000003AEE38 "?"
 *   insn=0x00000000003AEE38 string=0x00000000003AEE3C "+"
 *   insn=0x00000000003AEE3C string=0x00000000003AEE40 ")"
 *   insn=0x00000000003AEE40 string=0x00000000003AEE44 "7"
 *   insn=0x00000000003AEE48 string=0x00000000003AEE4C "\t"
 *   insn=0x00000000003AEE4C string=0x00000000003AEE50 "\n@"
 *   insn=0x00000000003AEE54 string=0x00000000003AEE58 "K"
 *   insn=0x00000000003AEE58 string=0x00000000003AEE5C "k"
 *   insn=0x00000000003AEE5C string=0x00000000003AEE60 "K"
 *   insn=0x00000000003AEE64 string=0x00000000003AEE68 "\t)"
 *   insn=0x00000000003AEE68 string=0x00000000003AEE6C "5"
 *   insn=0x00000000003AEE70 string=0x00000000003AEE74 ""
 *   insn=0x00000000003AEE80 string=0x00000000003AEE84 "\t@"
 *   insn=0x00000000003AEE90 string=0x00000000003AEE94 ""
 *   insn=0x00000000003AEEA0 string=0x00000000003AEEA4 "@"
 *   insn=0x00000000003AEEC0 string=0x00000000003AEED0 "u"
 *   insn=0x00000000003AEEC4 string=0x00000000003AEEC8 ""
 *   insn=0x00000000003AEED0 string=0x00000000003AEED4 "vR"
 *   insn=0x00000000003AEED4 string=0x00000000003AEED8 "5"
 *   insn=0x00000000003AEED8 string=0x00000000003AEF1C "t"
 *   insn=0x00000000003AEEDC string=0x00000000003AEEE0 ""
 *   insn=0x00000000003AEEEC string=0x00000000003AEEF0 "\t@"
 *   insn=0x00000000003AEEFC string=0x00000000003AEF00 ""
 *   insn=0x00000000003AEF0C string=0x00000000003AEF10 "@"
 *   insn=0x00000000003AEF20 string=0x00000000003AEF24 ""
 *   insn=0x00000000003AEF34 string=0x00000000003AEF38 "\t@"
 *   insn=0x00000000003AEF40 string=0x00000000003AEF44 ""
 *   insn=0x00000000003AEF6C string=0x00000000003AEF70 " "
 *   insn=0x00000000003AEF74 string=0x00000000003AEF78 "("
 *   insn=0x00000000003AEF78 string=0x00000000003AEF7C ""
 *   insn=0x00000000003AEF7C string=0x00000000003AEF80 "\t"
 *   insn=0x00000000003AEF80 string=0x00000000003AEF84 "("
 *   insn=0x00000000003AEF84 string=0x00000000003AEF88 "\n"
 *   insn=0x00000000003AEF8C string=0x00000000003AEF90 "_"
 *   insn=0x00000000003AEF94 string=0x00000000003AEF98 ")"
 *   insn=0x00000000003AEF98 string=0x00000000003AEF9C "?"
 *   insn=0x00000000003AEFA0 string=0x00000000003AEFA4 "7"
 *   insn=0x00000000003AEFB0 string=0x00000000003AF140 "U"
 *   insn=0x00000000003AEFC8 string=0x00000000003AEFCC "i"
 *   insn=0x00000000003AEFCC string=0x00000000003AEFD0 ")"
 *   insn=0x00000000003AEFD4 string=0x00000000003AEFD8 "("
 *   insn=0x00000000003AEFDC string=0x00000000003AEFE0 "("
 *   insn=0x00000000003AEFE4 string=0x00000000003AEFE8 "\t"
 *   insn=0x00000000003AEFE8 string=0x00000000003AEFEC ")"
 *   insn=0x00000000003AEFEC string=0x00000000003AEFF0 "\t"
 *   insn=0x00000000003AF004 string=0x00000000003AF008 "hB"
 *   insn=0x00000000003AF00C string=0x00000000003AF010 "K"
 *   insn=0x00000000003AF018 string=0x00000000003AF01C "K"
 *   insn=0x00000000003AF024 string=0x00000000003AF028 "l"
 *   insn=0x00000000003AF024 string=0x00000000003AF034 "JA"
 *   insn=0x00000000003AF02C string=0x00000000003AF030 "l"
 *   insn=0x00000000003AF034 string=0x00000000003AF038 "_"
 *   insn=0x00000000003AF038 string=0x00000000003AF03C ")A"
 *   insn=0x00000000003AF03C string=0x00000000003AF040 "a"
 *   insn=0x00000000003AF040 string=0x00000000003AF044 ""
 *   insn=0x00000000003AF044 string=0x00000000003AF048 ""
 *   insn=0x00000000003AF04C string=0x00000000003AF050 "A"
 *   insn=0x00000000003AF058 string=0x00000000003AF05C "?"
 *   insn=0x00000000003AF060 string=0x00000000003AF064 "(C"
 *   insn=0x00000000003AF06C string=0x00000000003AF070 "K"
 *   insn=0x00000000003AF070 string=0x00000000003AF074 "+"
 *   insn=0x00000000003AF074 string=0x00000000003AF078 "K"
 *   insn=0x00000000003AF078 string=0x00000000003AF07C "+"
 *   insn=0x00000000003AF080 string=0x00000000003AF084 "l"
 *   insn=0x00000000003AF080 string=0x00000000003AF090 "JA"
 *   insn=0x00000000003AF088 string=0x00000000003AF08C "l"
 *   insn=0x00000000003AF090 string=0x00000000003AF094 "_"
 *   insn=0x00000000003AF094 string=0x00000000003AF098 ")A"
 *   insn=0x00000000003AF09C string=0x00000000003AF0A0 ""
 *   insn=0x00000000003AF0A0 string=0x00000000003AF0A4 ""
 *   insn=0x00000000003AF0A4 string=0x00000000003AF0A8 ""
 *   insn=0x00000000003AF0B4 string=0x00000000003AF110 "v"
 *   insn=0x00000000003AF0B8 string=0x00000000003AF0BC "3"
 *   insn=0x00000000003AF0BC string=0x00000000003AF0C0 "h"
 *   insn=0x00000000003AF0C0 string=0x00000000003AF0C4 ""
 *   insn=0x00000000003AF0C4 string=0x00000000003AF0C8 "h"
 *   insn=0x00000000003AF0CC string=0x00000000003AF0D0 "h"
 *   insn=0x00000000003AF0D4 string=0x00000000003AF0D8 "\t@"
 *   insn=0x00000000003AF0DC string=0x00000000003AF0E0 "h\n@"
 *   insn=0x00000000003AF0E0 string=0x00000000003AF0E4 ""
 *   insn=0x00000000003AF0E4 string=0x00000000003AF0E8 "h\n"
 *   insn=0x00000000003AF0EC string=0x00000000003AF0F0 "h"
 *   insn=0x00000000003AF0F4 string=0x00000000003AF0F8 "@"
 *   insn=0x00000000003AF100 string=0x00000000003AF104 "?"
 *   insn=0x00000000003AF114 string=0x00000000003AF118 "f "
 *   insn=0x00000000003AF150 string=0x00000000003AF154 "4"
 *   insn=0x00000000003AF158 string=0x00000000003AF15C ""
 *   insn=0x00000000003AF168 string=0x00000000003AF16C "\t@"
 *   insn=0x00000000003AF178 string=0x00000000003AF17C ""
 *   insn=0x00000000003AF188 string=0x00000000003AF18C "@"
 *   insn=0x00000000003AF19C string=0x00000000003AF1A0 "k|"
 *   insn=0x00000000003AF1E4 string=0x00000000003AF1E8 "@"
 *   insn=0x00000000003AF1EC string=0x00000000003AF1F0 ""
 *   insn=0x00000000003AF1FC string=0x00000000001F5190 "P'"
 *   insn=0x00000000003AF200 string=0x00000000003AF204 "@"
 *   insn=0x00000000003AF204 string=0x00000000003AF208 "Hc"
 *   insn=0x00000000003AF204 string=0x00000000003AF22C "HC"
 *   insn=0x00000000003AF210 string=0x00000000003AF214 "\n"
 *   insn=0x00000000003AF258 string=0x00000000003AF25C ""
 *   insn=0x00000000003AF25C string=0x00000000003AF260 ")"
 *   insn=0x00000000003AF264 string=0x00000000003AF268 """
 *   insn=0x00000000003AF26C string=0x00000000003AF270 "`"
 *   insn=0x00000000003AF270 string=0x00000000003AF274 "@"
 *   insn=0x00000000003AF274 string=0x00000000003AF278 "\n"
 *   insn=0x00000000003AF294 string=0x00000000003AF298 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::_M_create_node(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // x19
  __int64 v4; // x8
  __int64 result; // x0

  v3 = operator new(0x40u);
  sub_56A528(v3 + 32, a2);
  *(_QWORD *)(v3 + 40) = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v3 + 48) = v4;
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  result = v3;
  *(_DWORD *)(v3 + 56) = *(_DWORD *)(a2 + 24);
  return result;
}

