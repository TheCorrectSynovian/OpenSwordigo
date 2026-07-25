/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000211F78
 * Mangled: _ZN5Caver13PlayerProfileD2Ev
 * Demangled: Caver::PlayerProfile::~PlayerProfile()
 *
 * Callers: 1
 *   0x0000000000200020  Caver::PlayerProfile::~PlayerProfile()
 *
 * Callees: 8
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCA40  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,int>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 237
 *   insn=0x0000000000211F88 string=0x0000000000211F8C "U"
 *   insn=0x0000000000211F94 string=0x0000000000211F98 "`B"
 *   insn=0x0000000000211F9C string=0x0000000000211FA0 "aR@"
 *   insn=0x0000000000211FA4 string=0x0000000000211FA8 "tF@"
 *   insn=0x0000000000211FA4 string=0x00000000001FCA40 "0'"
 *   insn=0x0000000000211FA8 string=0x0000000000211FAC "4"
 *   insn=0x0000000000211FAC string=0x0000000000211FF0 "t>@"
 *   insn=0x0000000000211FB0 string=0x0000000000211FB4 ""
 *   insn=0x0000000000211FC0 string=0x0000000000211FC4 "\t@"
 *   insn=0x0000000000211FD0 string=0x0000000000211FD4 ""
 *   insn=0x0000000000211FE0 string=0x0000000000211FE4 "@"
 *   insn=0x0000000000211FF0 string=0x0000000000211FF4 "4"
 *   insn=0x0000000000211FF4 string=0x0000000000212038 "h2@"
 *   insn=0x0000000000211FF8 string=0x0000000000211FFC ""
 *   insn=0x0000000000212008 string=0x000000000021200C "\t@"
 *   insn=0x0000000000212018 string=0x000000000021201C ""
 *   insn=0x0000000000212028 string=0x000000000021202C "@"
 *   insn=0x000000000021204C string=0x0000000000212050 "h.@"
 *   insn=0x0000000000212058 string=0x000000000021205C "A"
 *   insn=0x000000000021205C string=0x0000000000212060 "h*@"
 *   insn=0x000000000021206C string=0x0000000000212070 "h&@"
 *   insn=0x000000000021207C string=0x0000000000212080 "h"
 *   insn=0x0000000000212088 string=0x000000000021208C "!"
 *   insn=0x000000000021208C string=0x0000000000212090 "h"
 *   insn=0x000000000021209C string=0x00000000002120A0 "h"
 *   insn=0x00000000002120A8 string=0x00000000002120AC "a"
 *   insn=0x00000000002120AC string=0x00000000002120B0 "`"
 *   insn=0x00000000002120B0 string=0x00000000002120B4 "@"
 *   insn=0x00000000002120B8 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002120E0 string=0x00000000002120E4 ")=G"
 *   insn=0x00000000002120E4 string=0x00000000002120E8 "!"
 *   insn=0x00000000002120EC string=0x00000000002120F0 "\t"
 *   insn=0x00000000002120EC string=0x00000000002121DC "\t"
 *   insn=0x00000000002120F0 string=0x00000000002120F4 "*"
 *   insn=0x00000000002120F4 string=0x00000000002120F8 "\n"
 *   insn=0x00000000002120FC string=0x0000000000212100 ":"
 *   insn=0x0000000000212100 string=0x00000000002121E8 "?"
 *   insn=0x0000000000212104 string=0x0000000000212108 ")=G"
 *   insn=0x0000000000212108 string=0x000000000021210C "!"
 *   insn=0x000000000021210C string=0x0000000000212110 "i"
 *   insn=0x0000000000212110 string=0x0000000000212114 "\t"
 *   insn=0x0000000000212110 string=0x00000000002121FC "\t"
 *   insn=0x0000000000212114 string=0x0000000000212118 "*"
 *   insn=0x0000000000212118 string=0x000000000021211C "\n"
 *   insn=0x0000000000212120 string=0x0000000000212124 "9"
 *   insn=0x0000000000212124 string=0x0000000000212208 "?"
 *   insn=0x0000000000212128 string=0x000000000021212C ")=G"
 *   insn=0x000000000021212C string=0x0000000000212130 "!"
 *   insn=0x0000000000212130 string=0x0000000000212134 "I"
 *   insn=0x0000000000212134 string=0x0000000000212138 "\t"
 *   insn=0x0000000000212134 string=0x000000000021221C "\t"
 *   insn=0x0000000000212138 string=0x000000000021213C "*"
 *   insn=0x000000000021213C string=0x0000000000212140 "\n"
 *   insn=0x0000000000212144 string=0x0000000000212148 "8"
 *   insn=0x0000000000212148 string=0x0000000000212228 "?"
 *   insn=0x000000000021214C string=0x0000000000212150 ")=G"
 *   insn=0x0000000000212150 string=0x0000000000212154 "!"
 *   insn=0x0000000000212154 string=0x0000000000212158 ")"
 *   insn=0x0000000000212158 string=0x000000000021215C "\t"
 *   insn=0x0000000000212158 string=0x000000000021223C "\t"
 *   insn=0x000000000021215C string=0x0000000000212160 "*"
 *   insn=0x0000000000212160 string=0x0000000000212164 "\n"
 *   insn=0x0000000000212168 string=0x000000000021216C "7"
 *   insn=0x000000000021216C string=0x0000000000212248 "?"
 *   insn=0x0000000000212170 string=0x0000000000212174 ")=G"
 *   insn=0x0000000000212174 string=0x0000000000212178 "!"
 *   insn=0x0000000000212178 string=0x000000000021217C "\t"
 *   insn=0x000000000021217C string=0x0000000000212180 "\t"
 *   insn=0x000000000021217C string=0x000000000021225C "\t"
 *   insn=0x0000000000212180 string=0x0000000000212184 "*"
 *   insn=0x0000000000212184 string=0x0000000000212188 "\n"
 *   insn=0x000000000021218C string=0x0000000000212190 "6"
 *   insn=0x0000000000212190 string=0x0000000000212268 "?"
 *   insn=0x0000000000212194 string=0x0000000000212198 ")=G"
 *   insn=0x0000000000212198 string=0x000000000021219C "!"
 *   insn=0x00000000002121A0 string=0x00000000002121A4 "\t"
 *   insn=0x00000000002121A0 string=0x000000000021227C "\t"
 *   insn=0x00000000002121A4 string=0x00000000002121A8 "*"
 *   insn=0x00000000002121A8 string=0x00000000002121AC "\n"
 *   insn=0x00000000002121B0 string=0x00000000002121B4 "5"
 *   insn=0x00000000002121B4 string=0x0000000000212288 "?"
 *   insn=0x00000000002121B8 string=0x00000000002121BC ")=G"
 *   insn=0x00000000002121BC string=0x00000000002121C0 "!"
 *   insn=0x00000000002121C4 string=0x00000000002121C8 "\t"
 *   insn=0x00000000002121C4 string=0x000000000021229C "\t"
 *   insn=0x00000000002121C8 string=0x00000000002121CC "*"
 *   insn=0x00000000002121CC string=0x00000000002121D0 "\n"
 *   insn=0x00000000002121D4 string=0x00000000002121D8 "4"
 *   insn=0x00000000002121D8 string=0x00000000002122A8 "?"
 *   insn=0x00000000002121DC string=0x00000000002121E0 "*"
 *   insn=0x00000000002121E0 string=0x00000000002121E4 "\n"
 *   insn=0x00000000002121E8 string=0x00000000002121EC ","
 *   insn=0x00000000002121F0 string=0x00000000002121F4 "l`"
 *   insn=0x00000000002121FC string=0x0000000000212200 "*"
 *   insn=0x0000000000212200 string=0x0000000000212204 "\n"
 *   insn=0x0000000000212210 string=0x0000000000212214 "d`"
 *   insn=0x000000000021221C string=0x0000000000212220 "*"
 *   insn=0x0000000000212220 string=0x0000000000212224 "\n"
 *   insn=0x0000000000212228 string=0x000000000021222C ","
 *   insn=0x0000000000212230 string=0x0000000000212234 "\`"
 *   insn=0x000000000021223C string=0x0000000000212240 "*"
 *   insn=0x0000000000212240 string=0x0000000000212244 "\n"
 *   insn=0x0000000000212250 string=0x0000000000212254 "T`"
 *   insn=0x000000000021225C string=0x0000000000212260 "*"
 *   insn=0x0000000000212260 string=0x0000000000212264 "\n"
 *   insn=0x0000000000212268 string=0x000000000021226C ","
 *   insn=0x0000000000212270 string=0x0000000000212274 "L`"
 *   insn=0x000000000021227C string=0x0000000000212280 "*"
 *   insn=0x0000000000212280 string=0x0000000000212284 "\n"
 *   insn=0x0000000000212290 string=0x0000000000212294 "D`"
 *   insn=0x000000000021229C string=0x00000000002122A0 "*"
 *   insn=0x00000000002122A0 string=0x00000000002122A4 "\n"
 *   insn=0x00000000002122A8 string=0x00000000002122AC ","
 *   insn=0x00000000002122B0 string=0x00000000002122B4 "<`"
 *   insn=0x00000000002122B4 string=0x00000000002122B8 "`"
 *   insn=0x00000000002122C4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002122C8 string=0x00000000002122CC "*"
 *   insn=0x00000000002122CC string=0x0000000000212374 "h2@"
 *   insn=0x00000000002122D0 string=0x00000000002122D4 "u>@"
 *   insn=0x00000000002122D8 string=0x00000000002122DC "&"
 *   insn=0x00000000002122E4 string=0x00000000002122E8 "5"
 *   insn=0x00000000002122E8 string=0x000000000021232C "u>@"
 *   insn=0x00000000002122EC string=0x00000000002122F0 ""
 *   insn=0x00000000002122FC string=0x0000000000212300 "\t@"
 *   insn=0x000000000021230C string=0x0000000000212310 ""
 *   insn=0x000000000021231C string=0x0000000000212320 "@"
 *   insn=0x000000000021232C string=0x0000000000212330 "5"
 *   insn=0x0000000000212334 string=0x0000000000212338 ""
 *   insn=0x0000000000212344 string=0x0000000000212348 "\t@"
 *   insn=0x0000000000212354 string=0x0000000000212358 ""
 *   insn=0x0000000000212364 string=0x0000000000212368 "@"
 *   insn=0x0000000000212384 string=0x0000000000212388 "A"
 *   insn=0x0000000000212388 string=0x000000000021238C "h.@"
 *   insn=0x0000000000212398 string=0x000000000021239C "h*@"
 *   insn=0x00000000002123A8 string=0x00000000002123AC "h&@"
 *   insn=0x00000000002123B4 string=0x00000000002123B8 "!"
 *   insn=0x00000000002123B8 string=0x00000000002123BC "h"
 *   insn=0x00000000002123C8 string=0x00000000002123CC "h"
 *   insn=0x00000000002123D4 string=0x00000000002123D8 "a"
 *   insn=0x00000000002123D8 string=0x00000000002123DC "h"
 *   insn=0x00000000002123E8 string=0x000000000021241C "`"
 *   insn=0x00000000002123EC string=0x00000000002123F0 ")=G"
 *   insn=0x00000000002123F0 string=0x00000000002123F4 "!"
 *   insn=0x00000000002123F8 string=0x00000000002123FC "\t"
 *   insn=0x00000000002123F8 string=0x00000000002125C8 "\t"
 *   insn=0x00000000002123FC string=0x0000000000212400 "*"
 *   insn=0x0000000000212400 string=0x0000000000212404 "\n"
 *   insn=0x0000000000212408 string=0x000000000021240C "?"
 *   insn=0x000000000021240C string=0x0000000000212410 "l"
 *   insn=0x000000000021241C string=0x0000000000212420 "@"
 *   insn=0x0000000000212428 string=0x000000000021242C "&"
 *   insn=0x0000000000212430 string=0x0000000000212434 ")=G"
 *   insn=0x0000000000212434 string=0x0000000000212438 "!"
 *   insn=0x0000000000212438 string=0x000000000021243C "i"
 *   insn=0x000000000021243C string=0x0000000000212440 "\t"
 *   insn=0x000000000021243C string=0x0000000000212508 "\t"
 *   insn=0x0000000000212440 string=0x0000000000212444 "*"
 *   insn=0x0000000000212444 string=0x0000000000212448 "\n"
 *   insn=0x000000000021244C string=0x0000000000212450 "1"
 *   insn=0x0000000000212450 string=0x0000000000212514 "?"
 *   insn=0x0000000000212454 string=0x0000000000212458 ")=G"
 *   insn=0x0000000000212458 string=0x000000000021245C "!"
 *   insn=0x000000000021245C string=0x0000000000212460 "I"
 *   insn=0x0000000000212460 string=0x0000000000212464 "\t"
 *   insn=0x0000000000212460 string=0x0000000000212528 "\t"
 *   insn=0x0000000000212464 string=0x0000000000212468 "*"
 *   insn=0x0000000000212468 string=0x000000000021246C "\n"
 *   insn=0x0000000000212470 string=0x0000000000212474 "0"
 *   insn=0x0000000000212474 string=0x0000000000212534 "?"
 *   insn=0x0000000000212478 string=0x000000000021247C ")=G"
 *   insn=0x000000000021247C string=0x0000000000212480 "!"
 *   insn=0x0000000000212480 string=0x0000000000212484 ")"
 *   insn=0x0000000000212484 string=0x0000000000212488 "\t"
 *   insn=0x0000000000212484 string=0x0000000000212548 "\t"
 *   insn=0x0000000000212488 string=0x000000000021248C "*"
 *   insn=0x000000000021248C string=0x0000000000212490 "\n"
 *   insn=0x0000000000212494 string=0x0000000000212498 "/"
 *   insn=0x0000000000212498 string=0x0000000000212554 "?"
 *   insn=0x000000000021249C string=0x00000000002124A0 ")=G"
 *   insn=0x00000000002124A0 string=0x00000000002124A4 "!"
 *   insn=0x00000000002124A4 string=0x00000000002124A8 "\t"
 *   insn=0x00000000002124A8 string=0x00000000002124AC "\t"
 *   insn=0x00000000002124A8 string=0x0000000000212568 "\t"
 *   insn=0x00000000002124AC string=0x00000000002124B0 "*"
 *   insn=0x00000000002124B0 string=0x00000000002124B4 "\n"
 *   insn=0x00000000002124B8 string=0x00000000002124BC "."
 *   insn=0x00000000002124BC string=0x0000000000212574 "?"
 *   insn=0x00000000002124C0 string=0x00000000002124C4 ")=G"
 *   insn=0x00000000002124C4 string=0x00000000002124C8 "!"
 *   insn=0x00000000002124CC string=0x00000000002124D0 "\t"
 *   insn=0x00000000002124CC string=0x0000000000212588 "\t"
 *   insn=0x00000000002124D0 string=0x00000000002124D4 "*"
 *   insn=0x00000000002124D4 string=0x00000000002124D8 "\n"
 *   insn=0x00000000002124DC string=0x00000000002124E0 "-"
 *   insn=0x00000000002124E0 string=0x0000000000212594 "?"
 *   insn=0x00000000002124E4 string=0x00000000002124E8 ")=G"
 *   insn=0x00000000002124E8 string=0x00000000002124EC "!"
 *   insn=0x00000000002124F0 string=0x00000000002124F4 "\t"
 *   insn=0x00000000002124F0 string=0x00000000002125A8 "\t"
 *   insn=0x00000000002124F4 string=0x00000000002124F8 "*"
 *   insn=0x00000000002124F8 string=0x00000000002124FC "\n"
 *   insn=0x0000000000212500 string=0x0000000000212504 ","
 *   insn=0x0000000000212504 string=0x00000000002125B4 "?"
 *   insn=0x0000000000212508 string=0x000000000021250C "*"
 *   insn=0x000000000021250C string=0x0000000000212510 "\n"
 *   insn=0x0000000000212528 string=0x000000000021252C "*"
 *   insn=0x000000000021252C string=0x0000000000212530 "\n"
 *   insn=0x0000000000212534 string=0x0000000000212538 ","
 *   insn=0x0000000000212548 string=0x000000000021254C "*"
 *   insn=0x000000000021254C string=0x0000000000212550 "\n"
 *   insn=0x0000000000212568 string=0x000000000021256C "*"
 *   insn=0x000000000021256C string=0x0000000000212570 "\n"
 *   insn=0x0000000000212574 string=0x0000000000212578 ","
 *   insn=0x0000000000212588 string=0x000000000021258C "*"
 *   insn=0x000000000021258C string=0x0000000000212590 "\n"
 *   insn=0x00000000002125A8 string=0x00000000002125AC "*"
 *   insn=0x00000000002125AC string=0x00000000002125B0 "\n"
 *   insn=0x00000000002125B4 string=0x00000000002125B8 ","
 *   insn=0x00000000002125BC string=0x00000000002125C0 "y_"
 *   insn=0x00000000002125C8 string=0x00000000002125CC "*"
 *   insn=0x00000000002125CC string=0x00000000002125D0 "\n"
 *   insn=0x00000000002125D0 string=0x00000000002125D4 "?"
 *   insn=0x00000000002125F8 string=0x00000000002125FC "V"
 *   insn=0x000000000021260C string=0x0000000000212610 "4"
 *   insn=0x000000000021262C string=0x0000000000212630 "\t"
 *   insn=0x000000000021262C string=0x0000000000212644 "\t"
 *   insn=0x0000000000212630 string=0x0000000000212634 "*"
 *   insn=0x0000000000212634 string=0x0000000000212638 "\n"
 *   insn=0x0000000000212640 string=0x0000000000212650 "?"
 *   insn=0x0000000000212644 string=0x0000000000212648 "*"
 *   insn=0x0000000000212648 string=0x000000000021264C "\n"
 *   insn=0x0000000000212658 string=0x000000000021265C "R_"
 *   insn=0x000000000021265C string=0x0000000000212660 "\n"
 *   insn=0x0000000000212680 string=0x0000000000212684 "!"
 *   insn=0x0000000000212684 string=0x0000000000212628 "!"
 *   insn=0x0000000000212688 string=0x000000000021268C "\t"
 *   insn=0x000000000021268C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PlayerProfile::~PlayerProfile(Caver::PlayerProfile *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  void *v9; // x0
  __int64 v10; // x8
  void *v11; // x0
  __int64 v12; // x8
  void *v13; // x0
  __int64 v14; // x8
  void *v15; // x0
  __int64 v16; // x8
  void *v17; // x0
  __int64 v18; // x8
  void *v19; // x0
  __int64 v20; // x8
  void *v21; // x0
  void *v22; // x0
  unsigned int *v23; // x8
  int v24; // w9
  unsigned int *v25; // x8
  int v26; // w9
  unsigned int *v27; // x8
  int v28; // w9
  unsigned int *v29; // x8
  int v30; // w9
  unsigned int *v31; // x8
  int v32; // w9
  unsigned int *v33; // x8
  int v34; // w9
  unsigned int *v35; // x8
  int v36; // w9

  _ReadStatusReg(TPIDR_EL0);
  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_erase();
  v2 = (_QWORD *)*((_QWORD *)this + 17);
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v5 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  v8 = *((_QWORD *)this + 12);
  v9 = (void *)(v8 - 24);
  if ( (__int64 *)(v8 - 24) != &qword_6FD2E0 )
  {
    v23 = (unsigned int *)(v8 - 8);
    if ( &pthread_create )
    {
      do
        v24 = __ldaxr(v23);
      while ( __stlxr(v24 - 1, v23) );
    }
    else
    {
      v24 = (*v23)--;
    }
    if ( v24 <= 0 )
      operator delete(v9);
  }
  v10 = *((_QWORD *)this + 11);
  v11 = (void *)(v10 - 24);
  if ( (__int64 *)(v10 - 24) != &qword_6FD2E0 )
  {
    v25 = (unsigned int *)(v10 - 8);
    if ( &pthread_create )
    {
      do
        v26 = __ldaxr(v25);
      while ( __stlxr(v26 - 1, v25) );
    }
    else
    {
      v26 = (*v25)--;
    }
    if ( v26 <= 0 )
      operator delete(v11);
  }
  v12 = *((_QWORD *)this + 10);
  v13 = (void *)(v12 - 24);
  if ( (__int64 *)(v12 - 24) != &qword_6FD2E0 )
  {
    v27 = (unsigned int *)(v12 - 8);
    if ( &pthread_create )
    {
      do
        v28 = __ldaxr(v27);
      while ( __stlxr(v28 - 1, v27) );
    }
    else
    {
      v28 = (*v27)--;
    }
    if ( v28 <= 0 )
      operator delete(v13);
  }
  v14 = *((_QWORD *)this + 9);
  v15 = (void *)(v14 - 24);
  if ( (__int64 *)(v14 - 24) != &qword_6FD2E0 )
  {
    v29 = (unsigned int *)(v14 - 8);
    if ( &pthread_create )
    {
      do
        v30 = __ldaxr(v29);
      while ( __stlxr(v30 - 1, v29) );
    }
    else
    {
      v30 = (*v29)--;
    }
    if ( v30 <= 0 )
      operator delete(v15);
  }
  v16 = *((_QWORD *)this + 6);
  v17 = (void *)(v16 - 24);
  if ( (__int64 *)(v16 - 24) != &qword_6FD2E0 )
  {
    v31 = (unsigned int *)(v16 - 8);
    if ( &pthread_create )
    {
      do
        v32 = __ldaxr(v31);
      while ( __stlxr(v32 - 1, v31) );
    }
    else
    {
      v32 = (*v31)--;
    }
    if ( v32 <= 0 )
      operator delete(v17);
  }
  v18 = *((_QWORD *)this + 4);
  v19 = (void *)(v18 - 24);
  if ( (__int64 *)(v18 - 24) != &qword_6FD2E0 )
  {
    v33 = (unsigned int *)(v18 - 8);
    if ( &pthread_create )
    {
      do
        v34 = __ldaxr(v33);
      while ( __stlxr(v34 - 1, v33) );
    }
    else
    {
      v34 = (*v33)--;
    }
    if ( v34 <= 0 )
      operator delete(v19);
  }
  v20 = *((_QWORD *)this + 3);
  v21 = (void *)(v20 - 24);
  if ( (__int64 *)(v20 - 24) == &qword_6FD2E0 )
    goto LABEL_16;
  v35 = (unsigned int *)(v20 - 8);
  if ( &pthread_create )
  {
    do
      v36 = __ldaxr(v35);
    while ( __stlxr(v36 - 1, v35) );
  }
  else
  {
    v36 = (*v35)--;
  }
  if ( v36 > 0 )
  {
LABEL_16:
    v22 = (void *)*((_QWORD *)this + 1);
    if ( !v22 )
      return;
  }
  else
  {
    operator delete(v21);
    v22 = (void *)*((_QWORD *)this + 1);
    if ( !v22 )
      return;
  }
  operator delete[](v22);
}

