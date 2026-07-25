/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002041B4
 * Mangled: sub_2041B4
 * Demangled: sub_2041B4
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x00000000002041BC string=0x00000000002041C0 "3'"
 *   insn=0x00000000002041C8 string=0x00000000002041CC "2x"
 *   insn=0x00000000002041D8 string=0x00000000002041DC ""'"
 *   insn=0x00000000002041EC string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_2041B4()
{
  sub_522294(&unk_6E8A6B);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8A6B, &off_6E8000);
}

