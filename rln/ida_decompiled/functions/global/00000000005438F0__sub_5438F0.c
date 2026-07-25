/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005438F0
 * Mangled: sub_5438F0
 * Demangled: sub_5438F0
 *
 * Callers: 1
 *   0x0000000000543B04  sub_543B04
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
 * Referenced strings: 39
 *   insn=0x0000000000543930 string=0x0000000000543934 "u~@"
 *   insn=0x0000000000543934 string=0x0000000000543938 "5\t"
 *   insn=0x0000000000543938 string=0x000000000054393C "vv@"
 *   insn=0x0000000000543938 string=0x0000000000543A5C ""
 *   insn=0x000000000054393C string=0x0000000000543940 "`"
 *   insn=0x0000000000543948 string=0x000000000054394C "@"
 *   insn=0x000000000054394C string=0x0000000000543950 "d"
 *   insn=0x000000000054394C string=0x00000000005439F4 "`z@"
 *   insn=0x000000000054395C string=0x0000000000543960 """
 *   insn=0x0000000000543970 string=0x0000000000543974 "!"
 *   insn=0x0000000000543988 string=0x000000000054398C "! @"
 *   insn=0x000000000054398C string=0x0000000000543990 "!"
 *   insn=0x0000000000543990 string=0x0000000000543994 "w"
 *   insn=0x0000000000543998 string=0x000000000054399C "`"
 *   insn=0x00000000005439A0 string=0x00000000005439A4 "s"
 *   insn=0x00000000005439A4 string=0x00000000005439A8 "`"
 *   insn=0x00000000005439A8 string=0x00000000005439AC "`"
 *   insn=0x00000000005439B0 string=0x00000000001F85C0 "0'"
 *   insn=0x00000000005439B8 string=0x00000000005439BC "`v@"
 *   insn=0x00000000005439C4 string=0x00000000005439C8 "!"
 *   insn=0x00000000005439C8 string=0x00000000005439CC " "
 *   insn=0x00000000005439D0 string=0x00000000005439D4 "`"
 *   insn=0x0000000000543A00 string=0x0000000000543A04 "B(@"
 *   insn=0x0000000000543A04 string=0x0000000000543A08 "@"
 *   insn=0x0000000000543A0C string=0x0000000000543A10 "`"
 *   insn=0x0000000000543A10 string=0x0000000000543A14 " "
 *   insn=0x0000000000543A14 string=0x0000000000543A18 "`"
 *   insn=0x0000000000543A20 string=0x0000000000543A24 " "
 *   insn=0x0000000000543A28 string=0x0000000000543A2C "!"
 *   insn=0x0000000000543A30 string=0x0000000000543A34 "! @"
 *   insn=0x0000000000543A34 string=0x0000000000543A38 "!"
 *   insn=0x0000000000543A68 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000543A88 string=0x0000000000543A8C "9"
 *   insn=0x0000000000543A88 string=0x0000000000543ABC "-"
 *   insn=0x0000000000543A98 string=0x0000000000543A9C "`"
 *   insn=0x0000000000543AAC string=0x00000000001FD590 "0'"
 *   insn=0x0000000000543AD4 string=0x0000000000543AD8 "!"
 *   insn=0x0000000000543ADC string=0x0000000000543AE0 "b"
 *   insn=0x0000000000543AE0 string=0x0000000000543AEC "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_5438F0(__int64 *a1, __int64 a2)
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
    (*(void (__fastcall **)(__int64, __int64, bool, char *, __int64, __int64))(*(_QWORD *)v5 + 40LL))(
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

