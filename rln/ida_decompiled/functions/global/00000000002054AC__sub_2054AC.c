/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002054AC
 * Mangled: sub_2054AC
 * Demangled: sub_2054AC
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x00000000002054C0 string=0x00000000002054C4 "ts"
 *   insn=0x00000000002054E4 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_2054AC()
{
  sub_522294(&unk_6E8B89);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8B89, &off_6E8000);
}

