/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000523408
 * Mangled: sub_523408
 * Demangled: sub_523408
 *
 * Callers: 2
 *   0x000000000046B060  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><int>(int &)
 *   0x00000000005230E4  sub_5230E4
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000520C14  sub_520C14
 *   0x00000000005230E4  sub_5230E4
 *   0x00000000005236B8  sub_5236B8
 *   0x000000000054BA94  sub_54BA94
 *   0x00000000005652C8  sub_5652C8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 52
 *   insn=0x0000000000523424 string=0x0000000000523428 "/"
 *   insn=0x000000000052342C string=0x0000000000523430 " "
 *   insn=0x0000000000523430 string=0x0000000000523434 "`"
 *   insn=0x000000000052343C string=0x0000000000523440 "e"
 *   insn=0x0000000000523448 string=0x00000000005234E8 "x"
 *   insn=0x0000000000523478 string=0x000000000052347C "J"
 *   insn=0x0000000000523484 string=0x0000000000523488 "!"
 *   insn=0x000000000052348C string=0x0000000000523490 "a"
 *   insn=0x0000000000523490 string=0x00000000005234BC "`"
 *   insn=0x00000000005234C0 string=0x00000000005234C4 "b"
 *   insn=0x00000000005234C8 string=0x00000000005234CC "B @"
 *   insn=0x00000000005234CC string=0x00000000005234D0 "!"
 *   insn=0x00000000005234EC string=0x00000000005234F0 "a"
 *   insn=0x00000000005234F0 string=0x00000000005234F4 ";D"
 *   insn=0x00000000005234F0 string=0x000000000052351C "1D"
 *   insn=0x00000000005234F4 string=0x00000000005234F8 "`"
 *   insn=0x00000000005234F4 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000005234FC string=0x0000000000523500 "s"
 *   insn=0x0000000000523500 string=0x0000000000523504 "`"@"
 *   insn=0x0000000000523504 string=0x0000000000523508 "a"
 *   insn=0x000000000052350C string=0x0000000000523510 "`""
 *   insn=0x0000000000523510 string=0x0000000000523514 "a"
 *   insn=0x000000000052351C string=0x0000000000523520 "`"
 *   insn=0x0000000000523524 string=0x0000000000523528 "`"
 *   insn=0x0000000000523530 string=0x0000000000523534 "!"
 *   insn=0x0000000000523538 string=0x000000000052353C "B"
 *   insn=0x0000000000523540 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000523544 string=0x0000000000523548 "a"
 *   insn=0x0000000000523568 string=0x000000000052356C "\th"
 *   insn=0x0000000000523598 string=0x000000000052359C "4"
 *   insn=0x000000000052359C string=0x0000000000523600 "t"
 *   insn=0x00000000005235A4 string=0x00000000005235A8 "`"
 *   insn=0x00000000005235B4 string=0x00000000005235B8 "`"
 *   insn=0x00000000005235BC string=0x00000000005235C0 "5"
 *   insn=0x00000000005235CC string=0x00000000005235D0 "A"
 *   insn=0x00000000005235D0 string=0x00000000005235D4 "`"
 *   insn=0x00000000005235D8 string=0x00000000005235DC "b"
 *   insn=0x00000000005235E0 string=0x00000000005235E4 "B @"
 *   insn=0x00000000005235E4 string=0x00000000005235E8 "!"
 *   insn=0x0000000000523634 string=0x0000000000523638 "a"
 *   insn=0x000000000052363C string=0x0000000000523640 "`"
 *   insn=0x0000000000523644 string=0x0000000000523648 "s"
 *   insn=0x0000000000523648 string=0x000000000052364C "`"@"
 *   insn=0x000000000052364C string=0x0000000000523650 "a"
 *   insn=0x0000000000523654 string=0x0000000000523658 "`""
 *   insn=0x0000000000523658 string=0x000000000052365C "!"
 *   insn=0x000000000052365C string=0x0000000000523660 "D}"
 *   insn=0x000000000052365C string=0x00000000005236A0 "4}"
 *   insn=0x0000000000523664 string=0x0000000000523668 "`"
 *   insn=0x000000000052366C string=0x0000000000523670 "`"
 *   insn=0x0000000000523678 string=0x000000000052367C "!"
 *   insn=0x0000000000523684 string=0x00000000005236A4 "3}"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_523408(__int64 *a1, unsigned int *a2)
{
  __int64 v4; // x0
  char *v5; // x5
  __int64 v6; // x0
  unsigned int v7; // w1
  int v8; // w1
  char v10[4]; // [xsp+70h] [xbp+30h] BYREF
  int v11; // [xsp+74h] [xbp+34h] BYREF
  __int64 v12; // [xsp+78h] [xbp+38h] BYREF

  sub_5230E4(v10, a1, 0);
  if ( !v10[0] )
    return a1;
  v4 = *a1;
  v11 = 0;
  v5 = (char *)a1 + *(_QWORD *)(v4 - 24);
  v6 = *((_QWORD *)v5 + 32);
  if ( !v6 )
    sub_5652C8(0);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, char *, int *, __int64 *))(*(_QWORD *)v6 + 24LL))(
    v6,
    *((_QWORD *)v5 + 29),
    0xFFFFFFFFLL,
    0,
    0xFFFFFFFFLL,
    v5,
    &v11,
    &v12);
  v7 = 0x80000000;
  if ( v12 >= (__int64)0xFFFFFFFF80000000LL )
  {
    v7 = 0x7FFFFFFF;
    if ( v12 <= 0x7FFFFFFF )
    {
      v8 = v11;
      *a2 = v12;
      if ( v8 )
        goto LABEL_8;
      return a1;
    }
  }
  *a2 = v7;
  v8 = v11 | 4;
  v11 |= 4u;
LABEL_8:
  sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24), v8 | *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32));
  return a1;
}

