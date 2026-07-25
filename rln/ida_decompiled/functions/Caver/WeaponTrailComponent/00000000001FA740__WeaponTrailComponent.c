/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA740
 * Mangled: ._ZN5Caver20WeaponTrailComponentC2Ev
 * Demangled: Caver::WeaponTrailComponent::WeaponTrailComponent(void)
 *
 * Callers: 1
 *   0x00000000002CD0A8  Caver::WeaponTrailComponent::Clone(void)
 *
 * Callees: 1
 *   0x00000000002CC828  Caver::WeaponTrailComponent::WeaponTrailComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA748 string=0x00000000001FA74C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WeaponTrailComponent::WeaponTrailComponent(Caver::WeaponTrailComponent *this)
{
  return _ZN5Caver20WeaponTrailComponentC2Ev(this);
}

