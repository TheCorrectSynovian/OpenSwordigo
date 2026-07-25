/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000434110
 * Mangled: _ZNSt8_Rb_treeISsSt4pairIKSsSt6vectorIN5Caver10QuestsView10LabelGroupESaIS5_EEESt10_Select1stIS8_ESt4lessISsESaIS8_EE14_M_create_nodeERKS8_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::_M_create_node(std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>> const&)
 *
 * Callers: 1
 *   0x0000000000203800  std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,std::_Select1st<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>>>::_M_create_node(std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>> const&)
 *
 * Callees: 14
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FADD0  Caver::QuestsView::LabelGroup::~LabelGroup()
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000002011B0  std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup const*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup*>(__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup const*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup const*,std::vector<Caver::QuestsView::LabelGroup,std::allocator<Caver::QuestsView::LabelGroup>>>,Caver::QuestsView::LabelGroup*)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 91
 *   insn=0x0000000000434124 string=0x0000000000434128 "V"
 *   insn=0x0000000000434138 string=0x000000000043413C ")"
 *   insn=0x000000000043413C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000434140 string=0x0000000000434144 "t"
 *   insn=0x0000000000434158 string=0x0000000000434164 "("
 *   insn=0x000000000043416C string=0x0000000000434170 "\n"
 *   insn=0x0000000000434174 string=0x0000000000434178 "X}\t"
 *   insn=0x0000000000434180 string=0x0000000000434184 "i"
 *   insn=0x0000000000434194 string=0x0000000000434198 """
 *   insn=0x0000000000434198 string=0x00000000004341FC "&"
 *   insn=0x00000000004341B4 string=0x00000000004341B8 ""
 *   insn=0x00000000004341B8 string=0x00000000004341BC "b"
 *   insn=0x00000000004341BC string=0x00000000004341C0 "h"
 *   insn=0x00000000004341C4 string=0x00000000004341C8 "`"
 *   insn=0x00000000004341D8 string=0x00000000004341F8 "6"
 *   insn=0x00000000004341F8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000043420C string=0x0000000000434210 "h"
 *   insn=0x0000000000434214 string=0x0000000000434218 "&"
 *   insn=0x0000000000434218 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000434220 string=0x0000000000434224 ")"
 *   insn=0x0000000000434234 string=0x0000000000434238 ")=G"
 *   insn=0x0000000000434238 string=0x000000000043423C "!"
 *   insn=0x000000000043423C string=0x0000000000434240 "I"
 *   insn=0x0000000000434240 string=0x0000000000434244 "\t"
 *   insn=0x0000000000434240 string=0x0000000000434268 "\t"
 *   insn=0x0000000000434244 string=0x0000000000434248 "*"
 *   insn=0x0000000000434248 string=0x000000000043424C "\n"
 *   insn=0x0000000000434250 string=0x0000000000434254 "?"
 *   insn=0x0000000000434254 string=0x0000000000434258 "l"
 *   insn=0x000000000043425C string=0x0000000000434260 "Q"
 *   insn=0x0000000000434260 string=0x0000000000434264 ""
 *   insn=0x0000000000434268 string=0x000000000043426C "*"
 *   insn=0x000000000043426C string=0x0000000000434270 "\n"
 *   insn=0x0000000000434270 string=0x0000000000434274 "?"
 *   insn=0x0000000000434274 string=0x0000000000434278 "-"
 *   insn=0x0000000000434288 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000043428C string=0x0000000000434290 ""
 *   insn=0x0000000000434290 string=0x0000000000434294 "7:"
 *   insn=0x000000000043429C string=0x00000000001FD590 "0'"
 *   insn=0x00000000004342A4 string=0x00000000004342A8 ")h"
 *   insn=0x00000000004342CC string=0x00000000004342D0 "@"
 *   insn=0x00000000004342E4 string=0x00000000004342E8 " "
 *   insn=0x00000000004342F0 string=0x00000000004342F4 ""
 *   insn=0x00000000004342F0 string=0x0000000000434300 ""
 *   insn=0x000000000043430C string=0x0000000000434310 "I"
 *   insn=0x0000000000434310 string=0x0000000000434314 "@"
 *   insn=0x000000000043431C string=0x0000000000434320 "l"
 *   insn=0x0000000000434324 string=0x0000000000434328 "l"
 *   insn=0x000000000043432C string=0x000000000043433C "A"
 *   insn=0x0000000000434340 string=0x0000000000434344 "kA"
 *   insn=0x0000000000434348 string=0x000000000043434C "(A"
 *   insn=0x000000000043434C string=0x0000000000434350 ""
 *   insn=0x0000000000434350 string=0x0000000000434354 ""
 *   insn=0x0000000000434370 string=0x0000000000434374 "\t"
 *   insn=0x0000000000434374 string=0x0000000000434378 ")"
 *   insn=0x0000000000434378 string=0x000000000043437C "\t"
 *   insn=0x0000000000434390 string=0x0000000000434394 "\t"
 *   insn=0x0000000000434394 string=0x0000000000434398 ")"
 *   insn=0x0000000000434398 string=0x000000000043439C "\t"
 *   insn=0x00000000004343AC string=0x00000000004343B0 "a"
 *   insn=0x00000000004343E8 string=0x00000000004343EC "y"
 *   insn=0x00000000004343EC string=0x00000000001FADD0 "0'"
 *   insn=0x00000000004343F0 string=0x00000000004343F4 "s"
 *   insn=0x0000000000434404 string=0x0000000000434408 "b$"
 *   insn=0x000000000043440C string=0x0000000000434410 "-5"
 *   insn=0x0000000000434438 string=0x000000000043443C " "
 *   insn=0x0000000000434444 string=0x0000000000434454 ""
 *   insn=0x0000000000434448 string=0x000000000043444C ""
 *   insn=0x000000000043444C string=0x0000000000434450 "d"
 *   insn=0x000000000043444C string=0x000000000043450C "b"
 *   insn=0x0000000000434454 string=0x0000000000434458 "`"
 *   insn=0x0000000000434458 string=0x000000000043445C "h\n"
 *   insn=0x0000000000434460 string=0x0000000000434464 "?"
 *   insn=0x0000000000434468 string=0x000000000043446C "*A"
 *   insn=0x0000000000434468 string=0x00000000004344B8 "`"
 *   insn=0x0000000000434478 string=0x000000000043447C "m"
 *   insn=0x0000000000434480 string=0x0000000000434484 "m"
 *   insn=0x000000000043449C string=0x00000000004344A0 "kA"
 *   insn=0x00000000004344A4 string=0x00000000004344A8 "H"
 *   insn=0x00000000004344A8 string=0x00000000004344AC ""
 *   insn=0x00000000004344AC string=0x00000000004344B0 ""
 *   insn=0x00000000004344BC string=0x00000000004344C0 "h"
 *   insn=0x00000000004344C4 string=0x00000000004344C8 "h"
 *   insn=0x00000000004344CC string=0x00000000004344D0 "\t"
 *   insn=0x00000000004344D0 string=0x00000000004344D4 ")"
 *   insn=0x00000000004344D4 string=0x00000000004344D8 "\t"
 *   insn=0x00000000004344DC string=0x00000000004344E0 "h"
 *   insn=0x00000000004344E4 string=0x00000000004344E8 "h"
 *   insn=0x00000000004344EC string=0x00000000004344F0 "\t"
 *   insn=0x00000000004344F0 string=0x00000000004344F4 ")"
 *   insn=0x00000000004344F4 string=0x00000000004344F8 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup>>,std::_Select1st<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Caver::QuestsView::LabelGroup>>>>::_M_create_node(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // x19
  __int64 v4; // x2
  __int64 v5; // x0
  __int64 v6; // x1
  unsigned __int64 v7; // x24
  __int64 v8; // x2
  __int64 v9; // x0

  _ReadStatusReg(TPIDR_EL0);
  v3 = (_QWORD *)operator new(0x40u);
  sub_56A528(v3 + 4, a2);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)(a2 + 16);
  v3[5] = 0;
  v7 = 0x6DB6DB6DB6DB6DB7LL * ((v6 - v5) >> 3);
  v3[6] = 0;
  v3[7] = 0;
  if ( v6 == v5 )
  {
    v8 = 0;
  }
  else
  {
    if ( v7 >= 0x492492492492493LL )
      sub_565294(v5, v6, v4);
    v8 = operator new(v6 - v5);
  }
  v3[5] = v8;
  v3[6] = v8;
  v3[7] = v8 + 56 * v7;
  std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<Caver::QuestsView::LabelGroup const*,std::vector<Caver::QuestsView::LabelGroup>>,Caver::QuestsView::LabelGroup*>();
  v3[6] = v9;
  return v3;
}

