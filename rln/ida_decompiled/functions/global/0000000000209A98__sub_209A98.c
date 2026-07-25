/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000209A98
 * Mangled: sub_209A98
 * Demangled: sub_209A98
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x0000000000209ACC string=0x0000000000209AD0 "\"
 *   insn=0x0000000000209AD0 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_209A98()
{
  sub_522294(&unk_6E9938);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9938, &off_6E8000);
}

