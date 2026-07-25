/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B92C
 * Mangled: sub_54B92C
 * Demangled: sub_54B92C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000053DB28  sub_53DB28
 *
 * Referenced strings: 9
 *   insn=0x000000000054B92C string=0x000000000054B930 "b"
 *   insn=0x000000000054B938 string=0x000000000054B93C """
 *   insn=0x000000000054B93C string=0x000000000054B940 "?"
 *   insn=0x000000000054B940 string=0x000000000054B944 "?"
 *   insn=0x000000000054B944 string=0x000000000054B948 "?"
 *   insn=0x000000000054B948 string=0x000000000054B94C "?"
 *   insn=0x000000000054B94C string=0x000000000054B950 "?"
 *   insn=0x000000000054B950 string=0x000000000054B954 "?"
 *   insn=0x000000000054B954 string=0x000000000054B958 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned int *__fastcall sub_54B92C(_QWORD *a1)
{
  *a1 = off_6B7790;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  return sub_53DB28(a1 + 7);
}

