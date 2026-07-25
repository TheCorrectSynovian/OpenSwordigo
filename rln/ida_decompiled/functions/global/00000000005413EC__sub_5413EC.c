/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005413EC
 * Mangled: sub_5413EC
 * Demangled: sub_5413EC
 *
 * Callers: 1
 *   0x000000000054161C  sub_54161C
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
 * Referenced strings: 38
 *   insn=0x000000000054142C string=0x0000000000541430 "u~@"
 *   insn=0x0000000000541434 string=0x0000000000541438 "vv@"
 *   insn=0x0000000000541434 string=0x0000000000541574 "U"
 *   insn=0x0000000000541438 string=0x000000000054143C "`"
 *   insn=0x0000000000541444 string=0x0000000000541448 "@"
 *   insn=0x0000000000541448 string=0x000000000054144C "xz@"
 *   insn=0x0000000000541448 string=0x0000000000541470 "d"
 *   insn=0x0000000000541450 string=0x00000000005415A8 "H"
 *   insn=0x000000000054145C string=0x0000000000541460 " "
 *   insn=0x0000000000541460 string=0x0000000000541464 "d"
 *   insn=0x0000000000541464 string=0x0000000000541468 "`"
 *   insn=0x000000000054147C string=0x0000000000541480 "B"
 *   insn=0x0000000000541490 string=0x0000000000541494 "!"
 *   insn=0x00000000005414A8 string=0x00000000005414AC "! @"
 *   insn=0x00000000005414AC string=0x00000000005414B0 "!"
 *   insn=0x00000000005414B8 string=0x00000000005414BC "`"
 *   insn=0x00000000005414C0 string=0x00000000005414C4 "s"
 *   insn=0x00000000005414C4 string=0x00000000005414C8 "`"
 *   insn=0x00000000005414C8 string=0x00000000005414CC "`"
 *   insn=0x00000000005414CC string=0x00000000005414D0 "<"
 *   insn=0x00000000005414D0 string=0x00000000001F85C0 "0'"
 *   insn=0x00000000005414D8 string=0x00000000005414DC "`v@"
 *   insn=0x00000000005414E4 string=0x00000000005414E8 "!"
 *   insn=0x00000000005414E8 string=0x00000000005414EC " "
 *   insn=0x0000000000541514 string=0x0000000000541518 " "
 *   insn=0x000000000054151C string=0x0000000000541520 "!"
 *   insn=0x0000000000541524 string=0x0000000000541528 "! @"
 *   insn=0x0000000000541528 string=0x000000000054152C "!"
 *   insn=0x0000000000541550 string=0x0000000000541554 "Sz"
 *   insn=0x0000000000541560 string=0x0000000000541564 "B"
 *   insn=0x0000000000541564 string=0x0000000000541568 "@"
 *   insn=0x0000000000541580 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000005415A0 string=0x00000000005415A4 "s"
 *   insn=0x00000000005415A0 string=0x00000000005415D4 "g"
 *   insn=0x00000000005415C4 string=0x00000000001FD590 "0'"
 *   insn=0x00000000005415EC string=0x00000000005415F0 "!"
 *   insn=0x00000000005415F4 string=0x00000000005415F8 "b"
 *   insn=0x00000000005415F8 string=0x0000000000541604 "["
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_5413EC(_QWORD *a1, __int64 a2)
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
    (*(void (__fastcall **)(__int64, __int64, bool, char *, __int64, __int64))(*(_QWORD *)v12 + 48LL))(
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

