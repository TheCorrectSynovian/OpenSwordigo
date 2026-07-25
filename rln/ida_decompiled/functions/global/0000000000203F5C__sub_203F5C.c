/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203F5C
 * Mangled: sub_203F5C
 * Demangled: sub_203F5C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000203F64 string=0x0000000000203F68 "3'"
 *   insn=0x0000000000203F80 string=0x0000000000203F84 ""'"
 *   insn=0x0000000000203F90 string=0x0000000000203F94 "+"
 *   insn=0x0000000000203F94 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_203F5C()
{
  sub_522294(&unk_6E8A60);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8A60, &off_6E8000);
}

