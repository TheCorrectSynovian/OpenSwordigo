/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FDD58
 * Mangled: sub_4FDD58
 * Demangled: sub_4FDD58
 *
 * Callers: 1
 *   0x00000000004EFACC  sub_4EFACC
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004FDD58 string=0x00000000004FDD5C "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FDD58(__int64 a1)
{
  unsigned int v1; // w8

  v1 = *(_DWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 52) = v1;
  return v1;
}

