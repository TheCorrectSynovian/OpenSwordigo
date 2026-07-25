/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005411B8
 * Mangled: sub_5411B8
 * Demangled: sub_5411B8
 *
 * Callers: 1
 *   0x00000000005413E8  sub_5413E8
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
 * Referenced strings: 37
 *   insn=0x00000000005411F8 string=0x00000000005411FC "u~@"
 *   insn=0x0000000000541200 string=0x0000000000541204 "vv@"
 *   insn=0x0000000000541204 string=0x0000000000541208 "`"
 *   insn=0x0000000000541210 string=0x0000000000541214 "@"
 *   insn=0x0000000000541214 string=0x0000000000541218 "xz@"
 *   insn=0x0000000000541214 string=0x000000000054123C "d"
 *   insn=0x0000000000541228 string=0x000000000054122C " "
 *   insn=0x000000000054122C string=0x0000000000541230 "d"
 *   insn=0x0000000000541230 string=0x0000000000541234 "`"
 *   insn=0x0000000000541248 string=0x000000000054124C "B"
 *   insn=0x000000000054125C string=0x0000000000541260 "!"
 *   insn=0x0000000000541274 string=0x0000000000541278 "! @"
 *   insn=0x0000000000541278 string=0x000000000054127C "!"
 *   insn=0x000000000054127C string=0x0000000000541280 "e~"
 *   insn=0x0000000000541284 string=0x0000000000541288 "`"
 *   insn=0x000000000054128C string=0x0000000000541290 "s"
 *   insn=0x0000000000541290 string=0x0000000000541294 "`"
 *   insn=0x0000000000541294 string=0x0000000000541298 "`"
 *   insn=0x000000000054129C string=0x00000000001F85C0 "0'"
 *   insn=0x00000000005412A4 string=0x00000000005412A8 "`v@"
 *   insn=0x00000000005412B0 string=0x00000000005412B4 "!"
 *   insn=0x00000000005412B4 string=0x00000000005412B8 " "
 *   insn=0x00000000005412E0 string=0x00000000005412E4 " "
 *   insn=0x00000000005412E8 string=0x00000000005412EC "!"
 *   insn=0x00000000005412F0 string=0x00000000005412F4 "! @"
 *   insn=0x00000000005412F4 string=0x00000000005412F8 "!"
 *   insn=0x00000000005412F8 string=0x00000000005412FC "F~"
 *   insn=0x000000000054132C string=0x0000000000541330 "B"
 *   insn=0x0000000000541330 string=0x0000000000541334 "@"
 *   insn=0x000000000054134C string=0x00000000001F45E0 "P'"
 *   insn=0x000000000054137C string=0x0000000000541380 "^"
 *   insn=0x0000000000541384 string=0x0000000000541388 "O"
 *   insn=0x0000000000541390 string=0x00000000001FD590 "0'"
 *   insn=0x00000000005413B8 string=0x00000000005413BC "!"
 *   insn=0x00000000005413C0 string=0x00000000005413C4 "b"
 *   insn=0x00000000005413C4 string=0x00000000005413C8 "r"
 *   insn=0x00000000005413D4 string=0x00000000005413D8 "n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_5411B8(_QWORD *a1, __int64 a2)
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
    (*(void (__fastcall **)(__int64, __int64, bool, char *, __int64, __int64))(*(_QWORD *)v12 + 40LL))(
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

