/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020B49C
 * Mangled: sub_20B49C
 * Demangled: sub_20B49C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x000000000020B4B0 string=0x000000000020B4B4 "x["
 *   insn=0x000000000020B4D4 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20B49C()
{
  sub_522294(&unk_6E9A70);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9A70, &off_6E8000);
}

