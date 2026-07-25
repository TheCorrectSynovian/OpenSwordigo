/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204F00
 * Mangled: sub_204F00
 * Demangled: sub_204F00
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000204F08 string=0x0000000000204F0C "3'"
 *   insn=0x0000000000204F24 string=0x0000000000204F28 ""'"
 *   insn=0x0000000000204F34 string=0x0000000000204F38 "B"
 *   insn=0x0000000000204F38 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204F00()
{
  sub_522294(&unk_6E8B48);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8B48, &off_6E8000);
}

