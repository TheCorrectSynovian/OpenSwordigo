/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204268
 * Mangled: sub_204268
 * Demangled: sub_204268
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000204270 string=0x0000000000204274 "3'"
 *   insn=0x000000000020428C string=0x0000000000204290 ""'"
 *   insn=0x000000000020429C string=0x00000000002042A0 "h"
 *   insn=0x00000000002042A0 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204268()
{
  sub_522294(&unk_6E8A6E);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8A6E, &off_6E8000);
}

