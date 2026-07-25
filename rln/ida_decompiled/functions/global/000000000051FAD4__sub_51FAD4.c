/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051FAD4
 * Mangled: sub_51FAD4
 * Demangled: sub_51FAD4
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 1
 *   insn=0x000000000051FAE4 string=0x000000000051FAE8 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_51FAD4(int a1, const void *a2, __int64 a3, void *a4)
{
  memcpy(a4, a2, a3 - (_QWORD)a2);
  return a3;
}

