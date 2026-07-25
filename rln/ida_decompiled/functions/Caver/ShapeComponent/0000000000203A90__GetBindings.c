/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203A90
 * Mangled: ._ZN5Caver14ShapeComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::ShapeComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x0000000000218038  Caver::CollisionShapeComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000002382C8  `non-virtual thunk to'Caver::ShapeComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x00000000002373AC  Caver::ShapeComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203A98 string=0x0000000000203A9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ShapeComponent::GetBindings()
{
  return _ZN5Caver14ShapeComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE();
}

