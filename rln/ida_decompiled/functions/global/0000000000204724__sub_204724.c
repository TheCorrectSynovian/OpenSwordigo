/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204724
 * Mangled: sub_204724
 * Demangled: sub_204724
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x000000000020472C string=0x0000000000204730 "3'"
 *   insn=0x0000000000204748 string=0x000000000020474C ""'"
 *   insn=0x0000000000204758 string=0x000000000020475C "9"
 *   insn=0x000000000020475C string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204724()
{
  sub_522294(&unk_6E8AAA);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8AAA, &off_6E8000);
}

