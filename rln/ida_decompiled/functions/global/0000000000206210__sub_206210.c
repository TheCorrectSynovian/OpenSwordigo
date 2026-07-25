/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000206210
 * Mangled: sub_206210
 * Demangled: sub_206210
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 3
 *   insn=0x0000000000206224 string=0x0000000000206228 "p"
 *   insn=0x0000000000206244 string=0x0000000000206248 "~"
 *   insn=0x0000000000206248 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_206210()
{
  sub_522294(&unk_6E8BD4);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8BD4, &off_6E8000);
}

