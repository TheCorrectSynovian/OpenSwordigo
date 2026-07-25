/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204D98
 * Mangled: sub_204D98
 * Demangled: sub_204D98
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000204DA0 string=0x0000000000204DA4 "3'"
 *   insn=0x0000000000204DAC string=0x0000000000204DB0 "9u"
 *   insn=0x0000000000204DBC string=0x0000000000204DC0 ""'"
 *   insn=0x0000000000204DD0 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204D98()
{
  sub_522294(&unk_6E8AE5);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8AE5, &off_6E8000);
}

