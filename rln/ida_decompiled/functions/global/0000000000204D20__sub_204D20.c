/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204D20
 * Mangled: sub_204D20
 * Demangled: sub_204D20
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000204D28 string=0x0000000000204D2C "3'"
 *   insn=0x0000000000204D34 string=0x0000000000204D38 "Wu"
 *   insn=0x0000000000204D44 string=0x0000000000204D48 ""'"
 *   insn=0x0000000000204D58 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204D20()
{
  sub_522294(&unk_6E8AE3);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8AE3, &off_6E8000);
}

