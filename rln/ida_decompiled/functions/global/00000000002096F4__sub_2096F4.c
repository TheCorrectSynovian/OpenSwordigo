/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002096F4
 * Mangled: sub_2096F4
 * Demangled: sub_2096F4
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x0000000000209728 string=0x000000000020972C "E"
 *   insn=0x000000000020972C string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_2096F4()
{
  sub_522294(&unk_6E98FE);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E98FE, &off_6E8000);
}

