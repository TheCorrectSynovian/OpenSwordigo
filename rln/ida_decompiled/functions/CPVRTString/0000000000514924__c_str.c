/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514924
 * Mangled: _ZNK11CPVRTString5c_strEv
 * Demangled: CPVRTString::c_str(void)
 *
 * Callers: 1
 *   0x00000000001F7960  CPVRTString::c_str(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTString::c_str(CPVRTString *this)
{
  return *((_QWORD *)this + 1);
}

