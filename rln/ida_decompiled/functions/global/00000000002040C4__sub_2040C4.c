/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002040C4
 * Mangled: sub_2040C4
 * Demangled: sub_2040C4
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x00000000002040CC string=0x00000000002040D0 "3'"
 *   insn=0x00000000002040D8 string=0x00000000002040DC "nx"
 *   insn=0x00000000002040E8 string=0x00000000002040EC ""'"
 *   insn=0x00000000002040FC string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_2040C4()
{
  sub_522294(&unk_6E8A66);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8A66, &off_6E8000);
}

