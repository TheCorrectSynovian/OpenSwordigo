/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002095C8
 * Mangled: sub_2095C8
 * Demangled: sub_2095C8
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x00000000002095DC string=0x00000000002095E0 "-c"
 *   insn=0x0000000000209600 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_2095C8()
{
  sub_522294(&unk_6E98F9);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E98F9, &off_6E8000);
}

