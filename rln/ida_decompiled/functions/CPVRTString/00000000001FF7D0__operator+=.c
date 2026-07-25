/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF7D0
 * Mangled: ._ZN11CPVRTStringpLEPKc
 * Demangled: CPVRTString::operator+=(char const*)
 *
 * Callers: 1
 *   0x0000000000513A00  CPVRTResourceFile::CPVRTResourceFile(char const*)
 *
 * Callees: 1
 *   0x0000000000515714  CPVRTString::operator+=(char const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF7D8 string=0x00000000001FF7DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall CPVRTString::operator+=(int a1, char *a2)
{
  return _ZN11CPVRTStringpLEPKc(a1, a2);
}

