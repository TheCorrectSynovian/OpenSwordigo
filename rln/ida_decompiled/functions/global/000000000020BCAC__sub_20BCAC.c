/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020BCAC
 * Mangled: sub_20BCAC
 * Demangled: sub_20BCAC
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x000000000020BCC0 string=0x000000000020BCC4 "tY"
 *   insn=0x000000000020BCE4 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20BCAC()
{
  sub_522294(&unk_6E9BA2);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9BA2, &off_6E8000);
}

