/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000543D20
 * Mangled: sub_543D20
 * Demangled: sub_543D20
 *
 * Callers: 2
 *   0x0000000000543F34  sub_543F34
 *   0x0000000000543F38  sub_543F38
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
 * Referenced strings: 37
 *   insn=0x0000000000543D28 string=0x0000000000543D2C "@`"
 *   insn=0x0000000000543D60 string=0x0000000000543D64 "u~@"
 *   insn=0x0000000000543D64 string=0x0000000000543D68 "5\t"
 *   insn=0x0000000000543D68 string=0x0000000000543D6C "vv@"
 *   insn=0x0000000000543D6C string=0x0000000000543D70 "`"
 *   insn=0x0000000000543D78 string=0x0000000000543D7C "@"
 *   insn=0x0000000000543D7C string=0x0000000000543D80 "d"
 *   insn=0x0000000000543D7C string=0x0000000000543E24 "`z@"
 *   insn=0x0000000000543DA0 string=0x0000000000543DA4 "!"
 *   insn=0x0000000000543DB8 string=0x0000000000543DBC "! @"
 *   insn=0x0000000000543DBC string=0x0000000000543DC0 "!"
 *   insn=0x0000000000543DC8 string=0x0000000000543DCC "`"
 *   insn=0x0000000000543DD0 string=0x0000000000543DD4 "s"
 *   insn=0x0000000000543DD4 string=0x0000000000543DD8 "`"
 *   insn=0x0000000000543DD8 string=0x0000000000543DDC "`"
 *   insn=0x0000000000543DE0 string=0x00000000001F85C0 "0'"
 *   insn=0x0000000000543DE8 string=0x0000000000543DEC "`v@"
 *   insn=0x0000000000543DF4 string=0x0000000000543DF8 "!"
 *   insn=0x0000000000543DF8 string=0x0000000000543DFC " "
 *   insn=0x0000000000543E00 string=0x0000000000543E04 "`"
 *   insn=0x0000000000543E30 string=0x0000000000543E34 "B(@"
 *   insn=0x0000000000543E34 string=0x0000000000543E38 "@"
 *   insn=0x0000000000543E3C string=0x0000000000543E40 "`"
 *   insn=0x0000000000543E40 string=0x0000000000543E44 " "
 *   insn=0x0000000000543E44 string=0x0000000000543E48 "`"
 *   insn=0x0000000000543E50 string=0x0000000000543E54 " "
 *   insn=0x0000000000543E58 string=0x0000000000543E5C "!"
 *   insn=0x0000000000543E60 string=0x0000000000543E64 "! @"
 *   insn=0x0000000000543E64 string=0x0000000000543E68 "!"
 *   insn=0x0000000000543E98 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000543EB8 string=0x0000000000543EBC "-"
 *   insn=0x0000000000543EB8 string=0x0000000000543EEC "!"
 *   insn=0x0000000000543EC8 string=0x0000000000543ECC "T"
 *   insn=0x0000000000543ED0 string=0x0000000000543ED4 "|"
 *   insn=0x0000000000543EDC string=0x00000000001FD590 "0'"
 *   insn=0x0000000000543F04 string=0x0000000000543F08 "!"
 *   insn=0x0000000000543F0C string=0x0000000000543F10 "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_543D20(__int64 *a1, double a2)
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
    (*(void (__fastcall **)(__int64, __int64, bool, char *, __int64, double))(*(_QWORD *)v5 + 56LL))(
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

