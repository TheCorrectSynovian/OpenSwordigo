/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020C5A8
 * Mangled: sub_20C5A8
 * Demangled: sub_20C5A8
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x000000000020C5BC string=0x000000000020C5C0 "5W"
 *   insn=0x000000000020C5E0 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20C5A8()
{
  sub_522294(&unk_6E9DDB);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9DDB, &off_6E8000);
}

