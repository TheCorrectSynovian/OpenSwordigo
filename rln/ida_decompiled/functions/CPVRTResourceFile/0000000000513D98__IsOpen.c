/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000513D98
 * Mangled: _ZNK17CPVRTResourceFile6IsOpenEv
 * Demangled: CPVRTResourceFile::IsOpen(void)
 *
 * Callers: 1
 *   0x00000000001FD7E0  CPVRTResourceFile::IsOpen(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTResourceFile::IsOpen(CPVRTResourceFile *this)
{
  return *((unsigned __int8 *)this + 8);
}

