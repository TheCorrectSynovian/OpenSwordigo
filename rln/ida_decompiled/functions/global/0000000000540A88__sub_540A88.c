/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000540A88
 * Mangled: sub_540A88
 * Demangled: sub_540A88
 *
 * Callers: 3
 *   0x0000000000540CB8  sub_540CB8
 *   0x0000000000540CBC  sub_540CBC
 *   0x0000000000540D00  sub_540D00
 *
 * Callees: 10
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F85C0  std::uncaught_exception(void)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000051FEA0  sub_51FEA0
 *   0x0000000000520C14  sub_520C14
 *   0x000000000053FC7C  sub_53FC7C
 *   0x000000000053FCF8  sub_53FCF8
 *   0x00000000005652C8  sub_5652C8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x0000000000540AB0 string=0x0000000000540AB4 "r"
 *   insn=0x0000000000540AC8 string=0x0000000000540ACC "u~@"
 *   insn=0x0000000000540AD0 string=0x0000000000540AD4 "vv@"
 *   insn=0x0000000000540AD4 string=0x0000000000540AD8 "`"
 *   insn=0x0000000000540AE0 string=0x0000000000540AE4 "@"
 *   insn=0x0000000000540AE4 string=0x0000000000540AE8 "xz@"
 *   insn=0x0000000000540AE4 string=0x0000000000540B0C "d"
 *   insn=0x0000000000540AF8 string=0x0000000000540AFC " "
 *   insn=0x0000000000540AFC string=0x0000000000540B00 "d"
 *   insn=0x0000000000540B00 string=0x0000000000540B04 "`"
 *   insn=0x0000000000540B18 string=0x0000000000540B1C "B"
 *   insn=0x0000000000540B2C string=0x0000000000540B30 "!"
 *   insn=0x0000000000540B44 string=0x0000000000540B48 "! @"
 *   insn=0x0000000000540B48 string=0x0000000000540B4C "!"
 *   insn=0x0000000000540B4C string=0x0000000000540B50 "1"
 *   insn=0x0000000000540B54 string=0x0000000000540B58 "`"
 *   insn=0x0000000000540B5C string=0x0000000000540B60 "s"
 *   insn=0x0000000000540B60 string=0x0000000000540B64 "`"
 *   insn=0x0000000000540B64 string=0x0000000000540B68 "`"
 *   insn=0x0000000000540B6C string=0x00000000001F85C0 "0'"
 *   insn=0x0000000000540B74 string=0x0000000000540B78 "`v@"
 *   insn=0x0000000000540B80 string=0x0000000000540B84 "!"
 *   insn=0x0000000000540B84 string=0x0000000000540B88 " "
 *   insn=0x0000000000540BB0 string=0x0000000000540BB4 " "
 *   insn=0x0000000000540BB8 string=0x0000000000540BBC "!"
 *   insn=0x0000000000540BC0 string=0x0000000000540BC4 "! @"
 *   insn=0x0000000000540BC4 string=0x0000000000540BC8 "!"
 *   insn=0x0000000000540BFC string=0x0000000000540C00 "B"
 *   insn=0x0000000000540C00 string=0x0000000000540C04 "@"
 *   insn=0x0000000000540C18 string=0x0000000000540C1C "q"
 *   insn=0x0000000000540C18 string=0x0000000000540C74 "["
 *   insn=0x0000000000540C1C string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000540C4C string=0x0000000000540C50 "*"
 *   insn=0x0000000000540C54 string=0x0000000000540C58 ""
 *   insn=0x0000000000540C5C string=0x0000000000540C60 "L"
 *   insn=0x0000000000540C60 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000540C88 string=0x0000000000540C8C "!"
 *   insn=0x0000000000540C90 string=0x0000000000540C94 "b"
 *   insn=0x0000000000540C94 string=0x0000000000540C98 ">"
 *   insn=0x0000000000540CA4 string=0x0000000000540CA8 ":"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_540A88(_QWORD *a1, __int64 a2)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  char *v11; // x19
  __int64 v12; // x21
  __int64 v13; // x22
  _BYTE *v14; // x24
  __int64 v15; // x4
  char v16; // w1
  char *v17; // x19
  __int64 v18; // x0
  char v20; // [xsp+0h] [xbp+0h]
  char v21[8]; // [xsp+60h] [xbp+60h] BYREF
  _QWORD *v22; // [xsp+68h] [xbp+68h]

  sub_53FC7C((__int64)v21, a1);
  if ( v21[0] )
  {
    v11 = (char *)a1 + *(_QWORD *)(*a1 - 24LL);
    v12 = *((_QWORD *)v11 + 31);
    if ( !v12 )
      sub_5652C8(*a1);
    v13 = *((_QWORD *)v11 + 29);
    if ( v11[225] )
    {
      v15 = (unsigned __int8)v11[224];
    }
    else
    {
      v14 = (_BYTE *)*((_QWORD *)v11 + 30);
      if ( !v14 )
        sub_5652C8((unsigned __int8)v11[225]);
      if ( v14[56] )
      {
        v15 = (unsigned __int8)v14[89];
      }
      else
      {
        sub_51FEA0(*((_BYTE **)v11 + 30), v4, v5, v6, v7, v8, v9, v10, v20);
        v15 = (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v14 + 48LL))(v14, 32);
      }
      v11[224] = v15;
      v11[225] = 1;
    }
    (*(void (__fastcall **)(__int64, __int64, bool, char *, __int64, __int64))(*(_QWORD *)v12 + 24LL))(
      v12,
      v13,
      v13 == 0,
      v11,
      v15,
      a2);
    if ( v16 )
      sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24LL), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 1);
  }
  v17 = (char *)v22 + *(_QWORD *)(*v22 - 24LL);
  if ( (*((_DWORD *)v17 + 6) & 0x2000) == 0 )
    return a1;
  if ( (unsigned __int8)std::uncaught_exception() )
    return a1;
  v18 = *((_QWORD *)v17 + 29);
  if ( !v18 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18) != -1 )
    return a1;
  sub_520C14((__int64)v22 + *(_QWORD *)(*v22 - 24LL), *(_DWORD *)((char *)v22 + *(_QWORD *)(*v22 - 24LL) + 32) | 1);
  return a1;
}

