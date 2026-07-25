/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002059DC
 * Mangled: sub_2059DC
 * Demangled: sub_2059DC
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x00000000002059F0 string=0x00000000002059F4 "(r"
 *   insn=0x0000000000205A14 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_2059DC()
{
  sub_522294(&unk_6E8BB1);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8BB1, &off_6E8000);
}

