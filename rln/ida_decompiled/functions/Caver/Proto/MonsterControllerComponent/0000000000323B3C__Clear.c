/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323B3C
 * Mangled: _ZN5Caver5Proto26MonsterControllerComponent5ClearEv
 * Demangled: Caver::Proto::MonsterControllerComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000323B3C string=0x0000000000323B40 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterControllerComponent::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 28) )
  {
    *(_QWORD *)(this + 20) = 0;
    *(_QWORD *)(this + 12) = 0;
  }
  *(_DWORD *)(this + 28) = 0;
  return this;
}

