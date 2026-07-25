/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000205F04
 * Mangled: sub_205F04
 * Demangled: sub_205F04
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x0000000000205F38 string=0x0000000000205F3C "A"
 *   insn=0x0000000000205F3C string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_205F04()
{
  sub_522294(&unk_6E8BC7);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8BC7, &off_6E8000);
}

