/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029469C
 * Mangled: _ZThn16_N5Caver34BouncingMonsterControllerComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: `non-virtual thunk to'Caver::BouncingMonsterControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBAF0  Caver::MonsterControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002946A0 string=0x00000000001FBAF0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 `non-virtual thunk to'Caver::BouncingMonsterControllerComponent::GetEnumValuesForBindedProperty()
{
  return Caver::MonsterControllerComponent::GetEnumValuesForBindedProperty();
}

