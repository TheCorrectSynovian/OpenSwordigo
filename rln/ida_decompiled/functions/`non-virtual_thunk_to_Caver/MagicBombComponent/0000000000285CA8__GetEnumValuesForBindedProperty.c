/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000285CA8
 * Mangled: _ZThn16_N5Caver18MagicBombComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: `non-virtual thunk to'Caver::MagicBombComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7A30  Caver::SpellComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Referenced strings: 2
 *   insn=0x0000000000285CA8 string=0x0000000000285CAC "a"
 *   insn=0x0000000000285CAC string=0x00000000001F7A30 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 `non-virtual thunk to'Caver::MagicBombComponent::GetEnumValuesForBindedProperty()
{
  return Caver::SpellComponent::GetEnumValuesForBindedProperty();
}

