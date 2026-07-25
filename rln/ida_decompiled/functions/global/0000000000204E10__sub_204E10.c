/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204E10
 * Mangled: sub_204E10
 * Demangled: sub_204E10
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 5
 *   insn=0x0000000000204E18 string=0x0000000000204E1C "3'"
 *   insn=0x0000000000204E24 string=0x0000000000204E28 "u"
 *   insn=0x0000000000204E34 string=0x0000000000204E38 ""'"
 *   insn=0x0000000000204E44 string=0x0000000000204E48 "~"
 *   insn=0x0000000000204E48 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204E10()
{
  sub_522294(&unk_6E8AE7);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8AE7, &off_6E8000);
}

