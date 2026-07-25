/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020A654
 * Mangled: sub_20A654
 * Demangled: sub_20A654
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 3
 *   insn=0x000000000020A668 string=0x000000000020A66C "\n_"
 *   insn=0x000000000020A688 string=0x000000000020A68C "m"
 *   insn=0x000000000020A68C string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20A654()
{
  sub_522294(&unk_6E99D4);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E99D4, &off_6E8000);
}

