/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B470
 * Mangled: sub_54B470
 * Demangled: sub_54B470
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000053DB28  sub_53DB28
 *
 * Referenced strings: 8
 *   insn=0x000000000054B470 string=0x000000000054B474 "b"
 *   insn=0x000000000054B47C string=0x000000000054B480 """
 *   insn=0x000000000054B480 string=0x000000000054B484 "?"
 *   insn=0x000000000054B484 string=0x000000000054B488 "?"
 *   insn=0x000000000054B488 string=0x000000000054B48C "?"
 *   insn=0x000000000054B48C string=0x000000000054B490 "?"
 *   insn=0x000000000054B490 string=0x000000000054B494 "?"
 *   insn=0x000000000054B494 string=0x000000000054B498 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned int *__fastcall sub_54B470(_QWORD *a1)
{
  *a1 = off_6B7710;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  return sub_53DB28(a1 + 7);
}

