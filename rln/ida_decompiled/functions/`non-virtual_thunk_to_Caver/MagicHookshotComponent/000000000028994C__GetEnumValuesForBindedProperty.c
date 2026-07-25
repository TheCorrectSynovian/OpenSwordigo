/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028994C
 * Mangled: _ZThn16_N5Caver22MagicHookshotComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: `non-virtual thunk to'Caver::MagicHookshotComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7A30  Caver::SpellComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Referenced strings: 2
 *   insn=0x000000000028994C string=0x0000000000289950 "8"
 *   insn=0x0000000000289950 string=0x00000000001F7A30 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 `non-virtual thunk to'Caver::MagicHookshotComponent::GetEnumValuesForBindedProperty()
{
  return Caver::SpellComponent::GetEnumValuesForBindedProperty();
}

