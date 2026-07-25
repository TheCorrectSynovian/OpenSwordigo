/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000540D40
 * Mangled: sub_540D40
 * Demangled: sub_540D40
 *
 * Callers: 3
 *   0x0000000000540F70  sub_540F70
 *   0x0000000000540F74  sub_540F74
 *   0x0000000000540F7C  sub_540F7C
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
 * Referenced strings: 34
 *   insn=0x0000000000540D80 string=0x0000000000540D84 "u~@"
 *   insn=0x0000000000540D88 string=0x0000000000540D8C "vv@"
 *   insn=0x0000000000540D8C string=0x0000000000540D90 "`"
 *   insn=0x0000000000540D98 string=0x0000000000540D9C "@"
 *   insn=0x0000000000540D9C string=0x0000000000540DA0 "xz@"
 *   insn=0x0000000000540D9C string=0x0000000000540DC4 "d"
 *   insn=0x0000000000540DB0 string=0x0000000000540DB4 " "
 *   insn=0x0000000000540DB4 string=0x0000000000540DB8 "d"
 *   insn=0x0000000000540DB8 string=0x0000000000540DBC "`"
 *   insn=0x0000000000540DD0 string=0x0000000000540DD4 "B"
 *   insn=0x0000000000540DE4 string=0x0000000000540DE8 "!"
 *   insn=0x0000000000540DFC string=0x0000000000540E00 "! @"
 *   insn=0x0000000000540E00 string=0x0000000000540E04 "!"
 *   insn=0x0000000000540E0C string=0x0000000000540E10 "`"
 *   insn=0x0000000000540E14 string=0x0000000000540E18 "s"
 *   insn=0x0000000000540E18 string=0x0000000000540E1C "`"
 *   insn=0x0000000000540E1C string=0x0000000000540E20 "`"
 *   insn=0x0000000000540E24 string=0x00000000001F85C0 "0'"
 *   insn=0x0000000000540E2C string=0x0000000000540E30 "`v@"
 *   insn=0x0000000000540E38 string=0x0000000000540E3C "!"
 *   insn=0x0000000000540E3C string=0x0000000000540E40 " "
 *   insn=0x0000000000540E68 string=0x0000000000540E6C " "
 *   insn=0x0000000000540E70 string=0x0000000000540E74 "!"
 *   insn=0x0000000000540E78 string=0x0000000000540E7C "! @"
 *   insn=0x0000000000540E7C string=0x0000000000540E80 "!"
 *   insn=0x0000000000540E80 string=0x0000000000540E84 "d"
 *   insn=0x0000000000540EB4 string=0x0000000000540EB8 "B"
 *   insn=0x0000000000540EB8 string=0x0000000000540EBC "@"
 *   insn=0x0000000000540ED4 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000540F04 string=0x0000000000540F08 "|"
 *   insn=0x0000000000540F0C string=0x0000000000540F10 "m"
 *   insn=0x0000000000540F18 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000540F40 string=0x0000000000540F44 "!"
 *   insn=0x0000000000540F48 string=0x0000000000540F4C "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_540D40(_QWORD *a1, __int64 a2)
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
    (*(void (__fastcall **)(__int64, __int64, bool, char *, __int64, __int64))(*(_QWORD *)v12 + 32LL))(
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

