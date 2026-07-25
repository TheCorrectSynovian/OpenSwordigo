/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204178
 * Mangled: sub_204178
 * Demangled: sub_204178
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000204180 string=0x0000000000204184 "3'"
 *   insn=0x000000000020418C string=0x0000000000204190 "Ax"
 *   insn=0x000000000020419C string=0x00000000002041A0 ""'"
 *   insn=0x00000000002041B0 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204178()
{
  sub_522294(&unk_6E8A69);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8A69, &off_6E8000);
}

