/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000489FE0
 * Mangled: _ZNSs19_M_replace_dispatchISt19istreambuf_iteratorIcSt11char_traitsIcEEEERSsN9__gnu_cxx17__normal_iteratorIPcSsEES8_T_S9_St12__false_type
 * Demangled: std::string::_M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>(__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>,std::istreambuf_iterator<char,std::char_traits<char>>,std::istreambuf_iterator<char,std::char_traits<char>>,std::__false_type)
 *
 * Callers: 1
 *   0x00000000001F8940  std::string::_M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>(__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>,std::istreambuf_iterator<char,std::char_traits<char>>,std::istreambuf_iterator<char,std::char_traits<char>>,std::__false_type)
 *
 * Callees: 13
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4E70  std::string::_S_construct<std::istreambuf_iterator<char,std::char_traits<char>>>(std::istreambuf_iterator<char,std::char_traits<char>>,std::istreambuf_iterator<char,std::char_traits<char>>,std::allocator<char> const&,std::input_iterator_tag)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000201760  .memcpy
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056554C  sub_56554C
 *   0x0000000000568C20  sub_568C20
 *   0x0000000000569110  sub_569110
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 121
 *   insn=0x0000000000489FF4 string=0x0000000000489FF8 "X"
 *   insn=0x0000000000489FF8 string=0x0000000000489FFC "\t"
 *   insn=0x000000000048A028 string=0x00000000001F4E70 "P'"
 *   insn=0x000000000048A030 string=0x000000000048A034 "d"
 *   insn=0x000000000048A044 string=0x000000000048A048 "\t"
 *   insn=0x000000000048A048 string=0x000000000048A04C "J"
 *   insn=0x000000000048A04C string=0x000000000048A050 "I"
 *   insn=0x000000000048A050 string=0x000000000048A054 "?"
 *   insn=0x000000000048A058 string=0x000000000048A0F4 "`"
 *   insn=0x000000000048A064 string=0x000000000048A068 "*|"
 *   insn=0x000000000048A070 string=0x000000000048A074 ""
 *   insn=0x000000000048A07C string=0x000000000048A080 ""
 *   insn=0x000000000048A08C string=0x000000000048A100 "t"
 *   insn=0x000000000048A0AC string=0x000000000048A0B0 ")=G"
 *   insn=0x000000000048A0B8 string=0x000000000048A0BC "\t"
 *   insn=0x000000000048A0B8 string=0x000000000048A0D0 "\t"
 *   insn=0x000000000048A0BC string=0x000000000048A0C0 "*"
 *   insn=0x000000000048A0C0 string=0x000000000048A0C4 "\n"
 *   insn=0x000000000048A0CC string=0x000000000048A0DC "?"
 *   insn=0x000000000048A0D0 string=0x000000000048A0D4 "*"
 *   insn=0x000000000048A0D4 string=0x000000000048A0D8 "\n"
 *   insn=0x000000000048A0F4 string=0x0000000000596A0A "basic_string::_M_replace_dispatch"
 *   insn=0x000000000048A100 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000048A108 string=0x000000000048A10C ""
 *   insn=0x000000000048A11C string=0x000000000048A120 ")=G"
 *   insn=0x000000000048A128 string=0x000000000048A12C "\t"
 *   insn=0x000000000048A128 string=0x000000000048A158 "\t"
 *   insn=0x000000000048A12C string=0x000000000048A130 "*"
 *   insn=0x000000000048A130 string=0x000000000048A134 "\n"
 *   insn=0x000000000048A138 string=0x000000000048A13C "?"
 *   insn=0x000000000048A158 string=0x000000000048A15C "*"
 *   insn=0x000000000048A15C string=0x000000000048A160 "\n"
 *   insn=0x000000000048A160 string=0x000000000048A164 "?"
 *   insn=0x000000000048A190 string=0x000000000048A194 "Y"
 *   insn=0x000000000048A194 string=0x000000000048A198 "("
 *   insn=0x000000000048A1B0 string=0x000000000048A1B4 "V"
 *   insn=0x000000000048A1B8 string=0x000000000048A1BC "`"
 *   insn=0x000000000048A1C0 string=0x000000000048A1C4 "7"
 *   insn=0x000000000048A1C8 string=0x000000000048A1CC "`"
 *   insn=0x000000000048A1D0 string=0x000000000048A1D4 "A"
 *   insn=0x000000000048A1DC string=0x000000000048A1E0 "W"
 *   insn=0x000000000048A1E0 string=0x000000000048A1E4 "\t"
 *   insn=0x000000000048A1EC string=0x000000000048A1F0 "B""
 *   insn=0x000000000048A1FC string=0x000000000048A200 "5"
 *   insn=0x000000000048A200 string=0x000000000048A204 "7"
 *   insn=0x000000000048A22C string=0x000000000048A230 "4"
 *   insn=0x000000000048A23C string=0x000000000048A240 ""
 *   insn=0x000000000048A248 string=0x000000000048A5F4 "("
 *   insn=0x000000000048A25C string=0x000000000048A260 "/"
 *   insn=0x000000000048A264 string=0x000000000048A268 "9"
 *   insn=0x000000000048A278 string=0x000000000048A27C "W"
 *   insn=0x000000000048A288 string=0x000000000048A28C "'"
 *   insn=0x000000000048A2A4 string=0x000000000048A2A8 "5"
 *   insn=0x000000000048A2C8 string=0x000000000048A2CC "4"
 *   insn=0x000000000048A2D8 string=0x000000000048A2DC "%@"
 *   insn=0x000000000048A2F0 string=0x000000000048A2F4 "w"
 *   insn=0x000000000048A2F4 string=0x000000000048A2F8 ""
 *   insn=0x000000000048A300 string=0x000000000048A304 "%@"
 *   insn=0x000000000048A334 string=0x000000000048A338 "?"
 *   insn=0x000000000048A33C string=0x000000000048A340 ""
 *   insn=0x000000000048A34C string=0x000000000048A350 "`"
 *   insn=0x000000000048A354 string=0x000000000048A358 ""
 *   insn=0x000000000048A358 string=0x000000000048A378 "@k98"
 *   insn=0x000000000048A360 string=0x000000000048A364 """
 *   insn=0x000000000048A370 string=0x000000000048A374 "5"
 *   insn=0x000000000048A384 string=0x000000000048A388 ""
 *   insn=0x000000000048A398 string=0x000000000048A39C ")@"
 *   insn=0x000000000048A3AC string=0x000000000048A3B0 "%@"
 *   insn=0x000000000048A3C0 string=0x000000000048A3C4 "[k989"
 *   insn=0x000000000048A3C4 string=0x000000000048A3C8 "9"
 *   insn=0x000000000048A3C8 string=0x000000000048A3CC "6"
 *   insn=0x000000000048A3E8 string=0x000000000048A3EC "?"
 *   insn=0x000000000048A3EC string=0x000000000048A3F0 "<c"
 *   insn=0x000000000048A3F8 string=0x000000000048A3FC ""
 *   insn=0x000000000048A400 string=0x000000000048A404 "v"
 *   insn=0x000000000048A404 string=0x000000000048A408 "7"
 *   insn=0x000000000048A41C string=0x000000000048A420 "1"
 *   insn=0x000000000048A440 string=0x000000000048A4F0 "_"
 *   insn=0x000000000048A448 string=0x000000000048A468 "_"
 *   insn=0x000000000048A460 string=0x000000000048A464 "4"
 *   insn=0x000000000048A46C string=0x000000000048A470 "["
 *   insn=0x000000000048A46C string=0x000000000048A4FC "@"
 *   insn=0x000000000048A488 string=0x000000000048A48C "5"
 *   insn=0x000000000048A49C string=0x000000000048A4A0 "%@"
 *   insn=0x000000000048A4AC string=0x000000000048A4B0 "_"
 *   insn=0x000000000048A4BC string=0x000000000048A4C0 "7"
 *   insn=0x000000000048A4C0 string=0x000000000048A4C4 ""
 *   insn=0x000000000048A4C8 string=0x000000000048A4CC "%@"
 *   insn=0x000000000048A4F0 string=0x000000000048A4F4 "@"
 *   insn=0x000000000048A4FC string=0x000000000048A500 "?"
 *   insn=0x000000000048A500 string=0x000000000048A504 "a"
 *   insn=0x000000000048A518 string=0x000000000048A51C "@c"
 *   insn=0x000000000048A528 string=0x000000000048A52C "("
 *   insn=0x000000000048A52C string=0x000000000048A530 ""
 *   insn=0x000000000048A554 string=0x000000000048A558 "`"
 *   insn=0x000000000048A55C string=0x000000000048A560 ""
 *   insn=0x000000000048A568 string=0x000000000048A56C """
 *   insn=0x000000000048A578 string=0x000000000048A57C "5"
 *   insn=0x000000000048A58C string=0x000000000048A590 ""
 *   insn=0x000000000048A59C string=0x000000000048A5A0 ")@"
 *   insn=0x000000000048A5B0 string=0x000000000048A5B4 "%@"
 *   insn=0x000000000048A5C8 string=0x000000000048A5CC "k<8"
 *   insn=0x000000000048A5DC string=0x000000000048A5E0 ""
 *   insn=0x000000000048A63C string=0x000000000048A640 "%@"
 *   insn=0x000000000048A64C string=0x000000000048A650 "A"
 *   insn=0x000000000048A664 string=0x000000000048A668 "%@"
 *   insn=0x000000000048A684 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000048A68C string=0x000000000048A690 "E"
 *   insn=0x000000000048A690 string=0x000000000048A694 "7"
 *   insn=0x000000000048A69C string=0x00000000001FD590 "0'"
 *   insn=0x000000000048A6A4 string=0x000000000048A6A8 ")"
 *   insn=0x000000000048A6AC string=0x000000000048A6B0 " "
 *   insn=0x000000000048A6B8 string=0x000000000048A6BC "! "
 *   insn=0x000000000048A6BC string=0x000000000048A6C0 "B "
 *   insn=0x000000000048A6C0 string=0x000000000048A6C4 "c "
 *   insn=0x000000000048A6C8 string=0x000000000048A6CC ")"
 *   insn=0x000000000048A6CC string=0x000000000048A6D0 "J"
 *   insn=0x000000000048A6D0 string=0x000000000048A6D4 "k"
 *   insn=0x000000000048A6D8 string=0x000000000048A6DC "\t"
 *   insn=0x000000000048A6DC string=0x000000000048A6E0 "\n"
 *   insn=0x000000000048A6E0 string=0x000000000048A6E4 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::string::_M_replace_dispatch<std::istreambuf_iterator<char>>(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x0
  __int64 v7; // x20
  __int64 *v8; // x19
  __int64 v9; // x21
  unsigned int *v11; // x8
  int v12; // w9

  _ReadStatusReg(TPIDR_EL0);
  std::string::_S_construct<std::istreambuf_iterator<char>>();
  v7 = v6;
  v8 = (__int64 *)(v6 - 24);
  if ( (unsigned __int64)(a3 - a2 + 0x3FFFFFFFFFFFFFF9LL - *(_QWORD *)(*a1 - 24LL)) < *(_QWORD *)(v6 - 24) )
    sub_56554C("basic_string::_M_replace_dispatch");
  v9 = sub_569110(a1, a2 - *a1);
  if ( v8 != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v7 - 8);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v8);
  }
  return v9;
}

