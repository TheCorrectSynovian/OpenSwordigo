/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020A168
 * Mangled: sub_20A168
 * Demangled: sub_20A168
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x000000000020A17C string=0x000000000020A180 "E`"
 *   insn=0x000000000020A1A0 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20A168()
{
  sub_522294(&unk_6E99BF);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E99BF, &off_6E8000);
}

