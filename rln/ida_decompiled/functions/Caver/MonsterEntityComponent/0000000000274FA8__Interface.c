/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000274FA8
 * Mangled: _ZN5Caver22MonsterEntityComponent9InterfaceEv
 * Demangled: Caver::MonsterEntityComponent::Interface(void)
 *
 * Callers: 9
 *   0x000000000027359C  Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *   0x0000000000274FA8  Caver::MonsterEntityComponent::Interface(void)
 *   0x000000000027DC68  Caver::MonsterEntityComponent::ImplementsInterface(long)
 *   0x000000000027DC90  Caver::MonsterEntityComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000289C5C  Caver::MagicHookshotComponent::FindGrabbableObject(void)
 *   0x000000000028A9FC  Caver::MagicHookshotComponent::HandleMessage(int,void *)
 *   0x0000000000293C84  Caver::ComponentOutlet<Caver::MonsterEntityComponent>::Interface(void)
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::MonsterEntityComponent::Interface(
        Caver::MonsterEntityComponent *this))(Caver::MonsterEntityComponent *__hidden this)
{
  return Caver::MonsterEntityComponent::Interface;
}

