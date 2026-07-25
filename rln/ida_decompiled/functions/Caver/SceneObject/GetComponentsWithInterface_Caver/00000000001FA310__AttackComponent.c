/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA310
 * Mangled: ._ZN5Caver11SceneObject26GetComponentsWithInterfaceINS_15AttackComponentEEEvPSt6vectorIN5boost13intrusive_ptrIT_EESaIS7_EE
 * Demangled: Caver::SceneObject::GetComponentsWithInterface<Caver::AttackComponent>(std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>> *)
 *
 * Callers: 1
 *   0x0000000000297364  Caver::GenericMonsterControllerComponent::Prepare(void)
 *
 * Callees: 1
 *   0x0000000000297398  Caver::SceneObject::GetComponentsWithInterface<Caver::AttackComponent>(std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA318 string=0x00000000001FA31C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SceneObject::GetComponentsWithInterface<Caver::AttackComponent>()
{
  return _ZN5Caver11SceneObject26GetComponentsWithInterfaceINS_15AttackComponentEEEvPSt6vectorIN5boost13intrusive_ptrIT_EESaIS7_EE();
}

