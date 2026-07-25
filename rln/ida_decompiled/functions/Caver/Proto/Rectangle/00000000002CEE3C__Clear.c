/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CEE3C
 * Mangled: _ZN5Caver5Proto9Rectangle5ClearEv
 * Demangled: Caver::Proto::Rectangle::Clear(void)
 *
 * Callers: 1
 *   0x00000000001FCDE0  Caver::Proto::Rectangle::Clear(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000002CEE3C string=0x00000000002CEE40 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Rectangle::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 28) )
  {
    *(_QWORD *)(this + 20) = 0;
    *(_QWORD *)(this + 12) = 0;
  }
  *(_DWORD *)(this + 28) = 0;
  return this;
}

