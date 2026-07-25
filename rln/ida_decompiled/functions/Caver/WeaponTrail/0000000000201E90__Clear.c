/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201E90
 * Mangled: ._ZN5Caver11WeaponTrail5ClearEv
 * Demangled: Caver::WeaponTrail::Clear(void)
 *
 * Callers: 1
 *   0x00000000002CCF38  Caver::WeaponTrailComponent::ResetTrail(void)
 *
 * Callees: 1
 *   0x00000000002CC1D4  Caver::WeaponTrail::Clear(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201E98 string=0x0000000000201E9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WeaponTrail::Clear(Caver::WeaponTrail *this)
{
  return _ZN5Caver11WeaponTrail5ClearEv(this);
}

