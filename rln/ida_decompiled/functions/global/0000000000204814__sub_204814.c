/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204814
 * Mangled: sub_204814
 * Demangled: sub_204814
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 3
 *   insn=0x000000000020481C string=0x0000000000204820 "3'"
 *   insn=0x0000000000204838 string=0x000000000020483C ""'"
 *   insn=0x000000000020484C string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204814()
{
  sub_522294(&unk_6E8AAE);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8AAE, &off_6E8000);
}

