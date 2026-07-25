/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ED424
 * Mangled: sub_4ED424
 * Demangled: sub_4ED424
 *
 * Callers: 2
 *   0x00000000004ECC2C  sub_4ECC2C
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 3
 *   0x00000000001FBC40  .memset
 *   0x00000000004EE48C  sub_4EE48C
 *   0x00000000004EED74  sub_4EED74
 *
 * Referenced strings: 12
 *   insn=0x00000000004ED434 string=0x00000000004ED438 "hr"
 *   insn=0x00000000004ED438 string=0x00000000004ED43C ""
 *   insn=0x00000000004ED450 string=0x00000000004ED454 "H"
 *   insn=0x00000000004ED464 string=0x00000000004ED468 "\t"
 *   insn=0x00000000004ED468 string=0x00000000004EE48C ""
 *   insn=0x00000000004ED474 string=0x00000000004ED478 "S"
 *   insn=0x00000000004ED478 string=0x00000000004ED47C "h~}"
 *   insn=0x00000000004ED47C string=0x00000000004ED480 "i"
 *   insn=0x00000000004ED480 string=0x00000000004ED484 ""
 *   insn=0x00000000004ED488 string=0x00000000004ED48C "M)"
 *   insn=0x00000000004ED490 string=0x00000000004ED494 "B"
 *   insn=0x00000000004ED49C string=0x00000000001FBC40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4ED424(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // x20

  v6 = sub_4EED74(a1, 0, 0, (int)(8 * a2 + 40));
  sub_4EE48C(a1, v6, 6);
  *(_BYTE *)(v6 + 10) = 0;
  *(_QWORD *)(v6 + 24) = a3;
  *(_BYTE *)(v6 + 11) = a2;
  if ( a2 )
    memset((void *)(v6 + 8LL * (int)a2 + 32 - 8LL * (a2 - 1)), 0, 8LL * a2);
  return v6;
}

