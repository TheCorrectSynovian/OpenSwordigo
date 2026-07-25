/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204FB4
 * Mangled: sub_204FB4
 * Demangled: sub_204FB4
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 3
 *   insn=0x0000000000204FBC string=0x0000000000204FC0 "3'"
 *   insn=0x0000000000204FD8 string=0x0000000000204FDC ""'"
 *   insn=0x0000000000204FEC string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204FB4()
{
  sub_522294(&unk_6E8B4C);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8B4C, &off_6E8000);
}

