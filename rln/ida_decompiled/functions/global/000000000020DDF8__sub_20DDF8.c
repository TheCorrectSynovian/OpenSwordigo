/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020DDF8
 * Mangled: sub_20DDF8
 * Demangled: sub_20DDF8
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x000000000020DE0C string=0x000000000020DE10 "!Q"
 *   insn=0x000000000020DE30 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20DDF8()
{
  sub_522294(&unk_6EA04E);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6EA04E, &off_6E8000);
}

