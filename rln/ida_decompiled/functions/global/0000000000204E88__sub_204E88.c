/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204E88
 * Mangled: sub_204E88
 * Demangled: sub_204E88
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000204E90 string=0x0000000000204E94 "3'"
 *   insn=0x0000000000204EAC string=0x0000000000204EB0 ""'"
 *   insn=0x0000000000204EBC string=0x0000000000204EC0 "`"
 *   insn=0x0000000000204EC0 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204E88()
{
  sub_522294(&unk_6E8AE9);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8AE9, &off_6E8000);
}

