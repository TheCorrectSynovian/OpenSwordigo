/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057121C
 * Mangled: sub_57121C
 * Demangled: sub_57121C
 *
 * Callers: 2
 *   0x0000000000522A18  sub_522A18
 *   0x000000000057115C  sub_57115C
 *
 * Callees: 7
 *   0x000000000051F4D0  sub_51F4D0
 *   0x000000000051F654  sub_51F654
 *   0x000000000051F664  sub_51F664
 *   0x000000000055EDEC  sub_55EDEC
 *   0x000000000055EF78  sub_55EF78
 *   0x000000000055F52C  sub_55F52C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x0000000000571240 string=0x0000000000571244 "@"
 *   insn=0x000000000057126C string=0x0000000000571280 "uz"
 *   insn=0x0000000000571284 string=0x0000000000571288 "vR"
 *   insn=0x0000000000571288 string=0x000000000057128C ";"
 *   insn=0x000000000057128C string=0x0000000000571290 "`N@"
 *   insn=0x0000000000571298 string=0x000000000057129C "`"
 *   insn=0x000000000057129C string=0x00000000005712A0 "`\n"
 *   insn=0x00000000005712A0 string=0x00000000005712A4 "`"
 *   insn=0x00000000005712D0 string=0x00000000005712D4 "|A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_57121C(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _QWORD *v4; // x20
  __int64 result; // x0

  v4 = (_QWORD *)a1;
  sub_55EDEC(a1);
  *v4 = off_6DBC60;
  v4 += 13;
  sub_51F4D0((__int64)v4, a2);
  result = sub_51F654(v4);
  if ( (_BYTE)result )
  {
    *(_DWORD *)(a1 + 120) = a3;
    *(_QWORD *)(a1 + 160) = a4;
    sub_55EF78(a1);
    result = *(_QWORD *)(a1 + 152);
    *(_BYTE *)(a1 + 169) = 0;
    *(_BYTE *)(a1 + 170) = 0;
    *(_QWORD *)(a1 + 8) = result;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = result;
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  return result;
}

