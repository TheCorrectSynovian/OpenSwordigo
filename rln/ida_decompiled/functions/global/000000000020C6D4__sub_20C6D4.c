/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020C6D4
 * Mangled: sub_20C6D4
 * Demangled: sub_20C6D4
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x000000000020C708 string=0x000000000020C70C "M"
 *   insn=0x000000000020C70C string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20C6D4()
{
  sub_522294(&unk_6E9E4B);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9E4B, &off_6E8000);
}

