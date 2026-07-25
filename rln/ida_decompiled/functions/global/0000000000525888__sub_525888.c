/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000525888
 * Mangled: sub_525888
 * Demangled: sub_525888
 *
 * Callers: 2
 *   0x0000000000488F20  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><float>(float &)
 *   0x0000000000525888  sub_525888
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
 *   insn=0x00000000005258AC string=0x00000000005258B0 "@"
 *   insn=0x00000000005258B0 string=0x00000000005258B4 "`"
 *   insn=0x00000000005258BC string=0x00000000005258C0 "e"
 *   insn=0x00000000005258C4 string=0x00000000005258C8 "`"
 *   insn=0x00000000005258C8 string=0x0000000000525934 "e"
 *   insn=0x00000000005258F4 string=0x0000000000525908 "`"
 *   insn=0x000000000052590C string=0x0000000000525910 "b"
 *   insn=0x0000000000525914 string=0x0000000000525918 "B @"
 *   insn=0x0000000000525918 string=0x000000000052591C "!"
 *   insn=0x0000000000525938 string=0x000000000052593C "a"
 *   insn=0x000000000052593C string=0x0000000000525940 "(;"
 *   insn=0x0000000000525940 string=0x0000000000525944 "`"
 *   insn=0x0000000000525940 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000525948 string=0x000000000052594C "s"
 *   insn=0x000000000052594C string=0x0000000000525950 "`"@"
 *   insn=0x0000000000525950 string=0x0000000000525954 "a"
 *   insn=0x0000000000525958 string=0x000000000052595C "`""
 *   insn=0x000000000052595C string=0x0000000000525960 "!"
 *   insn=0x0000000000525960 string=0x00000000005259A4 "st"
 *   insn=0x0000000000525968 string=0x000000000052596C "`"
 *   insn=0x0000000000525970 string=0x0000000000525974 "`"
 *   insn=0x000000000052597C string=0x0000000000525980 "!"
 *   insn=0x0000000000525988 string=0x00000000005259A8 "rt"
 *   insn=0x000000000052598C string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_525888(__int64 *a1, __int64 a2)
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
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, char *, int *, __int64))(*(_QWORD *)v6 + 72LL))(
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

