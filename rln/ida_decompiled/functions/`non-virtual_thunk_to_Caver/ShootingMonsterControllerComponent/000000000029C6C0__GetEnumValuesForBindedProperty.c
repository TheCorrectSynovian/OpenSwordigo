/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029C6C0
 * Mangled: _ZThn16_N5Caver34ShootingMonsterControllerComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: `non-virtual thunk to'Caver::ShootingMonsterControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBAF0  Caver::MonsterControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Referenced strings: 2
 *   insn=0x000000000029C6C0 string=0x000000000029C6C4 "}"
 *   insn=0x000000000029C6C4 string=0x00000000001FBAF0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 `non-virtual thunk to'Caver::ShootingMonsterControllerComponent::GetEnumValuesForBindedProperty()
{
  return Caver::MonsterControllerComponent::GetEnumValuesForBindedProperty();
}

