/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514AA8
 * Mangled: _ZNK11CPVRTString7compareEPKc
 * Demangled: CPVRTString::compare(char const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 1
 *   insn=0x0000000000514AAC string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTString::compare(const char **this, const char *a2)
{
  return strcmp(this[1], a2);
}

