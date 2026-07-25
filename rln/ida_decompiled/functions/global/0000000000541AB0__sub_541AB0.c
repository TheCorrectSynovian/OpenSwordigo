/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000541AB0
 * Mangled: sub_541AB0
 * Demangled: sub_541AB0
 *
 * Callers: 1
 *   0x0000000000541CE0  sub_541CE0
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
 *   insn=0x0000000000541AD8 string=0x0000000000541ADC "h"
 *   insn=0x0000000000541AF0 string=0x0000000000541AF4 "u~@"
 *   insn=0x0000000000541AF8 string=0x0000000000541AFC "vv@"
 *   insn=0x0000000000541AFC string=0x0000000000541B00 "`"
 *   insn=0x0000000000541B08 string=0x0000000000541B0C "@"
 *   insn=0x0000000000541B0C string=0x0000000000541B10 "xz@"
 *   insn=0x0000000000541B0C string=0x0000000000541B34 "d"
 *   insn=0x0000000000541B20 string=0x0000000000541B24 " "
 *   insn=0x0000000000541B24 string=0x0000000000541B28 "d"
 *   insn=0x0000000000541B28 string=0x0000000000541B2C "`"
 *   insn=0x0000000000541B40 string=0x0000000000541B44 "B"
 *   insn=0x0000000000541B54 string=0x0000000000541B58 "!"
 *   insn=0x0000000000541B6C string=0x0000000000541B70 "! @"
 *   insn=0x0000000000541B70 string=0x0000000000541B74 "!"
 *   insn=0x0000000000541B74 string=0x0000000000541B78 "'|"
 *   insn=0x0000000000541B7C string=0x0000000000541B80 "`"
 *   insn=0x0000000000541B84 string=0x0000000000541B88 "s"
 *   insn=0x0000000000541B88 string=0x0000000000541B8C "`"
 *   insn=0x0000000000541B8C string=0x0000000000541B90 "`"
 *   insn=0x0000000000541B94 string=0x00000000001F85C0 "0'"
 *   insn=0x0000000000541B9C string=0x0000000000541BA0 "`v@"
 *   insn=0x0000000000541BA8 string=0x0000000000541BAC "!"
 *   insn=0x0000000000541BAC string=0x0000000000541BB0 " "
 *   insn=0x0000000000541BD8 string=0x0000000000541BDC " "
 *   insn=0x0000000000541BE0 string=0x0000000000541BE4 "!"
 *   insn=0x0000000000541BE8 string=0x0000000000541BEC "! @"
 *   insn=0x0000000000541BEC string=0x0000000000541BF0 "!"
 *   insn=0x0000000000541BF0 string=0x0000000000541BF4 "|"
 *   insn=0x0000000000541C24 string=0x0000000000541C28 "B"
 *   insn=0x0000000000541C28 string=0x0000000000541C2C "@"
 *   insn=0x0000000000541C40 string=0x0000000000541C44 "g"
 *   insn=0x0000000000541C40 string=0x0000000000541C9C "Q"
 *   insn=0x0000000000541C44 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000541C74 string=0x0000000000541C78 " "
 *   insn=0x0000000000541C84 string=0x0000000000541C88 "B"
 *   insn=0x0000000000541C88 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000541CB0 string=0x0000000000541CB4 "!"
 *   insn=0x0000000000541CB8 string=0x0000000000541CBC "b"
 *   insn=0x0000000000541CBC string=0x0000000000541CC0 "4"
 *   insn=0x0000000000541CCC string=0x0000000000541CD0 "0"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_541AB0(_QWORD *a1, __int64 a2)
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
    (*(void (__fastcall **)(__int64, __int64, bool, char *, __int64, __int64))(*(_QWORD *)v12 + 72LL))(
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

