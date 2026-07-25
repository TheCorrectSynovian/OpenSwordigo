/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000205F40
 * Mangled: sub_205F40
 * Demangled: sub_205F40
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x0000000000205F74 string=0x0000000000205F78 "2"
 *   insn=0x0000000000205F78 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_205F40()
{
  sub_522294(&unk_6E8BC8);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8BC8, &off_6E8000);
}

