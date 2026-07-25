/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204100
 * Mangled: sub_204100
 * Demangled: sub_204100
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000204108 string=0x000000000020410C "3'"
 *   insn=0x0000000000204114 string=0x0000000000204118 "_x"
 *   insn=0x0000000000204124 string=0x0000000000204128 ""'"
 *   insn=0x0000000000204138 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204100()
{
  sub_522294(&unk_6E8A67);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8A67, &off_6E8000);
}

