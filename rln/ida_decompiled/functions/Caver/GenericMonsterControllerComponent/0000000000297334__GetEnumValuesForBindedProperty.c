/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000297334
 * Mangled: _ZN5Caver33GenericMonsterControllerComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::GenericMonsterControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBAF0  Caver::MonsterControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000297334 string=0x00000000001FBAF0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GenericMonsterControllerComponent::GetEnumValuesForBindedProperty()
{
  return Caver::MonsterControllerComponent::GetEnumValuesForBindedProperty();
}

