/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002096B8
 * Mangled: sub_2096B8
 * Demangled: sub_2096B8
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x00000000002096EC string=0x00000000002096F0 "T"
 *   insn=0x00000000002096F0 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_2096B8()
{
  sub_522294(&unk_6E98FD);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E98FD, &off_6E8000);
}

