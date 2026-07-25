/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020AA14
 * Mangled: sub_20AA14
 * Demangled: sub_20AA14
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x000000000020AA48 string=0x000000000020AA4C "}"
 *   insn=0x000000000020AA4C string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20AA14()
{
  sub_522294(&unk_6E99E4);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E99E4, &off_6E8000);
}

