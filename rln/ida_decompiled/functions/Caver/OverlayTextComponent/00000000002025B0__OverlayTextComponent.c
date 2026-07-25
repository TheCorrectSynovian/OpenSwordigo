/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002025B0
 * Mangled: ._ZN5Caver20OverlayTextComponentC2Ev
 * Demangled: Caver::OverlayTextComponent::OverlayTextComponent(void)
 *
 * Callers: 3
 *   0x0000000000250738  Caver::OverlayTextComponent::Create(void)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *
 * Callees: 1
 *   0x000000000022CC5C  std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SceneObject>*,std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>>,boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002025B8 string=0x00000000002025BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::OverlayTextComponent::OverlayTextComponent(Caver::OverlayTextComponent *this)
{
  JUMPOUT(0x22CF54);
}

