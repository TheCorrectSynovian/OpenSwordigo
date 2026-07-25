/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204DD4
 * Mangled: sub_204DD4
 * Demangled: sub_204DD4
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000204DDC string=0x0000000000204DE0 "3'"
 *   insn=0x0000000000204DE8 string=0x0000000000204DEC "*u"
 *   insn=0x0000000000204DF8 string=0x0000000000204DFC ""'"
 *   insn=0x0000000000204E0C string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204DD4()
{
  sub_522294(&unk_6E8AE6);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8AE6, &off_6E8000);
}

