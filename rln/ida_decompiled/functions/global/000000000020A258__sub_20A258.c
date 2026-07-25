/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020A258
 * Mangled: sub_20A258
 * Demangled: sub_20A258
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 3
 *   insn=0x000000000020A26C string=0x000000000020A270 "\t`"
 *   insn=0x000000000020A28C string=0x000000000020A290 "l"
 *   insn=0x000000000020A290 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20A258()
{
  sub_522294(&unk_6E99C3);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E99C3, &off_6E8000);
}

