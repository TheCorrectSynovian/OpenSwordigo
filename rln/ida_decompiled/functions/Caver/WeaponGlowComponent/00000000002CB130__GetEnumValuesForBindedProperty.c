/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CB130
 * Mangled: _ZN5Caver19WeaponGlowComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::WeaponGlowComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203330  Caver::GlowComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::WeaponGlowComponent::GetEnumValuesForBindedProperty()
{
  return Caver::GlowComponent::GetEnumValuesForBindedProperty();
}

