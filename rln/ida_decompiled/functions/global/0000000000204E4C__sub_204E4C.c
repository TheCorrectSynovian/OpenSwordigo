/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204E4C
 * Mangled: sub_204E4C
 * Demangled: sub_204E4C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000204E54 string=0x0000000000204E58 "3'"
 *   insn=0x0000000000204E70 string=0x0000000000204E74 ""'"
 *   insn=0x0000000000204E80 string=0x0000000000204E84 "o"
 *   insn=0x0000000000204E84 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204E4C()
{
  sub_522294(&unk_6E8AE8);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8AE8, &off_6E8000);
}

