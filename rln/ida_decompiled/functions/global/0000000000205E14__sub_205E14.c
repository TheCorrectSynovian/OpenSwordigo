/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000205E14
 * Mangled: sub_205E14
 * Demangled: sub_205E14
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x0000000000205E48 string=0x0000000000205E4C "}"
 *   insn=0x0000000000205E4C string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_205E14()
{
  sub_522294(&unk_6E8BC3);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8BC3, &off_6E8000);
}

