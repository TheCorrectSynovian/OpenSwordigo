/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000580100
 * Mangled: sub_580100
 * Demangled: sub_580100
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000583248  sub_583248
 *
 * Referenced strings: 1
 *   insn=0x000000000058010C string=0x0000000000580110 "N"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_580100(__int64 a1)
{
  bool v1; // zf
  __int64 result; // x0
  _BYTE v3[16]; // [xsp+18h] [xbp+18h] BYREF
  __int64 v4; // [xsp+28h] [xbp+28h]

  v1 = sub_583248(a1 - 1, v3) == 0;
  result = v4;
  if ( v1 )
    return 0;
  return result;
}

