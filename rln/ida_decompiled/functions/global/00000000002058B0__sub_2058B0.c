/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002058B0
 * Mangled: sub_2058B0
 * Demangled: sub_2058B0
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x00000000002058C4 string=0x00000000002058C8 "sr"
 *   insn=0x00000000002058E8 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_2058B0()
{
  sub_522294(&unk_6E8BAC);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8BAC, &off_6E8000);
}

