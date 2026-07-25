/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204F3C
 * Mangled: sub_204F3C
 * Demangled: sub_204F3C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000204F44 string=0x0000000000204F48 "3'"
 *   insn=0x0000000000204F60 string=0x0000000000204F64 ""'"
 *   insn=0x0000000000204F70 string=0x0000000000204F74 "3"
 *   insn=0x0000000000204F74 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204F3C()
{
  sub_522294(&unk_6E8B49);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8B49, &off_6E8000);
}

