/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020ADD4
 * Mangled: sub_20ADD4
 * Demangled: sub_20ADD4
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x000000000020ADE8 string=0x000000000020ADEC "*]"
 *   insn=0x000000000020AE0C string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20ADD4()
{
  sub_522294(&unk_6E99F4);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E99F4, &off_6E8000);
}

