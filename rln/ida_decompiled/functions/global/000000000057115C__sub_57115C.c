/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057115C
 * Mangled: sub_57115C
 * Demangled: sub_57115C
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x000000000051F550  sub_51F550
 *   0x000000000051F654  sub_51F654
 *   0x000000000055EDEC  sub_55EDEC
 *   0x000000000055EF78  sub_55EF78
 *   0x000000000055F52C  sub_55F52C
 *   0x000000000057121C  sub_57121C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x000000000057117C string=0x0000000000571180 ""
 *   insn=0x0000000000571180 string=0x0000000000571184 "@"
 *   insn=0x00000000005711A0 string=0x00000000005711A4 ","
 *   insn=0x00000000005711B0 string=0x00000000005711C4 "uz"
 *   insn=0x00000000005711C8 string=0x00000000005711CC "cR"
 *   insn=0x00000000005711CC string=0x00000000005711D0 "j"
 *   insn=0x00000000005711D0 string=0x00000000005711D4 "`N@"
 *   insn=0x00000000005711DC string=0x00000000005711E0 "`"
 *   insn=0x00000000005711E0 string=0x00000000005711E4 "`\n"
 *   insn=0x00000000005711E4 string=0x00000000005711E8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_57115C(__int64 a1, int a2, int a3, __int64 a4)
{
  _QWORD *v4; // x20
  __int64 result; // x0

  v4 = (_QWORD *)a1;
  sub_55EDEC(a1);
  *v4 = off_6DBC60;
  v4 += 13;
  sub_51F550((__int64)v4, a2, a3);
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

