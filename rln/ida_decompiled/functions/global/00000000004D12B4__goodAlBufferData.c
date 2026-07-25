/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D12B4
 * Mangled: _Z16goodAlBufferDataiiPvii
 * Demangled: goodAlBufferData(int,int,void *,int,int)
 *
 * Callers: 1
 *   0x00000000002033D0  goodAlBufferData(int,int,void *,int,int)
 *
 * Callees: 1
 *   0x00000000002013D0  .alBufferData
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall goodAlBufferData(int a1, int a2, void *a3)
{
  return alBufferData();
}

