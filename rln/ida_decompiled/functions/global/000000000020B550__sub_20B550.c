/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020B550
 * Mangled: sub_20B550
 * Demangled: sub_20B550
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x000000000020B564 string=0x000000000020B568 "K["
 *   insn=0x000000000020B588 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20B550()
{
  sub_522294(&unk_6E9AFA);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9AFA, &off_6E8000);
}

