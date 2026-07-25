/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000543F40
 * Mangled: sub_543F40
 * Demangled: sub_543F40
 *
 * Callers: 1
 *   0x000000000054415C  sub_54415C
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
 * Referenced strings: 41
 *   insn=0x0000000000543F84 string=0x0000000000543F88 "u~@"
 *   insn=0x0000000000543F88 string=0x0000000000543F8C "U\t"
 *   insn=0x0000000000543F8C string=0x0000000000543F90 "vv@"
 *   insn=0x0000000000543F90 string=0x0000000000543F94 "`"
 *   insn=0x0000000000543F9C string=0x0000000000543FA0 "`"
 *   insn=0x0000000000543FA0 string=0x0000000000543FA4 "d"
 *   insn=0x0000000000543FA0 string=0x000000000054404C "`z@"
 *   insn=0x0000000000543FA4 string=0x0000000000543FA8 " "
 *   insn=0x0000000000543FC0 string=0x0000000000543FC4 "@"
 *   insn=0x0000000000543FC8 string=0x0000000000543FCC "!"
 *   insn=0x0000000000543FE0 string=0x0000000000543FE4 "! @"
 *   insn=0x0000000000543FE4 string=0x0000000000543FE8 "!"
 *   insn=0x0000000000543FE8 string=0x0000000000543FEC "uu"
 *   insn=0x0000000000543FF0 string=0x0000000000543FF4 "`"
 *   insn=0x0000000000543FF8 string=0x0000000000543FFC "s"
 *   insn=0x0000000000543FFC string=0x0000000000544000 "`"
 *   insn=0x0000000000544000 string=0x0000000000544004 "`"
 *   insn=0x0000000000544004 string=0x0000000000544008 "n"
 *   insn=0x0000000000544008 string=0x00000000001F85C0 "0'"
 *   insn=0x0000000000544010 string=0x0000000000544014 "`v@"
 *   insn=0x000000000054401C string=0x0000000000544020 "!"
 *   insn=0x0000000000544020 string=0x0000000000544024 " "
 *   insn=0x0000000000544028 string=0x000000000054402C "`"
 *   insn=0x0000000000544050 string=0x00000000005440E8 "x"
 *   insn=0x0000000000544058 string=0x000000000054405C "B(@"
 *   insn=0x000000000054405C string=0x0000000000544060 "@"
 *   insn=0x0000000000544064 string=0x0000000000544068 "`"
 *   insn=0x0000000000544068 string=0x000000000054406C " "
 *   insn=0x000000000054406C string=0x0000000000544070 "`"
 *   insn=0x0000000000544078 string=0x000000000054407C " "
 *   insn=0x0000000000544080 string=0x0000000000544084 "!"
 *   insn=0x0000000000544088 string=0x000000000054408C "! @"
 *   insn=0x000000000054408C string=0x0000000000544090 "!"
 *   insn=0x0000000000544090 string=0x0000000000544094 "Ku"
 *   insn=0x00000000005440BC string=0x00000000005440C0 "H"
 *   insn=0x00000000005440BC string=0x0000000000544118 "2"
 *   insn=0x00000000005440C0 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000544100 string=0x0000000000544104 "#"
 *   insn=0x0000000000544104 string=0x00000000001FD590 "0'"
 *   insn=0x000000000054412C string=0x0000000000544130 "!"
 *   insn=0x0000000000544134 string=0x0000000000544138 "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_543F40(__int64 *a1, long double a2)
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
    (*(void (__fastcall **)(__int64, __int64, bool, char *, __int64, long double))(*(_QWORD *)v5 + 64LL))(
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

