/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000327584
 * Mangled: _ZN5Caver5Proto32StaticMonsterControllerComponent5ClearEv
 * Demangled: Caver::Proto::StaticMonsterControllerComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000327584 string=0x0000000000327588 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::StaticMonsterControllerComponent::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 48) )
    *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 48) = 0;
  return this;
}

