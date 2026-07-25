/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000209F10
 * Mangled: sub_209F10
 * Demangled: sub_209F10
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x0000000000209F44 string=0x0000000000209F48 ">"
 *   insn=0x0000000000209F48 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_209F10()
{
  sub_522294(&unk_6E9983);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9983, &off_6E8000);
}

