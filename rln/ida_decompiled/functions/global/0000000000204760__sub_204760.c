/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204760
 * Mangled: sub_204760
 * Demangled: sub_204760
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000204768 string=0x000000000020476C "3'"
 *   insn=0x0000000000204784 string=0x0000000000204788 ""'"
 *   insn=0x0000000000204794 string=0x0000000000204798 "*"
 *   insn=0x0000000000204798 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204760()
{
  sub_522294(&unk_6E8AAB);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8AAB, &off_6E8000);
}

