/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020C56C
 * Mangled: sub_20C56C
 * Demangled: sub_20C56C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x000000000020C580 string=0x000000000020C584 "DW"
 *   insn=0x000000000020C5A4 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20C56C()
{
  sub_522294(&unk_6E9DDA);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9DDA, &off_6E8000);
}

