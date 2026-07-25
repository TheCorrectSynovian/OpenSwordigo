/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281EB4
 * Mangled: _ZThn16_N5Caver23DimensionSpellComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: `non-virtual thunk to'Caver::DimensionSpellComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8FD0  Caver::SpellComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 2
 *   insn=0x0000000000281EB4 string=0x0000000000281EB8 "F"
 *   insn=0x0000000000281EB8 string=0x00000000001F8FD0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 `non-virtual thunk to'Caver::DimensionSpellComponent::GetBindings()
{
  return Caver::SpellComponent::GetBindings();
}

