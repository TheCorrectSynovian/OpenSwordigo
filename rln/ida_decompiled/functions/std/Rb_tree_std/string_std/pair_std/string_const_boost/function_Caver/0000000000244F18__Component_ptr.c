/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000244F18
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsN5boost8functionIFPN5Caver9ComponentEvEEEESt10_Select1stIS9_ESt4lessISsESaIS9_EE14_M_create_nodeERKS9_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_create_node(std::pair<std::string const,boost::function<Caver::Component * ()(void)>> const&)
 *
 * Callers: 1
 *   0x00000000001F4570  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_create_node(std::pair<std::string const,boost::function<Caver::Component * ()(void)>> const&)
 *
 * Callees: 15
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000002020E0  std::__uninitialized_copy<false>::__uninit_copy<std::string *,std::string *>(std::string *,std::string *,std::string *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x00000000002030C0  boost::function0<Caver::Component *>::move_assign(boost::function0<Caver::Component *>&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 161
 *   insn=0x0000000000244F28 string=0x0000000000244F2C "V"
 *   insn=0x0000000000244F40 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000244F44 string=0x0000000000244F48 "u"
 *   insn=0x0000000000244F50 string=0x0000000000244F54 "u"
 *   insn=0x0000000000244F60 string=0x0000000000244F64 "h"
 *   insn=0x0000000000244F64 string=0x0000000000244F68 ""
 *   insn=0x0000000000244F68 string=0x0000000000244F6C ""
 *   insn=0x0000000000244F6C string=0x0000000000244F70 ""
 *   insn=0x0000000000244F74 string=0x0000000000244F78 "a"
 *   insn=0x0000000000244F88 string=0x0000000000244F8C "h""
 *   insn=0x0000000000244F90 string=0x0000000000244F94 "`"
 *   insn=0x0000000000244FC0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000244FC4 string=0x0000000000244FC8 "\n%"
 *   insn=0x0000000000244FC8 string=0x0000000000244FCC "J"
 *   insn=0x0000000000244FD0 string=0x0000000000244FD4 "(a"
 *   insn=0x0000000000244FDC string=0x0000000000244FE0 "\n%"
 *   insn=0x0000000000244FE0 string=0x0000000000244FE4 "J=G"
 *   insn=0x0000000000244FE4 string=0x0000000000244FE8 ")!"
 *   insn=0x0000000000244FE8 string=0x0000000000244FEC "j"
 *   insn=0x0000000000244FEC string=0x0000000000244FF0 "*"
 *   insn=0x0000000000244FEC string=0x0000000000245018 "*"
 *   insn=0x0000000000244FF0 string=0x0000000000244FF4 "K"
 *   insn=0x0000000000244FF4 string=0x0000000000244FF8 "+"
 *   insn=0x0000000000244FFC string=0x0000000000245000 "_"
 *   insn=0x0000000000245010 string=0x0000000000245014 ""
 *   insn=0x0000000000245018 string=0x000000000024501C "K"
 *   insn=0x000000000024501C string=0x0000000000245020 "+"
 *   insn=0x0000000000245020 string=0x0000000000245024 "_"
 *   insn=0x0000000000245024 string=0x0000000000245028 ""
 *   insn=0x0000000000245034 string=0x0000000000245038 "j"
 *   insn=0x0000000000245038 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000245040 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000245048 string=0x000000000024504C "Q"
 *   insn=0x000000000024504C string=0x00000000001FD590 "0'"
 *   insn=0x000000000024506C string=0x0000000000245070 "U"
 *   insn=0x0000000000245094 string=0x0000000000245098 "\n"
 *   insn=0x00000000002450A0 string=0x00000000002450A4 ""
 *   insn=0x00000000002450B4 string=0x00000000002450B8 "h"
 *   insn=0x00000000002450B8 string=0x00000000002450BC "("
 *   insn=0x00000000002450BC string=0x00000000002450C0 ""
 *   insn=0x00000000002450C0 string=0x00000000002450C4 ""
 *   insn=0x00000000002450CC string=0x00000000002450D0 " !"
 *   insn=0x00000000002450F0 string=0x0000000000245108 "r"
 *   insn=0x0000000000245110 string=0x0000000000245114 "h"
 *   insn=0x0000000000245114 string=0x0000000000245118 "("
 *   insn=0x0000000000245118 string=0x000000000024511C ""
 *   insn=0x000000000024511C string=0x0000000000245120 ""
 *   insn=0x0000000000245128 string=0x000000000024512C " !"
 *   insn=0x0000000000245168 string=0x000000000024516C "H"
 *   insn=0x000000000024516C string=0x0000000000245170 "h"
 *   insn=0x000000000024516C string=0x0000000000245194 "h"
 *   insn=0x0000000000245174 string=0x0000000000245178 ""
 *   insn=0x0000000000245178 string=0x000000000024517C ""
 *   insn=0x0000000000245180 string=0x0000000000245184 "a""
 *   insn=0x0000000000245194 string=0x0000000000245198 ""
 *   insn=0x0000000000245198 string=0x000000000024519C ""
 *   insn=0x000000000024519C string=0x00000000002451A0 ""
 *   insn=0x00000000002451A0 string=0x00000000002451A4 ""
 *   insn=0x00000000002451A8 string=0x00000000002451AC "`""
 *   insn=0x00000000002451C4 string=0x00000000002451C8 "h"
 *   insn=0x00000000002451CC string=0x00000000002451D0 "`"
 *   insn=0x00000000002451E8 string=0x00000000002451EC "a"
 *   insn=0x00000000002451FC string=0x0000000000245200 "S$"
 *   insn=0x0000000000245220 string=0x0000000000245224 "Y"
 *   insn=0x0000000000245224 string=0x0000000000245228 "("
 *   insn=0x0000000000245240 string=0x0000000000245244 "@"
 *   insn=0x0000000000245258 string=0x000000000024525C "!"
 *   insn=0x0000000000245268 string=0x000000000024526C "\tA"
 *   insn=0x000000000024526C string=0x0000000000245270 ")"
 *   insn=0x0000000000245270 string=0x0000000000245274 "?"
 *   insn=0x0000000000245274 string=0x0000000000245278 "k"
 *   insn=0x0000000000245278 string=0x000000000024527C ")"
 *   insn=0x000000000024527C string=0x0000000000245280 "4"
 *   insn=0x0000000000245284 string=0x0000000000245288 "`""
 *   insn=0x0000000000245298 string=0x000000000024529C "s""
 *   insn=0x000000000024529C string=0x00000000002452A0 "L"
 *   insn=0x00000000002452B0 string=0x00000000002452B4 "\t%"
 *   insn=0x00000000002452B4 string=0x00000000002452B8 ")"
 *   insn=0x00000000002452C4 string=0x000000000024541C "("
 *   insn=0x00000000002452C8 string=0x00000000002452CC ")=G"
 *   insn=0x00000000002452CC string=0x00000000002452D0 "!"
 *   insn=0x00000000002452D4 string=0x00000000002452D8 "\t"
 *   insn=0x00000000002452D4 string=0x000000000024544C "\t"
 *   insn=0x00000000002452D8 string=0x00000000002452DC "*"
 *   insn=0x00000000002452DC string=0x00000000002452E0 "\n"
 *   insn=0x00000000002452E4 string=0x00000000002452E8 "\"
 *   insn=0x00000000002452E8 string=0x0000000000245458 "?"
 *   insn=0x00000000002452EC string=0x00000000002452F0 ""
 *   insn=0x00000000002452F0 string=0x00000000002452F4 ""
 *   insn=0x00000000002452F4 string=0x00000000002452F8 "\t"
 *   insn=0x00000000002452F8 string=0x00000000002452FC "("
 *   insn=0x00000000002452FC string=0x0000000000245300 "\n"
 *   insn=0x0000000000245304 string=0x0000000000245308 "_"
 *   insn=0x000000000024530C string=0x0000000000245310 ")"
 *   insn=0x0000000000245310 string=0x0000000000245314 "?"
 *   insn=0x0000000000245318 string=0x000000000024531C ":"
 *   insn=0x0000000000245320 string=0x0000000000245324 "H"
 *   insn=0x0000000000245324 string=0x0000000000245328 "H\n"
 *   insn=0x0000000000245328 string=0x000000000024532C "@"
 *   insn=0x0000000000245340 string=0x0000000000245344 ""
 *   insn=0x0000000000245344 string=0x0000000000245348 "x"
 *   insn=0x0000000000245354 string=0x0000000000245358 "t"
 *   insn=0x0000000000245368 string=0x000000000024536C "]"
 *   insn=0x000000000024537C string=0x0000000000245380 "X"
 *   insn=0x0000000000245390 string=0x0000000000245404 "v"
 *   insn=0x000000000024539C string=0x00000000002453A0 "{?G"
 *   insn=0x00000000002453AC string=0x00000000002453B0 "\t"
 *   insn=0x00000000002453AC string=0x00000000002453C4 "\t"
 *   insn=0x00000000002453B0 string=0x00000000002453B4 "*"
 *   insn=0x00000000002453B4 string=0x00000000002453B8 "\n"
 *   insn=0x00000000002453C0 string=0x00000000002453D0 "?"
 *   insn=0x00000000002453C4 string=0x00000000002453C8 "*"
 *   insn=0x00000000002453C8 string=0x00000000002453CC "\n"
 *   insn=0x00000000002453F0 string=0x00000000002453A8 "!"
 *   insn=0x00000000002453F8 string=0x00000000002453FC "A"
 *   insn=0x0000000000245404 string=0x0000000000245410 "h"
 *   insn=0x0000000000245424 string=0x0000000000245428 "!"
 *   insn=0x000000000024544C string=0x0000000000245450 "*"
 *   insn=0x0000000000245450 string=0x0000000000245454 "\n"
 *   insn=0x0000000000245478 string=0x000000000024547C "v"
 *   insn=0x000000000024547C string=0x0000000000245508 ""
 *   insn=0x00000000002454A4 string=0x00000000002454A8 "\t"
 *   insn=0x00000000002454A4 string=0x00000000002454C4 "\t"
 *   insn=0x00000000002454A8 string=0x00000000002454AC "*"
 *   insn=0x00000000002454AC string=0x00000000002454B0 "\n"
 *   insn=0x00000000002454B4 string=0x00000000002454B8 "?"
 *   insn=0x00000000002454C4 string=0x00000000002454C8 "*"
 *   insn=0x00000000002454C8 string=0x00000000002454CC "\n"
 *   insn=0x00000000002454CC string=0x00000000002454D0 "?"
 *   insn=0x00000000002454F0 string=0x00000000002454A0 "!"
 *   insn=0x00000000002454F8 string=0x00000000002454FC "A"
 *   insn=0x0000000000245508 string=0x000000000024550C "\t%"
 *   insn=0x000000000024550C string=0x0000000000245510 ")"
 *   insn=0x0000000000245520 string=0x0000000000245524 ")=G"
 *   insn=0x0000000000245524 string=0x0000000000245528 "!"
 *   insn=0x000000000024552C string=0x0000000000245530 "\t"
 *   insn=0x000000000024552C string=0x000000000024555C "\t"
 *   insn=0x0000000000245530 string=0x0000000000245534 "*"
 *   insn=0x0000000000245534 string=0x0000000000245538 "\n"
 *   insn=0x000000000024553C string=0x0000000000245540 "?"
 *   insn=0x0000000000245540 string=0x0000000000245544 "l"
 *   insn=0x0000000000245550 string=0x0000000000245554 "W"
 *   insn=0x000000000024555C string=0x0000000000245560 "*"
 *   insn=0x0000000000245560 string=0x0000000000245564 "\n"
 *   insn=0x0000000000245564 string=0x0000000000245568 "?"
 *   insn=0x0000000000245584 string=0x0000000000245588 "\t%"
 *   insn=0x0000000000245588 string=0x000000000024558C ")"
 *   insn=0x00000000002455A0 string=0x00000000002455A4 ")=G"
 *   insn=0x00000000002455A4 string=0x00000000002455A8 "!"
 *   insn=0x00000000002455A8 string=0x00000000002455AC "i"
 *   insn=0x00000000002455AC string=0x00000000002455B0 "\t"
 *   insn=0x00000000002455AC string=0x00000000002455D8 "\t"
 *   insn=0x00000000002455B0 string=0x00000000002455B4 "*"
 *   insn=0x00000000002455B4 string=0x00000000002455B8 "\n"
 *   insn=0x00000000002455BC string=0x00000000002455C0 "?"
 *   insn=0x00000000002455C0 string=0x00000000002455C4 "l"
 *   insn=0x00000000002455C8 string=0x00000000002455CC "v"
 *   insn=0x00000000002455D8 string=0x00000000002455DC "*"
 *   insn=0x00000000002455DC string=0x00000000002455E0 "\n"
 *   insn=0x00000000002455E0 string=0x00000000002455E4 "?"
 *   insn=0x00000000002455E4 string=0x00000000002455E8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_create_node(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // x19
  __int64 v4; // x8

  _ReadStatusReg(TPIDR_EL0);
  v3 = operator new(0x48u);
  sub_56A528(v3 + 32, a2);
  *(_QWORD *)(v3 + 40) = 0;
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 )
  {
    *(_QWORD *)(v3 + 40) = v4;
    if ( (v4 & 1) != 0 )
    {
      *(_QWORD *)(v3 + 64) = *(_QWORD *)(a2 + 32);
      *(_OWORD *)(v3 + 48) = *(_OWORD *)(a2 + 16);
    }
    else
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(v4 & 0xFFFFFFFFFFFFFFFELL))(a2 + 16, v3 + 48, 0);
    }
  }
  return v3;
}

