/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020AE10
 * Mangled: sub_20AE10
 * Demangled: sub_20AE10
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 3
 *   insn=0x000000000020AE24 string=0x000000000020AE28 "]"
 *   insn=0x000000000020AE44 string=0x000000000020AE48 "~"
 *   insn=0x000000000020AE48 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20AE10()
{
  sub_522294(&unk_6E99F5);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E99F5, &off_6E8000);
}

