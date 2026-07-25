/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000566FA8
 * Mangled: sub_566FA8
 * Demangled: sub_566FA8
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x0000000000566FA8 string=0x0000000000566FAC "b"
 *   insn=0x0000000000566FB0 string=0x0000000000566FB4 """
 *   insn=0x0000000000566FB4 string=0x0000000000566FB8 "D"
 *   insn=0x0000000000566FB8 string=0x0000000000566FBC "D"
 *   insn=0x0000000000566FBC string=0x0000000000566FC0 "_"
 *   insn=0x0000000000566FC4 string=0x0000000000566FC8 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_566FA8(__int64 *result, __int64 *a2)
{
  __int64 v2; // x3
  __int64 v3; // x2

  v2 = *result;
  if ( (*(_DWORD *)(*result - 8) & 0x80000000) != 0 )
    *(_DWORD *)(v2 - 8) = 0;
  v3 = *a2;
  if ( (*(_DWORD *)(*a2 - 8) & 0x80000000) != 0 )
    *(_DWORD *)(v3 - 8) = 0;
  *result = v3;
  *a2 = v2;
  return result;
}

