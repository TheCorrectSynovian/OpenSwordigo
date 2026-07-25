/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002065BC
 * Mangled: sub_2065BC
 * Demangled: sub_2065BC
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x00000000002065D0 string=0x00000000002065D4 "0o"
 *   insn=0x00000000002065F4 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_2065BC()
{
  sub_522294(&unk_6E8BF9);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8BF9, &off_6E8000);
}

