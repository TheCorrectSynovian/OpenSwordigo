/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002618B0
 * Mangled: _ZN5Caver22PhysicsObjectComponent9InterfaceEv
 * Demangled: Caver::PhysicsObjectComponent::Interface(void)
 *
 * Callers: 15
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *   0x00000000002616A4  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x00000000002618B0  Caver::PhysicsObjectComponent::Interface(void)
 *   0x0000000000269460  Caver::EntityComponent::HandleMessage(int,void *)
 *   0x000000000027359C  Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x000000000027F8F0  sub_27F8F0
 *   0x000000000027F954  sub_27F954
 *   0x000000000027F9E0  sub_27F9E0
 *   0x000000000027FA94  sub_27FA94
 *   0x000000000027FB18  sub_27FB18
 *   0x000000000027FB90  sub_27FB90
 *   0x000000000027FE30  Caver::PhysicsObjectComponent::ImplementsInterface(long)
 *   0x000000000027FE44  Caver::PhysicsObjectComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002846CC  Caver::MagicBoltComponent::Prepare(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::PhysicsObjectComponent::Interface(
        Caver::PhysicsObjectComponent *this))(Caver::PhysicsObjectComponent *__hidden this)
{
  return Caver::PhysicsObjectComponent::Interface;
}

