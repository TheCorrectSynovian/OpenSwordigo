/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002560E8
 * Mangled: _ZN5Caver16ShatterComponent9InterfaceEv
 * Demangled: Caver::ShatterComponent::Interface(void)
 *
 * Callers: 6
 *   0x00000000002556FC  Caver::BreakableObjectComponent::Break(void)
 *   0x00000000002560E8  Caver::ShatterComponent::Interface(void)
 *   0x000000000029A028  Caver::MonsterDeathControllerComponent::KillMonster(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000002AF5BC  Caver::ShatterComponent::ImplementsInterface(long)
 *   0x00000000002AF5D0  Caver::ShatterComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002B1A84  Caver::BushControllerComponent::HandleMessage(int,void *)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::ShatterComponent::Interface(
        Caver::ShatterComponent *this))(Caver::ShatterComponent *__hidden this)
{
  return Caver::ShatterComponent::Interface;
}

