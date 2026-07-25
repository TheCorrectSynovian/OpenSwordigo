/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020AA50
 * Mangled: sub_20AA50
 * Demangled: sub_20AA50
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 3
 *   insn=0x000000000020AA64 string=0x000000000020AA68 "^"
 *   insn=0x000000000020AA84 string=0x000000000020AA88 "n"
 *   insn=0x000000000020AA88 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20AA50()
{
  sub_522294(&unk_6E99E5);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E99E5, &off_6E8000);
}

