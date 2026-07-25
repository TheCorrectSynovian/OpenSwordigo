/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000206A74
 * Mangled: sub_206A74
 * Demangled: sub_206A74
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x0000000000206AA8 string=0x0000000000206AAC "e"
 *   insn=0x0000000000206AAC string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_206A74()
{
  sub_522294(&unk_6E8C20);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8C20, &off_6E8000);
}

