/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020AF3C
 * Mangled: sub_20AF3C
 * Demangled: sub_20AF3C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x000000000020AF70 string=0x000000000020AF74 "3"
 *   insn=0x000000000020AF74 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20AF3C()
{
  sub_522294(&unk_6E99FA);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E99FA, &off_6E8000);
}

