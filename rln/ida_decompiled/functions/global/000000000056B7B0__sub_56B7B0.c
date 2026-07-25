/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B7B0
 * Mangled: sub_56B7B0
 * Demangled: sub_56B7B0
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056B6DC  sub_56B6DC
 *
 * Referenced strings: 1
 *   insn=0x000000000056B7B0 string=0x000000000056B7B4 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56B7B0(_QWORD *a1, _DWORD **a2, unsigned __int64 a3)
{
  return sub_56B6DC(a1, *a2, a3, *((_QWORD *)*a2 - 3));
}

