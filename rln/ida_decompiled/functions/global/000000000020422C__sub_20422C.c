/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020422C
 * Mangled: sub_20422C
 * Demangled: sub_20422C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000204234 string=0x0000000000204238 "3'"
 *   insn=0x0000000000204250 string=0x0000000000204254 ""'"
 *   insn=0x0000000000204260 string=0x0000000000204264 "w"
 *   insn=0x0000000000204264 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20422C()
{
  sub_522294(&unk_6E8A6D);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8A6D, &off_6E8000);
}

