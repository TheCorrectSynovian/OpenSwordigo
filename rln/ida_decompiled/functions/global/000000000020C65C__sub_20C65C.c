/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020C65C
 * Mangled: sub_20C65C
 * Demangled: sub_20C65C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 3
 *   insn=0x000000000020C670 string=0x000000000020C674 "W"
 *   insn=0x000000000020C690 string=0x000000000020C694 "k"
 *   insn=0x000000000020C694 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20C65C()
{
  sub_522294(&unk_6E9E49);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9E49, &off_6E8000);
}

