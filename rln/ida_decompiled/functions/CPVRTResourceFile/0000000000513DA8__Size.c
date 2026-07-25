/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000513DA8
 * Mangled: _ZNK17CPVRTResourceFile4SizeEv
 * Demangled: CPVRTResourceFile::Size(void)
 *
 * Callers: 1
 *   0x00000000001F7260  CPVRTResourceFile::Size(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTResourceFile::Size(CPVRTResourceFile *this)
{
  return *((_QWORD *)this + 2);
}

