/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000501C24
 * Mangled: sub_501C24
 * Demangled: sub_501C24
 *
 * Callers: 1
 *   0x00000000004F14B4  sub_4F14B4
 *
 * Callees: 1
 *   0x0000000000500AC8  sub_500AC8
 *
 * Referenced strings: 2
 *   insn=0x0000000000501C30 string=0x0000000000501C34 "a"
 *   insn=0x0000000000501C38 string=0x0000000000501C3C "`""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_501C24(__int64 a1)
{
  __int64 result; // x0

  result = sub_500AC8(a1, (__int64 *)(a1 + 40));
  *(_DWORD *)(a1 + 32) = result;
  return result;
}

