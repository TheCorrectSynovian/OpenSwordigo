/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000571470
 * Mangled: sub_571470
 * Demangled: sub_571470
 *
 * Callers: 2
 *   0x0000000000522A18  sub_522A18
 *   0x00000000005713B0  sub_5713B0
 *
 * Callees: 7
 *   0x000000000051F4D0  sub_51F4D0
 *   0x000000000051F654  sub_51F654
 *   0x000000000051F664  sub_51F664
 *   0x0000000000562010  sub_562010
 *   0x000000000056219C  sub_56219C
 *   0x0000000000563050  sub_563050
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x0000000000571494 string=0x0000000000571498 "@"
 *   insn=0x00000000005714AC string=0x00000000005714B0 ""
 *   insn=0x00000000005714B4 string=0x00000000005714B8 "g"
 *   insn=0x00000000005714C0 string=0x00000000005714D4 "uz"
 *   insn=0x00000000005714D8 string=0x00000000005714DC "vR"
 *   insn=0x00000000005714DC string=0x00000000005714E0 "/"
 *   insn=0x00000000005714E0 string=0x00000000005714E4 "`N@"
 *   insn=0x00000000005714EC string=0x00000000005714F0 "`"
 *   insn=0x00000000005714F0 string=0x00000000005714F4 "`\n"
 *   insn=0x00000000005714F4 string=0x00000000005714F8 "`"
 *   insn=0x000000000057152C string=0x0000000000571530 "M"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_571470(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _QWORD *v4; // x20
  __int64 result; // x0

  v4 = (_QWORD *)a1;
  sub_562010(a1);
  *v4 = off_6DBCE0;
  v4 += 13;
  sub_51F4D0((__int64)v4, a2);
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

