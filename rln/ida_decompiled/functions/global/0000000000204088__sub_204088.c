/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204088
 * Mangled: sub_204088
 * Demangled: sub_204088
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000204090 string=0x0000000000204094 "3'"
 *   insn=0x000000000020409C string=0x00000000002040A0 "}x"
 *   insn=0x00000000002040AC string=0x00000000002040B0 ""'"
 *   insn=0x00000000002040C0 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204088()
{
  sub_522294(&unk_6E8A65);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8A65, &off_6E8000);
}

