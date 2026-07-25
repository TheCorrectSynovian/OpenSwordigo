/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000543B08
 * Mangled: sub_543B08
 * Demangled: sub_543B08
 *
 * Callers: 1
 *   0x0000000000543D1C  sub_543D1C
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
 *   insn=0x0000000000543B30 string=0x0000000000543B34 ""
 *   insn=0x0000000000543B48 string=0x0000000000543B4C "u~@"
 *   insn=0x0000000000543B4C string=0x0000000000543B50 "5\t"
 *   insn=0x0000000000543B50 string=0x0000000000543B54 "vv@"
 *   insn=0x0000000000543B54 string=0x0000000000543B58 "`"
 *   insn=0x0000000000543B60 string=0x0000000000543B64 "@"
 *   insn=0x0000000000543B64 string=0x0000000000543B68 "d"
 *   insn=0x0000000000543B64 string=0x0000000000543C0C "`z@"
 *   insn=0x0000000000543B74 string=0x0000000000543B78 """
 *   insn=0x0000000000543B88 string=0x0000000000543B8C "!"
 *   insn=0x0000000000543BA0 string=0x0000000000543BA4 "! @"
 *   insn=0x0000000000543BA4 string=0x0000000000543BA8 "!"
 *   insn=0x0000000000543BB0 string=0x0000000000543BB4 "`"
 *   insn=0x0000000000543BB8 string=0x0000000000543BBC "s"
 *   insn=0x0000000000543BBC string=0x0000000000543BC0 "`"
 *   insn=0x0000000000543BC0 string=0x0000000000543BC4 "`"
 *   insn=0x0000000000543BC4 string=0x0000000000543BC8 "~"
 *   insn=0x0000000000543BC8 string=0x00000000001F85C0 "0'"
 *   insn=0x0000000000543BD0 string=0x0000000000543BD4 "`v@"
 *   insn=0x0000000000543BDC string=0x0000000000543BE0 "!"
 *   insn=0x0000000000543BE0 string=0x0000000000543BE4 " "
 *   insn=0x0000000000543BE8 string=0x0000000000543BEC "`"
 *   insn=0x0000000000543C18 string=0x0000000000543C1C "B(@"
 *   insn=0x0000000000543C1C string=0x0000000000543C20 "@"
 *   insn=0x0000000000543C24 string=0x0000000000543C28 "`"
 *   insn=0x0000000000543C28 string=0x0000000000543C2C " "
 *   insn=0x0000000000543C2C string=0x0000000000543C30 "`"
 *   insn=0x0000000000543C38 string=0x0000000000543C3C " "
 *   insn=0x0000000000543C40 string=0x0000000000543C44 "!"
 *   insn=0x0000000000543C48 string=0x0000000000543C4C "! @"
 *   insn=0x0000000000543C4C string=0x0000000000543C50 "!"
 *   insn=0x0000000000543C50 string=0x0000000000543C54 "[v"
 *   insn=0x0000000000543C7C string=0x0000000000543C80 "X"
 *   insn=0x0000000000543C7C string=0x0000000000543CD8 "B"
 *   insn=0x0000000000543C80 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000543CC0 string=0x0000000000543CC4 "3"
 *   insn=0x0000000000543CC4 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000543CEC string=0x0000000000543CF0 "!"
 *   insn=0x0000000000543CF4 string=0x0000000000543CF8 "b"
 *   insn=0x0000000000543CF8 string=0x0000000000543CFC "%"
 *   insn=0x0000000000543D08 string=0x0000000000543D0C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_543B08(__int64 *a1, __int64 a2)
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
    (*(void (__fastcall **)(__int64, __int64, bool, char *, __int64, __int64))(*(_QWORD *)v5 + 48LL))(
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

