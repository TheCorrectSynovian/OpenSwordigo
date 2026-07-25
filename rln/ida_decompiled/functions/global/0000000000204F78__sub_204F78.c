/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204F78
 * Mangled: sub_204F78
 * Demangled: sub_204F78
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000204F80 string=0x0000000000204F84 "3'"
 *   insn=0x0000000000204F9C string=0x0000000000204FA0 ""'"
 *   insn=0x0000000000204FAC string=0x0000000000204FB0 "$"
 *   insn=0x0000000000204FB0 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204F78()
{
  sub_522294(&unk_6E8B4A);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8B4A, &off_6E8000);
}

