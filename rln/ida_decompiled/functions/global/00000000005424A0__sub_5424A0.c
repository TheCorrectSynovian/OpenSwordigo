/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005424A0
 * Mangled: sub_5424A0
 * Demangled: sub_5424A0
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F85C0  std::uncaught_exception(void)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x00000000005215C0  sub_5215C0
 *   0x00000000005423A0  sub_5423A0
 *   0x000000000054241C  sub_54241C
 *   0x000000000054BC2C  sub_54BC2C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 38
 *   insn=0x00000000005424C4 string=0x00000000005424C8 "4"
 *   insn=0x00000000005424C8 string=0x000000000054254C "t"
 *   insn=0x00000000005424D0 string=0x00000000005424D4 "a"
 *   insn=0x00000000005424DC string=0x00000000005424E0 "!"
 *   insn=0x00000000005424E0 string=0x00000000005424E4 "a"
 *   insn=0x00000000005424E4 string=0x00000000005424E8 "!t@"
 *   insn=0x00000000005424F4 string=0x0000000000542554 "`"
 *   insn=0x0000000000542508 string=0x000000000054250C "`"
 *   insn=0x000000000054250C string=0x0000000000542510 ","
 *   insn=0x0000000000542510 string=0x00000000001F85C0 "0'"
 *   insn=0x0000000000542524 string=0x0000000000542528 "!"
 *   insn=0x0000000000542528 string=0x000000000054252C " "
 *   insn=0x000000000054254C string=0x0000000000542550 "#"
 *   insn=0x0000000000542558 string=0x000000000054255C "b"
 *   insn=0x0000000000542560 string=0x0000000000542564 "A @"
 *   insn=0x0000000000542564 string=0x0000000000542568 "a"
 *   insn=0x0000000000542574 string=0x0000000000542578 " "
 *   insn=0x000000000054257C string=0x0000000000542580 "!"
 *   insn=0x0000000000542584 string=0x0000000000542588 "! @"
 *   insn=0x0000000000542588 string=0x000000000054258C "!"
 *   insn=0x00000000005425B8 string=0x00000000005425BC "?"
 *   insn=0x00000000005425BC string=0x00000000005425C0 "a"
 *   insn=0x00000000005425C0 string=0x00000000005425C4 ""
 *   insn=0x00000000005425C4 string=0x00000000005425C8 "`"
 *   insn=0x00000000005425C4 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000005425CC string=0x00000000005425D0 "s"
 *   insn=0x00000000005425D0 string=0x00000000005425D4 "`"@"
 *   insn=0x00000000005425D4 string=0x00000000005425D8 "a"
 *   insn=0x00000000005425DC string=0x00000000005425E0 "`""
 *   insn=0x00000000005425E0 string=0x00000000005425E4 "A"
 *   insn=0x00000000005425E4 string=0x00000000005425E8 "b"
 *   insn=0x00000000005425E4 string=0x000000000054262C "Q"
 *   insn=0x00000000005425EC string=0x00000000005425F0 "`"
 *   insn=0x00000000005425F4 string=0x00000000005425F8 "`"
 *   insn=0x0000000000542600 string=0x0000000000542604 "!"
 *   insn=0x0000000000542608 string=0x000000000054260C """
 *   insn=0x000000000054260C string=0x0000000000542630 "P"
 *   insn=0x0000000000542610 string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_5424A0(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  int v5; // w3
  char *v6; // x20
  __int64 v7; // x0
  char v9; // [xsp+4Fh] [xbp+4Fh] BYREF
  _BYTE v10[8]; // [xsp+50h] [xbp+50h] BYREF
  _QWORD *v11; // [xsp+58h] [xbp+58h]

  sub_5423A0((__int64)v10, a1);
  if ( !a2 || !v10[0] )
  {
    if ( a2 )
      goto LABEL_4;
    v5 = 1;
LABEL_11:
    sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24), v5 | *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32));
    goto LABEL_4;
  }
  v4 = sub_54BC2C(a2, *(__int64 *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 232), &v9);
  v5 = 4;
  if ( !v4 )
    goto LABEL_11;
LABEL_4:
  v6 = (char *)v11 + *(_QWORD *)(*v11 - 24LL);
  if ( (*((_DWORD *)v6 + 6) & 0x2000) == 0 )
    return a1;
  if ( (unsigned __int8)std::uncaught_exception() )
    return a1;
  v7 = *((_QWORD *)v6 + 29);
  if ( !v7 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7) != -1 )
    return a1;
  sub_5215C0((__int64)v11 + *(_QWORD *)(*v11 - 24LL), *(_DWORD *)((char *)v11 + *(_QWORD *)(*v11 - 24LL) + 32) | 1);
  return a1;
}

