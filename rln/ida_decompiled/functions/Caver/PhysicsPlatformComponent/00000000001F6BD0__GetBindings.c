/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6BD0
 * Mangled: ._ZN5Caver24PhysicsPlatformComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::PhysicsPlatformComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 1
 *   0x0000000000280AF8  Caver::PhysicsPlatformComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x0000000000280AF8  Caver::PhysicsPlatformComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6BD8 string=0x00000000001F6BDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::PhysicsPlatformComponent::GetBindings()
{
  return _ZN5Caver24PhysicsPlatformComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE();
}

