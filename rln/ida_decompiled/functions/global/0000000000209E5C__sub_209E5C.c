/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000209E5C
 * Mangled: sub_209E5C
 * Demangled: sub_209E5C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 3
 *   insn=0x0000000000209E70 string=0x0000000000209E74 "a"
 *   insn=0x0000000000209E90 string=0x0000000000209E94 "k"
 *   insn=0x0000000000209E94 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_209E5C()
{
  sub_522294(&unk_6E9980);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9980, &off_6E8000);
}

