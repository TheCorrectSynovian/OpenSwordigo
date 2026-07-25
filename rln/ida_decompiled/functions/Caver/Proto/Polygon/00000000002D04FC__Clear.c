/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D04FC
 * Mangled: _ZN5Caver5Proto7Polygon5ClearEv
 * Demangled: Caver::Proto::Polygon::Clear(void)
 *
 * Callers: 1
 *   0x00000000001F56A0  Caver::Proto::Polygon::Clear(void)
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x00000000002D0508 string=0x00000000002D050C "h"
 *   insn=0x00000000002D0510 string=0x00000000002D0514 "`"
 *   insn=0x00000000002D0514 string=0x00000000002D0520 "h"
 *   insn=0x00000000002D0518 string=0x00000000002D051C "h"
 *   insn=0x00000000002D0524 string=0x00000000002D0528 "k"
 *   insn=0x00000000002D052C string=0x00000000002D0530 "h\n@"
 *   insn=0x00000000002D0534 string=0x00000000002D0538 ""
 *   insn=0x00000000002D0538 string=0x00000000002D053C ""
 *   insn=0x00000000002D0540 string=0x00000000002D0544 "h"
 *   insn=0x00000000002D054C string=0x00000000002D0550 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Polygon::Clear(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 v3; // x0

  v1 = this;
  if ( (*(_WORD *)(this + 76) & 0x1FE) != 0 )
    *(_WORD *)(this + 72) = 256;
  if ( *(int *)(this + 24) >= 1 )
  {
    v2 = 0;
    do
    {
      v3 = *(_QWORD *)(*(_QWORD *)(v1 + 16) + 8 * v2);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
      ++v2;
    }
    while ( v2 < *(int *)(v1 + 24) );
  }
  *(_DWORD *)(v1 + 24) = 0;
  *(_DWORD *)(v1 + 76) = 0;
  return this;
}

