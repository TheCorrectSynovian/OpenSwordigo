/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514C40
 * Mangled: _ZNK11CPVRTStringeqEPKc
 * Demangled: CPVRTString::operator==(char const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 2
 *   insn=0x0000000000514C48 string=0x0000000000514C4C "5"
 *   insn=0x0000000000514C4C string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall CPVRTString::operator==(__int64 a1, const char *a2)
{
  return strcmp(*(const char **)(a1 + 8), a2) == 0;
}

