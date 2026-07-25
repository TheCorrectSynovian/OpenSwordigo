/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514980
 * Mangled: _ZNK11CPVRTStringltERKS_
 * Demangled: CPVRTString::operator<(CPVRTString const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 2
 *   insn=0x0000000000514988 string=0x000000000051498C "!"
 *   insn=0x0000000000514990 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTString::operator<(__int64 a1, __int64 a2)
{
  return (unsigned int)strcmp(*(const char **)(a1 + 8), *(const char **)(a2 + 8)) >> 31;
}

