/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000205CAC
 * Mangled: sub_205CAC
 * Demangled: sub_205CAC
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x0000000000205CC0 string=0x0000000000205CC4 "tq"
 *   insn=0x0000000000205CE4 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_205CAC()
{
  sub_522294(&unk_6E8BBD);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8BBD, &off_6E8000);
}

