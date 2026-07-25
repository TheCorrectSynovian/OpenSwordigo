/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002027F0
 * Mangled: ._ZN5Caver23CollisionShapeComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE
 * Demangled: Caver::CollisionShapeComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callers: 2
 *   0x0000000000213FA8  Caver::BoneControlledCollisionShapeComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x0000000000218038  Caver::CollisionShapeComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x0000000000218038  Caver::CollisionShapeComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002027F8 string=0x00000000002027FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::CollisionShapeComponent::GetBindings()
{
  return _ZN5Caver23CollisionShapeComponent11GetBindingsEPSt6vectorINS_7BindingESaIS2_EE();
}

