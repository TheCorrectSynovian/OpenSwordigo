/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020D13C
 * Mangled: sub_20D13C
 * Demangled: sub_20D13C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x000000000020D150 string=0x000000000020D154 "PT"
 *   insn=0x000000000020D174 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20D13C()
{
  sub_522294(&unk_6E9F98);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9F98, &off_6E8000);
}

