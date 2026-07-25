/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000209B4C
 * Mangled: sub_209B4C
 * Demangled: sub_209B4C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x0000000000209B80 string=0x0000000000209B84 "/"
 *   insn=0x0000000000209B84 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_209B4C()
{
  sub_522294(&unk_6E993B);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E993B, &off_6E8000);
}

