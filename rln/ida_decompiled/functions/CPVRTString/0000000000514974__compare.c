/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514974
 * Mangled: _ZNK11CPVRTString7compareERKS_
 * Demangled: CPVRTString::compare(CPVRTString const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 2
 *   insn=0x0000000000514974 string=0x0000000000514978 "!"
 *   insn=0x000000000051497C string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTString::compare(const char **this, const char **a2)
{
  return strcmp(this[1], a2[1]);
}

