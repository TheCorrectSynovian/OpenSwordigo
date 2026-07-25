/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052ABF4
 * Mangled: sub_52ABF4
 * Demangled: sub_52ABF4
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000566BB8  sub_566BB8
 *
 * Referenced strings: 1
 *   insn=0x000000000052AC08 string=0x000000000052AC0C "!$@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall sub_52ABF4@<X0>(__int64 a1@<X0>, __int64 a2@<X8>)
{
  sub_566BB8(a2, *(char **)(*(_QWORD *)(a1 + 16) + 72LL));
  return a2;
}

