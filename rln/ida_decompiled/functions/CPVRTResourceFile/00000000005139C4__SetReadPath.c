/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005139C4
 * Mangled: _ZN17CPVRTResourceFile11SetReadPathEPKc
 * Demangled: CPVRTResourceFile::SetReadPath(char const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F79E0  CPVRTString::operator=(char const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000005139DC string=0x00000000001F79E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTResourceFile::SetReadPath(CPVRTResourceFile *this, const char *a2)
{
  char *v2; // x1

  if ( this )
    v2 = (char *)this;
  else
    v2 = "";
  return CPVRTString::operator=((int)&CPVRTResourceFile::s_ReadPath, v2);
}

