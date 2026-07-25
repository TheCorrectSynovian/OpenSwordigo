/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002058EC
 * Mangled: sub_2058EC
 * Demangled: sub_2058EC
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x0000000000205900 string=0x0000000000205904 "dr"
 *   insn=0x0000000000205924 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_2058EC()
{
  sub_522294(&unk_6E8BAD);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8BAD, &off_6E8000);
}

