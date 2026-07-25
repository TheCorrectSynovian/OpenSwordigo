/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005713B0
 * Mangled: sub_5713B0
 * Demangled: sub_5713B0
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x000000000051F550  sub_51F550
 *   0x000000000051F654  sub_51F654
 *   0x0000000000562010  sub_562010
 *   0x000000000056219C  sub_56219C
 *   0x0000000000563050  sub_563050
 *   0x0000000000571470  sub_571470
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x00000000005713D4 string=0x00000000005713D8 "@"
 *   insn=0x00000000005713EC string=0x00000000005713F0 "X"
 *   insn=0x0000000000571404 string=0x0000000000571418 "uz"
 *   insn=0x000000000057141C string=0x0000000000571420 "cR"
 *   insn=0x0000000000571420 string=0x0000000000571424 "^"
 *   insn=0x0000000000571424 string=0x0000000000571428 "`N@"
 *   insn=0x0000000000571430 string=0x0000000000571434 "`"
 *   insn=0x0000000000571434 string=0x0000000000571438 "`\n"
 *   insn=0x0000000000571438 string=0x000000000057143C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5713B0(__int64 a1, int a2, int a3, __int64 a4)
{
  _QWORD *v4; // x20
  __int64 result; // x0

  v4 = (_QWORD *)a1;
  sub_562010(a1);
  *v4 = off_6DBCE0;
  v4 += 13;
  sub_51F550((__int64)v4, a2, a3);
  result = sub_51F654(v4);
  if ( (_BYTE)result )
  {
    *(_DWORD *)(a1 + 120) = a3;
    *(_QWORD *)(a1 + 160) = a4;
    sub_56219C(a1);
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

