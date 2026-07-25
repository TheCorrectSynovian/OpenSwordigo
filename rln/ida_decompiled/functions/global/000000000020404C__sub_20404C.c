/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020404C
 * Mangled: sub_20404C
 * Demangled: sub_20404C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 3
 *   insn=0x0000000000204054 string=0x0000000000204058 "3'"
 *   insn=0x0000000000204070 string=0x0000000000204074 ""'"
 *   insn=0x0000000000204084 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20404C()
{
  sub_522294(&unk_6E8A64);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8A64, &off_6E8000);
}

