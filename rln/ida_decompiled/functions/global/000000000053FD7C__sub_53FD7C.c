/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053FD7C
 * Mangled: sub_53FD7C
 * Demangled: sub_53FD7C
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F85C0  std::uncaught_exception(void)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000520C14  sub_520C14
 *   0x000000000053FC7C  sub_53FC7C
 *   0x000000000053FCF8  sub_53FCF8
 *   0x000000000054BA94  sub_54BA94
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 37
 *   insn=0x000000000053FDA0 string=0x000000000053FDA4 "4"
 *   insn=0x000000000053FDA4 string=0x000000000053FE28 "t"
 *   insn=0x000000000053FDAC string=0x000000000053FDB0 "a"
 *   insn=0x000000000053FDB8 string=0x000000000053FDBC "!"
 *   insn=0x000000000053FDBC string=0x000000000053FDC0 "a"
 *   insn=0x000000000053FDC0 string=0x000000000053FDC4 "!t@"
 *   insn=0x000000000053FDC4 string=0x000000000053FDC8 "3/"
 *   insn=0x000000000053FDD0 string=0x000000000053FE30 "`"
 *   insn=0x000000000053FDE4 string=0x000000000053FDE8 "`"
 *   insn=0x000000000053FDEC string=0x00000000001F85C0 "0'"
 *   insn=0x000000000053FE00 string=0x000000000053FE04 "!"
 *   insn=0x000000000053FE04 string=0x000000000053FE08 " "
 *   insn=0x000000000053FE28 string=0x000000000053FE2C "#"
 *   insn=0x000000000053FE34 string=0x000000000053FE38 "b"
 *   insn=0x000000000053FE3C string=0x000000000053FE40 "A @"
 *   insn=0x000000000053FE40 string=0x000000000053FE44 "a"
 *   insn=0x000000000053FE44 string=0x000000000053FE48 "s"
 *   insn=0x000000000053FE50 string=0x000000000053FE54 " "
 *   insn=0x000000000053FE58 string=0x000000000053FE5C "!"
 *   insn=0x000000000053FE60 string=0x000000000053FE64 "! @"
 *   insn=0x000000000053FE64 string=0x000000000053FE68 "!"
 *   insn=0x000000000053FE68 string=0x000000000053FE6C "j"
 *   insn=0x000000000053FE94 string=0x000000000053FE98 "?"
 *   insn=0x000000000053FE98 string=0x000000000053FE9C "a"
 *   insn=0x000000000053FEA0 string=0x000000000053FEA4 "`"
 *   insn=0x000000000053FEA0 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000053FEA8 string=0x000000000053FEAC "s"
 *   insn=0x000000000053FEAC string=0x000000000053FEB0 "`"@"
 *   insn=0x000000000053FEB0 string=0x000000000053FEB4 "a"
 *   insn=0x000000000053FEB8 string=0x000000000053FEBC "`""
 *   insn=0x000000000053FEBC string=0x000000000053FEC0 "A"
 *   insn=0x000000000053FEC0 string=0x000000000053FEC4 "+"
 *   insn=0x000000000053FEC8 string=0x000000000053FECC "`"
 *   insn=0x000000000053FED0 string=0x000000000053FED4 "`"
 *   insn=0x000000000053FEDC string=0x000000000053FEE0 "!"
 *   insn=0x000000000053FEE4 string=0x000000000053FEE8 """
 *   insn=0x000000000053FEEC string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_53FD7C(_QWORD *a1, __int64 a2)
{
  __int64 v4; // x0
  int v5; // w3
  char *v6; // x20
  __int64 v7; // x0
  char v9; // [xsp+4Fh] [xbp+4Fh] BYREF
  _BYTE v10[8]; // [xsp+50h] [xbp+50h] BYREF
  _QWORD *v11; // [xsp+58h] [xbp+58h]

  sub_53FC7C((__int64)v10, a1);
  if ( !a2 || !v10[0] )
  {
    if ( a2 )
      goto LABEL_4;
    v5 = 1;
LABEL_11:
    sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24LL), v5 | *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32));
    goto LABEL_4;
  }
  v4 = sub_54BA94(a2, *(_QWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 232), &v9);
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
  sub_520C14((__int64)v11 + *(_QWORD *)(*v11 - 24LL), *(_DWORD *)((char *)v11 + *(_QWORD *)(*v11 - 24LL) + 32) | 1);
  return a1;
}

