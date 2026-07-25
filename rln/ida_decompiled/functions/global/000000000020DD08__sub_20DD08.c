/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020DD08
 * Mangled: sub_20DD08
 * Demangled: sub_20DD08
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x000000000020DD1C string=0x000000000020DD20 "]Q"
 *   insn=0x000000000020DD40 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20DD08()
{
  sub_522294(&unk_6EA04A);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6EA04A, &off_6E8000);
}

