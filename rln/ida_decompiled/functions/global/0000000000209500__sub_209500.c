/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000209500
 * Mangled: sub_209500
 * Demangled: sub_209500
 *
 * Callers: 1
 *   0x0000000000207278  sub_207278
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x0000000000209514 string=0x0000000000209518 "_c"
 *   insn=0x0000000000209538 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_209500()
{
  sub_522294(&unk_6E98E0);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E98E0, &off_6E8000);
}

