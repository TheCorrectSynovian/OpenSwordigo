/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020488C
 * Mangled: sub_20488C
 * Demangled: sub_20488C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000204894 string=0x0000000000204898 "3'"
 *   insn=0x00000000002048A0 string=0x00000000002048A4 "|v"
 *   insn=0x00000000002048B0 string=0x00000000002048B4 ""'"
 *   insn=0x00000000002048C4 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20488C()
{
  sub_522294(&unk_6E8AB0);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8AB0, &off_6E8000);
}

