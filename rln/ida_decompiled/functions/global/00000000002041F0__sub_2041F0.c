/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002041F0
 * Mangled: sub_2041F0
 * Demangled: sub_2041F0
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x00000000002041F8 string=0x00000000002041FC "3'"
 *   insn=0x0000000000204204 string=0x0000000000204208 "#x"
 *   insn=0x0000000000204214 string=0x0000000000204218 ""'"
 *   insn=0x0000000000204228 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_2041F0()
{
  sub_522294(&unk_6E8A6C);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8A6C, &off_6E8000);
}

