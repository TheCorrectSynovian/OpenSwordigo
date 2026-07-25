/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000205F7C
 * Mangled: sub_205F7C
 * Demangled: sub_205F7C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x0000000000205FB0 string=0x0000000000205FB4 "#"
 *   insn=0x0000000000205FB4 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_205F7C()
{
  sub_522294(&unk_6E8BC9);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8BC9, &off_6E8000);
}

