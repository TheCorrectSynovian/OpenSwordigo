/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002065F8
 * Mangled: sub_2065F8
 * Demangled: sub_2065F8
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x000000000020660C string=0x0000000000206610 "!o"
 *   insn=0x0000000000206630 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_2065F8()
{
  sub_522294(&unk_6E8BFA);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8BFA, &off_6E8000);
}

