/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204CA8
 * Mangled: sub_204CA8
 * Demangled: sub_204CA8
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000204CB0 string=0x0000000000204CB4 "3'"
 *   insn=0x0000000000204CBC string=0x0000000000204CC0 "uu"
 *   insn=0x0000000000204CCC string=0x0000000000204CD0 ""'"
 *   insn=0x0000000000204CE0 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204CA8()
{
  sub_522294(&unk_6E8AE1);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8AE1, &off_6E8000);
}

