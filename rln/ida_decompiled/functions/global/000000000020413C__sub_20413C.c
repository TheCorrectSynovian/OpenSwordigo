/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020413C
 * Mangled: sub_20413C
 * Demangled: sub_20413C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000204144 string=0x0000000000204148 "3'"
 *   insn=0x0000000000204150 string=0x0000000000204154 "Px"
 *   insn=0x0000000000204160 string=0x0000000000204164 ""'"
 *   insn=0x0000000000204174 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20413C()
{
  sub_522294(&unk_6E8A68);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8A68, &off_6E8000);
}

