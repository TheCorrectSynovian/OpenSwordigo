/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000327D4C
 * Mangled: _ZN5Caver5Proto34ShootingMonsterControllerComponent5ClearEv
 * Demangled: Caver::Proto::ShootingMonsterControllerComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000327D4C string=0x0000000000327D50 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShootingMonsterControllerComponent::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 20) )
  {
    *(_DWORD *)(this + 12) = 0;
    *(_DWORD *)(this + 16) = 0;
  }
  *(_DWORD *)(this + 20) = 0;
  return this;
}

