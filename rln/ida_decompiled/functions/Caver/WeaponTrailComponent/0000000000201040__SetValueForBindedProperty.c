/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201040
 * Mangled: ._ZN5Caver20WeaponTrailComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::WeaponTrailComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000002CCF28  `non-virtual thunk to'Caver::WeaponTrailComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000002CCE48  Caver::WeaponTrailComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201048 string=0x000000000020104C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WeaponTrailComponent::SetValueForBindedProperty(
        Caver::WeaponTrailComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver20WeaponTrailComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

