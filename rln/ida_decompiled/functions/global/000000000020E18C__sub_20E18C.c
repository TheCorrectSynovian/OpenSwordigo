/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020E18C
 * Mangled: sub_20E18C
 * Demangled: sub_20E18C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x000000000020E174  sub_20E174
 *
 * Referenced strings: 2
 *   insn=0x000000000020E194 string=0x000000000020E198 "B"
 *   insn=0x000000000020E1A0 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_20E18C(void *a1)
{
  return __cxa_atexit((void (*)(void *))sub_20E174, a1, &off_6E8000);
}

