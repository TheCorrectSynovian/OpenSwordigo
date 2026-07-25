/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000513DB0
 * Mangled: _ZNK17CPVRTResourceFile7DataPtrEv
 * Demangled: CPVRTResourceFile::DataPtr(void)
 *
 * Callers: 1
 *   0x00000000001FCB40  CPVRTResourceFile::DataPtr(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTResourceFile::DataPtr(CPVRTResourceFile *this)
{
  return *((_QWORD *)this + 3);
}

