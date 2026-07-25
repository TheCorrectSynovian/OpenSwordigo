/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000568BF0
 * Mangled: sub_568BF0
 * Demangled: sub_568BF0
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000568BF8 string=0x0000000000568BFC "A"
 *   insn=0x0000000000568C0C string=0x0000000000568C10 "_`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_568BF0(__int64 result, __int64 a2)
{
  if ( (__int64 *)result != &qword_6FD2E0 )
  {
    *(_DWORD *)(result + 16) = 0;
    *(_QWORD *)result = a2;
    *(_BYTE *)(result + a2 + 24) = 0;
  }
  return result;
}

