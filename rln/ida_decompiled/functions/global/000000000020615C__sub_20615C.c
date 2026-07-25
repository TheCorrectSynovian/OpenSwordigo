/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020615C
 * Mangled: sub_20615C
 * Demangled: sub_20615C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x0000000000206170 string=0x0000000000206174 "Hp"
 *   insn=0x0000000000206194 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20615C()
{
  sub_522294(&unk_6E8BD1);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8BD1, &off_6E8000);
}

