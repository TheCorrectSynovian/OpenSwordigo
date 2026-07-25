/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCD70
 * Mangled: ._ZN5Caver22PhysicsObjectComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::PhysicsObjectComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x000000000027E198  Caver::PhysicsObjectComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x000000000027E198  Caver::PhysicsObjectComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCD78 string=0x00000000001FCD7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::PhysicsObjectComponent::GetBindings()
{
  return _ZN5Caver22PhysicsObjectComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE();
}

