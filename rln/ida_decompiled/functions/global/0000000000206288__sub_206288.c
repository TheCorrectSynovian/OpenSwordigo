/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000206288
 * Mangled: sub_206288
 * Demangled: sub_206288
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x00000000002062BC string=0x00000000002062C0 "`"
 *   insn=0x00000000002062C0 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_206288()
{
  sub_522294(&unk_6E8BD6);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8BD6, &off_6E8000);
}

