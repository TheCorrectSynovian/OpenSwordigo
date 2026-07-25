/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570040
 * Mangled: sub_570040
 * Demangled: sub_570040
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000570040 string=0x0000000000570044 "c"
 *   insn=0x000000000057004C string=0x0000000000570050 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_570040(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(
           *(_QWORD *)(a1 + 24),
           *(_QWORD *)(a2 + 24),
           a3,
           (unsigned int)(a4 + 2));
}

