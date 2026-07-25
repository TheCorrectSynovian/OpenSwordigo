/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F92A0
 * Mangled: ._ZN5Caver11SceneObject26GetComponentsWithInterfaceINS_19EntityInfoComponentEEEvPSt6vectorIPT_SaIS5_EE
 * Demangled: Caver::SceneObject::GetComponentsWithInterface<Caver::EntityInfoComponent>(std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>> *)
 *
 * Callers: 1
 *   0x000000000026EED8  Caver::EntityInfoComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000026F200  Caver::SceneObject::GetComponentsWithInterface<Caver::EntityInfoComponent>(std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F92A8 string=0x00000000001F92AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SceneObject::GetComponentsWithInterface<Caver::EntityInfoComponent>()
{
  return _ZN5Caver11SceneObject26GetComponentsWithInterfaceINS_19EntityInfoComponentEEEvPSt6vectorIPT_SaIS5_EE();
}

