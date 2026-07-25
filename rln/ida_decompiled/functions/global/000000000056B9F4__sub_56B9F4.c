/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B9F4
 * Mangled: sub_56B9F4
 * Demangled: sub_56B9F4
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x000000000056B9FC string=0x000000000056BA00 "C"
 *   insn=0x000000000056BA00 string=0x000000000056BA08 "c"
 *   insn=0x000000000056BA08 string=0x000000000056BA0C "_"
 *   insn=0x000000000056BA0C string=0x000000000056BA10 "@"
 *   insn=0x000000000056BA1C string=0x000000000056BA20 " "
 *   insn=0x000000000056BA2C string=0x000000000056BA30 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56B9F4(__int64 *a1, int a2, unsigned __int64 a3)
{
  __int64 v3; // x4
  __int64 result; // x0
  __int64 v5; // x3
  unsigned __int64 v6; // x3

  v3 = *a1;
  result = -1;
  v5 = *(_QWORD *)(v3 - 24);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( a3 > v6 )
      result = v6;
    else
      result = a3;
    while ( result != -1 && *(_DWORD *)(v3 + 4 * result) != a2 )
      --result;
  }
  return result;
}

