/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000209CF0
 * Mangled: sub_209CF0
 * Demangled: sub_209CF0
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x0000000000209D04 string=0x0000000000209D08 "ca"
 *   insn=0x0000000000209D28 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_209CF0()
{
  sub_522294(&unk_6E9942);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9942, &off_6E8000);
}

