/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002048C8
 * Mangled: sub_2048C8
 * Demangled: sub_2048C8
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x00000000002048D0 string=0x00000000002048D4 "3'"
 *   insn=0x00000000002048DC string=0x00000000002048E0 "mv"
 *   insn=0x00000000002048EC string=0x00000000002048F0 ""'"
 *   insn=0x0000000000204900 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_2048C8()
{
  sub_522294(&unk_6E8AB1);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8AB1, &off_6E8000);
}

