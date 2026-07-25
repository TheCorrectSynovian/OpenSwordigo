/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003358DC
 * Mangled: _ZN5Caver5Proto29ProjectileControllerComponent5ClearEv
 * Demangled: Caver::Proto::ProjectileControllerComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000003358DC string=0x00000000003358E0 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ProjectileControllerComponent::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 16) )
    *(_WORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  return this;
}

