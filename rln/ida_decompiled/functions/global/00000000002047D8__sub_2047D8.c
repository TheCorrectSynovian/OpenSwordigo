/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002047D8
 * Mangled: sub_2047D8
 * Demangled: sub_2047D8
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 3
 *   insn=0x00000000002047E0 string=0x00000000002047E4 "3'"
 *   insn=0x00000000002047FC string=0x0000000000204800 ""'"
 *   insn=0x0000000000204810 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_2047D8()
{
  sub_522294(&unk_6E8AAD);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8AAD, &off_6E8000);
}

