/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020D088
 * Mangled: sub_20D088
 * Demangled: sub_20D088
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x000000000020D09C string=0x000000000020D0A0 "}T"
 *   insn=0x000000000020D0C0 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20D088()
{
  sub_522294(&unk_6E9F95);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9F95, &off_6E8000);
}

