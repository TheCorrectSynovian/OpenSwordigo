/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000515608
 * Mangled: _ZN11CPVRTString4swapERS_
 * Demangled: CPVRTString::swap(CPVRTString&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x0000000000515608 string=0x000000000051560C ")"
 *   insn=0x000000000051560C string=0x0000000000515610 "!"
 *   insn=0x0000000000515610 string=0x0000000000515614 "("
 *   insn=0x0000000000515618 string=0x000000000051561C " "
 *   insn=0x000000000051561C string=0x0000000000515620 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall CPVRTString::swap(CPVRTString *this, CPVRTString *a2)
{
  __int64 v2; // x9
  __int128 v3; // q1
  long double result; // q0

  v2 = *((_QWORD *)a2 + 3);
  v3 = *(_OWORD *)((char *)a2 + 8);
  *((_QWORD *)a2 + 3) = *((_QWORD *)this + 3);
  result = *(long double *)((char *)this + 8);
  *(long double *)((char *)a2 + 8) = result;
  *((_QWORD *)this + 3) = v2;
  *(_OWORD *)((char *)this + 8) = v3;
  return result;
}

