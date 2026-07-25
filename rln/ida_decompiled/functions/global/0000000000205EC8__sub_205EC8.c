/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000205EC8
 * Mangled: sub_205EC8
 * Demangled: sub_205EC8
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x0000000000205EFC string=0x0000000000205F00 "P"
 *   insn=0x0000000000205F00 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_205EC8()
{
  sub_522294(&unk_6E8BC6);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8BC6, &off_6E8000);
}

