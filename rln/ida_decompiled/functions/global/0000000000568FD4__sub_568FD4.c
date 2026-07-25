/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000568FD4
 * Mangled: sub_568FD4
 * Demangled: sub_568FD4
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 5
 *   insn=0x0000000000568FD4 string=0x0000000000568FD8 """
 *   insn=0x0000000000568FEC string=0x0000000000568FF0 "3"
 *   insn=0x0000000000568FF4 string=0x0000000000568FF8 "0"
 *   insn=0x0000000000569000 string=0x0000000000569004 " "
 *   insn=0x0000000000569004 string=0x0000000000569008 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall sub_568FD4(__int64 *a1, __int64 a2)
{
  size_t v3; // x19
  size_t result; // x0

  v3 = a2 - *a1;
  sub_568CB8(a1, v3, 1, 0);
  result = *a1 + v3;
  *(_DWORD *)(*a1 - 8) = -1;
  return result;
}

