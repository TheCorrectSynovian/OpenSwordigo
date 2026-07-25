/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000525138
 * Mangled: sub_525138
 * Demangled: sub_525138
 *
 * Callers: 2
 *   0x0000000000488C6C  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><uint>(uint &)
 *   0x0000000000525138  sub_525138
 *
 * Callees: 7
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000520C14  sub_520C14
 *   0x00000000005230E4  sub_5230E4
 *   0x00000000005652C8  sub_5652C8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 24
 *   insn=0x000000000052515C string=0x0000000000525160 "@"
 *   insn=0x0000000000525160 string=0x0000000000525164 "`"
 *   insn=0x000000000052516C string=0x0000000000525170 "e"
 *   insn=0x0000000000525174 string=0x0000000000525178 "`"
 *   insn=0x0000000000525178 string=0x00000000005251E4 "9"
 *   insn=0x00000000005251A4 string=0x00000000005251B8 "`"
 *   insn=0x00000000005251BC string=0x00000000005251C0 "b"
 *   insn=0x00000000005251C4 string=0x00000000005251C8 "B @"
 *   insn=0x00000000005251C8 string=0x00000000005251CC "!"
 *   insn=0x00000000005251E8 string=0x00000000005251EC "a"
 *   insn=0x00000000005251F0 string=0x00000000005251F4 "`"
 *   insn=0x00000000005251F0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000005251F8 string=0x00000000005251FC "s"
 *   insn=0x00000000005251FC string=0x0000000000525200 "`"@"
 *   insn=0x0000000000525200 string=0x0000000000525204 "a"
 *   insn=0x0000000000525208 string=0x000000000052520C "`""
 *   insn=0x000000000052520C string=0x0000000000525210 "!"
 *   insn=0x0000000000525210 string=0x0000000000525214 "Wv"
 *   insn=0x0000000000525210 string=0x0000000000525254 "Gv"
 *   insn=0x0000000000525218 string=0x000000000052521C "`"
 *   insn=0x0000000000525220 string=0x0000000000525224 "`"
 *   insn=0x000000000052522C string=0x0000000000525230 "!"
 *   insn=0x0000000000525238 string=0x0000000000525258 "Fv"
 *   insn=0x000000000052523C string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_525138(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  char *v5; // x5
  __int64 v6; // x0
  char v8[4]; // [xsp+38h] [xbp+38h] BYREF
  int v9; // [xsp+3Ch] [xbp+3Ch] BYREF

  sub_5230E4(v8, a1, 0);
  if ( !v8[0] )
    return a1;
  v4 = *a1;
  v9 = 0;
  v5 = (char *)a1 + *(_QWORD *)(v4 - 24);
  v6 = *((_QWORD *)v5 + 32);
  if ( !v6 )
    sub_5652C8(0);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, char *, int *, __int64))(*(_QWORD *)v6 + 40LL))(
    v6,
    *((_QWORD *)v5 + 29),
    0xFFFFFFFFLL,
    0,
    0xFFFFFFFFLL,
    v5,
    &v9,
    a2);
  if ( !v9 )
    return a1;
  sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24), v9 | *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32));
  return a1;
}

