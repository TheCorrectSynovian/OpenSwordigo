/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204EC4
 * Mangled: sub_204EC4
 * Demangled: sub_204EC4
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000204ECC string=0x0000000000204ED0 "3'"
 *   insn=0x0000000000204EE8 string=0x0000000000204EEC ""'"
 *   insn=0x0000000000204EF8 string=0x0000000000204EFC "Q"
 *   insn=0x0000000000204EFC string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204EC4()
{
  sub_522294(&unk_6E8AF0);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8AF0, &off_6E8000);
}

