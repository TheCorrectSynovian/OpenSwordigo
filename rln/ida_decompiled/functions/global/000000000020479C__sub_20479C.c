/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020479C
 * Mangled: sub_20479C
 * Demangled: sub_20479C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x00000000002047A4 string=0x00000000002047A8 "3'"
 *   insn=0x00000000002047C0 string=0x00000000002047C4 ""'"
 *   insn=0x00000000002047D0 string=0x00000000002047D4 ""
 *   insn=0x00000000002047D4 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20479C()
{
  sub_522294(&unk_6E8AAC);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8AAC, &off_6E8000);
}

