/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020502C
 * Mangled: sub_20502C
 * Demangled: sub_20502C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 1
 *   insn=0x0000000000205064 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20502C()
{
  sub_522294(&unk_6E8B4E);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8B4E, &off_6E8000);
}

