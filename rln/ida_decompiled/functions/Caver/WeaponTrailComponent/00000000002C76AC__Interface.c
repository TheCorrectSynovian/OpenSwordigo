/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C76AC
 * Mangled: _ZN5Caver20WeaponTrailComponent9InterfaceEv
 * Demangled: Caver::WeaponTrailComponent::Interface(void)
 *
 * Callers: 6
 *   0x00000000002C75DC  Caver::ComponentOutlet<Caver::WeaponTrailComponent>::Interface(void)
 *   0x00000000002C76AC  Caver::WeaponTrailComponent::Interface(void)
 *   0x00000000002CD1B8  Caver::WeaponTrailComponent::ImplementsInterface(long)
 *   0x00000000002CD1CC  Caver::WeaponTrailComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::WeaponTrailComponent::Interface(
        Caver::WeaponTrailComponent *this))(Caver::WeaponTrailComponent *__hidden this)
{
  return Caver::WeaponTrailComponent::Interface;
}

