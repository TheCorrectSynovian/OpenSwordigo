/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000513DB8
 * Mangled: _ZNK17CPVRTResourceFile9StringPtrEv
 * Demangled: CPVRTResourceFile::StringPtr(void)
 *
 * Callers: 1
 *   0x00000000001FA5D0  CPVRTResourceFile::StringPtr(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTResourceFile::StringPtr(CPVRTResourceFile *this)
{
  return *((_QWORD *)this + 3);
}

