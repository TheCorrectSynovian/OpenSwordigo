/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC7C0
 * Mangled: ._ZN5Caver20FireEmitterComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::FireEmitterComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x00000000002A2128  Caver::FireEmitterComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x00000000002A2128  Caver::FireEmitterComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC7C8 string=0x00000000001FC7CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FireEmitterComponent::GetBindings()
{
  return _ZN5Caver20FireEmitterComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE();
}

