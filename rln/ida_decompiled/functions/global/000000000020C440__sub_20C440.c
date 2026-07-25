/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020C440
 * Mangled: sub_20C440
 * Demangled: sub_20C440
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 1
 *   insn=0x000000000020C478 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20C440()
{
  sub_522294(&unk_6E9DC2);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9DC2, &off_6E8000);
}

