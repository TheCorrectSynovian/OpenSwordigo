/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000314DC4
 * Mangled: _ZN5Caver5Proto23BushControllerComponent5ClearEv
 * Demangled: Caver::Proto::BushControllerComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000314DC4 string=0x0000000000314DC8 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BushControllerComponent::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 24) )
  {
    *(_DWORD *)(this + 12) = 0;
    *(_QWORD *)(this + 16) = 0;
  }
  *(_DWORD *)(this + 24) = 0;
  return this;
}

