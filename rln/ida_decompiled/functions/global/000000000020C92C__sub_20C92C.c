/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020C92C
 * Mangled: sub_20C92C
 * Demangled: sub_20C92C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x000000000020C940 string=0x000000000020C944 "TV"
 *   insn=0x000000000020C964 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20C92C()
{
  sub_522294(&unk_6E9E55);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9E55, &off_6E8000);
}

