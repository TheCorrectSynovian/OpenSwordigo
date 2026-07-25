/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CC1D4
 * Mangled: _ZN5Caver11WeaponTrail5ClearEv
 * Demangled: Caver::WeaponTrail::Clear(void)
 *
 * Callers: 1
 *   0x0000000000201E90  Caver::WeaponTrail::Clear(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WeaponTrail::Clear(__int64 this)
{
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 48) = 0;
  return this;
}

