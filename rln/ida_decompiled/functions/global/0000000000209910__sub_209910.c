/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000209910
 * Mangled: sub_209910
 * Demangled: sub_209910
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x0000000000209924 string=0x0000000000209928 "[b"
 *   insn=0x0000000000209948 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_209910()
{
  sub_522294(&unk_6E9907);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9907, &off_6E8000);
}

