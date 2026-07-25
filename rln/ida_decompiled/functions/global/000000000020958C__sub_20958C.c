/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020958C
 * Mangled: sub_20958C
 * Demangled: sub_20958C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x00000000002095A0 string=0x00000000002095A4 "<c"
 *   insn=0x00000000002095C4 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20958C()
{
  sub_522294(&unk_6E98F8);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E98F8, &off_6E8000);
}

