/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000205ACC
 * Mangled: sub_205ACC
 * Demangled: sub_205ACC
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x0000000000205B00 string=0x0000000000205B04 "O"
 *   insn=0x0000000000205B04 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_205ACC()
{
  sub_522294(&unk_6E8BB5);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8BB5, &off_6E8000);
}

