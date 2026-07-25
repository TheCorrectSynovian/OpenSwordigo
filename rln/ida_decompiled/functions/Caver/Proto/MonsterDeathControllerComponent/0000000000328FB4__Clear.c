/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000328FB4
 * Mangled: _ZN5Caver5Proto31MonsterDeathControllerComponent5ClearEv
 * Demangled: Caver::Proto::MonsterDeathControllerComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000328FB4 string=0x0000000000328FB8 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterDeathControllerComponent::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 16) )
    *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  return this;
}

