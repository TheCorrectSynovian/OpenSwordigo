/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F79E0
 * Mangled: ._ZN11CPVRTStringaSEPKc
 * Demangled: CPVRTString::operator=(char const*)
 *
 * Callers: 1
 *   0x00000000005139C4  CPVRTResourceFile::SetReadPath(char const*)
 *
 * Callees: 1
 *   0x00000000005158E4  CPVRTString::operator=(char const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F79E8 string=0x00000000001F79EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall CPVRTString::operator=(int a1, char *a2)
{
  return _ZN11CPVRTStringaSEPKc(a1, a2);
}

