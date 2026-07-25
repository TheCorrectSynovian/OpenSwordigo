/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204D5C
 * Mangled: sub_204D5C
 * Demangled: sub_204D5C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000204D64 string=0x0000000000204D68 "3'"
 *   insn=0x0000000000204D70 string=0x0000000000204D74 "Hu"
 *   insn=0x0000000000204D80 string=0x0000000000204D84 ""'"
 *   insn=0x0000000000204D94 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204D5C()
{
  sub_522294(&unk_6E8AE4);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8AE4, &off_6E8000);
}

