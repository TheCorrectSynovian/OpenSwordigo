/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204904
 * Mangled: sub_204904
 * Demangled: sub_204904
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x000000000020490C string=0x0000000000204910 "3'"
 *   insn=0x0000000000204918 string=0x000000000020491C "^v"
 *   insn=0x0000000000204928 string=0x000000000020492C ""'"
 *   insn=0x000000000020493C string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204904()
{
  sub_522294(&unk_6E8AB2);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8AB2, &off_6E8000);
}

