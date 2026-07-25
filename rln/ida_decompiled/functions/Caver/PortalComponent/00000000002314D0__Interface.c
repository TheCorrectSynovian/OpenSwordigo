/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002314D0
 * Mangled: _ZN5Caver15PortalComponent9InterfaceEv
 * Demangled: Caver::PortalComponent::Interface(void)
 *
 * Callers: 10
 *   0x0000000000230E34  sub_230E34
 *   0x0000000000230E74  sub_230E74
 *   0x0000000000231238  Caver::PortalComponent::ImplementsInterface(long)
 *   0x000000000023124C  Caver::PortalComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002314D0  Caver::PortalComponent::Interface(void)
 *   0x000000000027359C  Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x000000000035A6D4  Caver::GameViewController::StoreViewControllerDismissed(Caver::StoreViewController *)
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::PortalComponent::Interface(
        Caver::PortalComponent *this))(Caver::PortalComponent *__hidden this)
{
  return Caver::PortalComponent::Interface;
}

