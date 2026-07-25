/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6870
 * Mangled: ._ZN5Caver19EntityInfoComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::EntityInfoComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x000000000026EAF0  Caver::EntityInfoComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x000000000026EAF0  Caver::EntityInfoComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6878 string=0x00000000001F687C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::EntityInfoComponent::GetBindings()
{
  return _ZN5Caver19EntityInfoComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE();
}

