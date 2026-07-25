/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F90B0
 * Mangled: ._ZN5Caver20OverlayTextComponent20CombatTextFromObjectERKSsRKN5boost13intrusive_ptrINS_11SceneObjectEEERKNS_7Vector3Ef
 * Demangled: Caver::OverlayTextComponent::CombatTextFromObject(std::string const&,boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector3 const&,float)
 *
 * Callers: 2
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *
 * Callees: 1
 *   0x000000000022EAB8  Caver::OverlayTextComponent::CombatTextFromObject(std::string const&,boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector3 const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F90B8 string=0x00000000001F90BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::OverlayTextComponent::CombatTextFromObject()
{
  return _ZN5Caver20OverlayTextComponent20CombatTextFromObjectERKSsRKN5boost13intrusive_ptrINS_11SceneObjectEEERKNS_7Vector3Ef();
}

