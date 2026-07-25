/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000544160
 * Mangled: sub_544160
 * Demangled: sub_544160
 *
 * Callers: 1
 *   0x0000000000544374  sub_544374
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F85C0  std::uncaught_exception(void)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x00000000005215C0  sub_5215C0
 *   0x00000000005423A0  sub_5423A0
 *   0x000000000054241C  sub_54241C
 *   0x00000000005652C8  sub_5652C8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 35
 *   insn=0x00000000005441A0 string=0x00000000005441A4 "u~@"
 *   insn=0x00000000005441A4 string=0x00000000005441A8 "5\t"
 *   insn=0x00000000005441A8 string=0x00000000005441AC "vv@"
 *   insn=0x00000000005441AC string=0x00000000005441B0 "`"
 *   insn=0x00000000005441B8 string=0x00000000005441BC "@"
 *   insn=0x00000000005441BC string=0x00000000005441C0 "d"
 *   insn=0x00000000005441BC string=0x0000000000544264 "`z@"
 *   insn=0x00000000005441CC string=0x00000000005441D0 """
 *   insn=0x00000000005441E0 string=0x00000000005441E4 "!"
 *   insn=0x00000000005441F8 string=0x00000000005441FC "! @"
 *   insn=0x00000000005441FC string=0x0000000000544200 "!"
 *   insn=0x0000000000544208 string=0x000000000054420C "`"
 *   insn=0x0000000000544210 string=0x0000000000544214 "s"
 *   insn=0x0000000000544214 string=0x0000000000544218 "`"
 *   insn=0x0000000000544218 string=0x000000000054421C "`"
 *   insn=0x0000000000544220 string=0x00000000001F85C0 "0'"
 *   insn=0x0000000000544228 string=0x000000000054422C "`v@"
 *   insn=0x0000000000544234 string=0x0000000000544238 "!"
 *   insn=0x0000000000544238 string=0x000000000054423C " "
 *   insn=0x0000000000544240 string=0x0000000000544244 "`"
 *   insn=0x0000000000544270 string=0x0000000000544274 "B(@"
 *   insn=0x0000000000544274 string=0x0000000000544278 "@"
 *   insn=0x000000000054427C string=0x0000000000544280 "`"
 *   insn=0x0000000000544280 string=0x0000000000544284 " "
 *   insn=0x0000000000544284 string=0x0000000000544288 "`"
 *   insn=0x0000000000544290 string=0x0000000000544294 " "
 *   insn=0x0000000000544298 string=0x000000000054429C "!"
 *   insn=0x00000000005442A0 string=0x00000000005442A4 "! @"
 *   insn=0x00000000005442A4 string=0x00000000005442A8 "!"
 *   insn=0x00000000005442D8 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000544308 string=0x000000000054430C "D"
 *   insn=0x0000000000544310 string=0x0000000000544314 "l"
 *   insn=0x000000000054431C string=0x00000000001FD590 "0'"
 *   insn=0x0000000000544344 string=0x0000000000544348 "!"
 *   insn=0x000000000054434C string=0x0000000000544350 "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_544160(__int64 *a1, __int64 a2)
{
  char *v4; // x19
  __int64 v5; // x21
  __int64 v6; // x22
  __int64 v7; // x4
  char v8; // w1
  char *v9; // x19
  __int64 v10; // x0
  __int64 v12; // x0
  unsigned int v13; // w0
  char v14[8]; // [xsp+60h] [xbp+60h] BYREF
  _QWORD *v15; // [xsp+68h] [xbp+68h]

  sub_5423A0((__int64)v14, a1);
  if ( v14[0] )
  {
    v4 = (char *)a1 + *(_QWORD *)(*a1 - 24);
    v5 = *((_QWORD *)v4 + 31);
    if ( !v5 )
      sub_5652C8(*a1);
    v6 = *((_QWORD *)v4 + 29);
    if ( v4[228] )
    {
      v7 = *((unsigned int *)v4 + 56);
    }
    else
    {
      v12 = *((_QWORD *)v4 + 30);
      if ( !v12 )
        sub_5652C8(0);
      v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 80LL))(v12, 32);
      v7 = v13;
      *((_DWORD *)v4 + 56) = v13;
      v4[228] = 1;
    }
    (*(void (__fastcall **)(__int64, __int64, bool, char *, __int64, __int64))(*(_QWORD *)v5 + 72LL))(
      v5,
      v6,
      v6 == 0,
      v4,
      v7,
      a2);
    if ( v8 )
      sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 1);
  }
  v9 = (char *)v15 + *(_QWORD *)(*v15 - 24LL);
  if ( (*((_DWORD *)v9 + 6) & 0x2000) == 0 )
    return a1;
  if ( (unsigned __int8)std::uncaught_exception() )
    return a1;
  v10 = *((_QWORD *)v9 + 29);
  if ( !v10 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10) != -1 )
    return a1;
  sub_5215C0((__int64)v15 + *(_QWORD *)(*v15 - 24LL), *(_DWORD *)((char *)v15 + *(_QWORD *)(*v15 - 24LL) + 32) | 1);
  return a1;
}

