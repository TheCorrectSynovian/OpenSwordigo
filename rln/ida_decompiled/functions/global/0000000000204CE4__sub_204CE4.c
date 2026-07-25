/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204CE4
 * Mangled: sub_204CE4
 * Demangled: sub_204CE4
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000204CEC string=0x0000000000204CF0 "3'"
 *   insn=0x0000000000204CF8 string=0x0000000000204CFC "fu"
 *   insn=0x0000000000204D08 string=0x0000000000204D0C ""'"
 *   insn=0x0000000000204D1C string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204CE4()
{
  sub_522294(&unk_6E8AE2);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8AE2, &off_6E8000);
}

