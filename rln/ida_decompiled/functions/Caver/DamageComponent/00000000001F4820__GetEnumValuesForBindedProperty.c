/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4820
 * Mangled: ._ZN5Caver15DamageComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::DamageComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000002659D4  `non-virtual thunk to'Caver::DamageComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 1
 *   0x00000000002652DC  Caver::DamageComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4828 string=0x00000000001F482C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::DamageComponent::GetEnumValuesForBindedProperty()
{
  return _ZN5Caver15DamageComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE();
}

