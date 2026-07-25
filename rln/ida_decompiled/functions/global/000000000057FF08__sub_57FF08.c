/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057FF08
 * Mangled: sub_57FF08
 * Demangled: sub_57FF08
 *
 * Callers: 4
 *   0x000000000057FF60  sub_57FF60
 *   0x0000000000580ACC  sub_580ACC
 *   0x0000000000581080  sub_581080
 *   0x0000000000581368  sub_581368
 *
 * Callees: 1
 *   0x00000000001FE620  .abort
 *
 * Referenced strings: 9
 *   insn=0x000000000057FF08 string=0x000000000057FF0C "?"
 *   insn=0x000000000057FF10 string=0x000000000057FF14 "M"
 *   insn=0x000000000057FF1C string=0x000000000057FF20 ""|@"
 *   insn=0x000000000057FF20 string=0x000000000057FF24 "c"
 *   insn=0x000000000057FF2C string=0x000000000057FF30 "chb8"
 *   insn=0x000000000057FF38 string=0x000000000057FF3C "@`M9`"
 *   insn=0x000000000057FF3C string=0x000000000057FF40 "`"
 *   insn=0x000000000057FF4C string=0x000000000057FF50 "A"
 *   insn=0x000000000057FF50 string=0x000000000057FF54 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_57FF08(__int64 a1, int a2)
{
  __int64 v2; // x2
  __int64 v3; // x1

  if ( a2 > 97 )
LABEL_2:
    abort();
  v2 = a2;
  v3 = *(_QWORD *)(a1 + 8LL * a2);
  if ( (*(_QWORD *)(a1 + 832) & 0x4000000000000000LL) != 0 && *(_BYTE *)(a1 + v2 + 856) )
    return v3;
  if ( byte_6FE360[v2] != 8 )
    goto LABEL_2;
  return *(_QWORD *)v3;
}

