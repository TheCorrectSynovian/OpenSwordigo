/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514CF0
 * Mangled: _ZNK11CPVRTString5emptyEv
 * Demangled: CPVRTString::empty(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall CPVRTString::empty(CPVRTString *this)
{
  return *((_QWORD *)this + 2) == 0;
}

