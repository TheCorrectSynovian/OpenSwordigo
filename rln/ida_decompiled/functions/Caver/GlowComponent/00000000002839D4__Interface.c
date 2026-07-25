/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002839D4
 * Mangled: _ZN5Caver13GlowComponent9InterfaceEv
 * Demangled: Caver::GlowComponent::Interface(void)
 *
 * Callers: 13
 *   0x00000000002838E0  Caver::HookshotTrailComponent::ImplementsInterface(long)
 *   0x0000000000283908  Caver::HookshotTrailComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002839D4  Caver::GlowComponent::Interface(void)
 *   0x00000000002A3574  Caver::GlowComponent::ImplementsInterface(long)
 *   0x00000000002A3588  Caver::GlowComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002AEB98  Caver::PortalEffectComponent::ImplementsInterface(long)
 *   0x00000000002AEBC0  Caver::PortalEffectComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002B1224  Caver::SimpleGlowComponent::ImplementsInterface(long)
 *   0x00000000002B124C  Caver::SimpleGlowComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002CC070  Caver::WeaponGlowComponent::ImplementsInterface(long)
 *   0x00000000002CC098  Caver::WeaponGlowComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::GlowComponent::Interface(
        Caver::GlowComponent *this))(Caver::GlowComponent *__hidden this)
{
  return Caver::GlowComponent::Interface;
}

