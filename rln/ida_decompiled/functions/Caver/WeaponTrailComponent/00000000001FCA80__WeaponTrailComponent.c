/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCA80
 * Mangled: ._ZN5Caver20WeaponTrailComponentC2Ev_0
 * Demangled: Caver::WeaponTrailComponent::WeaponTrailComponent(void)
 *
 * Callers: 1
 *   0x000000000024FD38  Caver::WeaponTrailComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002CC828  Caver::WeaponTrailComponent::WeaponTrailComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCA88 string=0x00000000001FCA8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WeaponTrailComponent::WeaponTrailComponent(Caver::WeaponTrailComponent *this)
{
  return _ZN5Caver20WeaponTrailComponentC2Ev(this);
}

