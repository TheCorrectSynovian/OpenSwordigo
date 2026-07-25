/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000209B88
 * Mangled: sub_209B88
 * Demangled: sub_209B88
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x0000000000209BBC string=0x0000000000209BC0 " "
 *   insn=0x0000000000209BC0 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_209B88()
{
  sub_522294(&unk_6E993C);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E993C, &off_6E8000);
}

