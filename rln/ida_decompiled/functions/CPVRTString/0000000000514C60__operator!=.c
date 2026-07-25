/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514C60
 * Mangled: _ZNK11CPVRTStringneERKS_
 * Demangled: CPVRTString::operator!=(CPVRTString const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 3
 *   insn=0x0000000000514C68 string=0x0000000000514C6C "!"
 *   insn=0x0000000000514C6C string=0x0000000000514C70 ","
 *   insn=0x0000000000514C70 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall CPVRTString::operator!=(__int64 a1, __int64 a2)
{
  return strcmp(*(const char **)(a1 + 8), *(const char **)(a2 + 8)) != 0;
}

