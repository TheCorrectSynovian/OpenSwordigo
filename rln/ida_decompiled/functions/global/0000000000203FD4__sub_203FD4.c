/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203FD4
 * Mangled: sub_203FD4
 * Demangled: sub_203FD4
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000203FDC string=0x0000000000203FE0 "3'"
 *   insn=0x0000000000203FF8 string=0x0000000000203FFC ""'"
 *   insn=0x0000000000204008 string=0x000000000020400C ""
 *   insn=0x000000000020400C string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_203FD4()
{
  sub_522294(&unk_6E8A62);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8A62, &off_6E8000);
}

