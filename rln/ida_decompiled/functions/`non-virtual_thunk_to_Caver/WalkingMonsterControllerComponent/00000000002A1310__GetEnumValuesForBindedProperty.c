/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A1310
 * Mangled: _ZThn16_N5Caver33WalkingMonsterControllerComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: `non-virtual thunk to'Caver::WalkingMonsterControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBAF0  Caver::MonsterControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002A1314 string=0x00000000001FBAF0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 `non-virtual thunk to'Caver::WalkingMonsterControllerComponent::GetEnumValuesForBindedProperty()
{
  return Caver::MonsterControllerComponent::GetEnumValuesForBindedProperty();
}

