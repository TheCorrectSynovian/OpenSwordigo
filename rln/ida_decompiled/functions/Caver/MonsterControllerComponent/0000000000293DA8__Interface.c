/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000293DA8
 * Mangled: _ZN5Caver26MonsterControllerComponent9InterfaceEv
 * Demangled: Caver::MonsterControllerComponent::Interface(void)
 *
 * Callers: 25
 *   0x0000000000293A8C  Caver::BatMonsterControllerComponent::ImplementsInterface(long)
 *   0x0000000000293AB4  Caver::BatMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000293DA8  Caver::MonsterControllerComponent::Interface(void)
 *   0x0000000000295148  Caver::BouncingMonsterControllerComponent::ImplementsInterface(long)
 *   0x0000000000295170  Caver::BouncingMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000296E90  Caver::ChargingMonsterControllerComponent::ImplementsInterface(long)
 *   0x0000000000296EB8  Caver::ChargingMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002984B8  Caver::GenericMonsterControllerComponent::ImplementsInterface(long)
 *   0x00000000002984E0  Caver::GenericMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000298F70  Caver::LeapingMonsterControllerComponent::ImplementsInterface(long)
 *   0x0000000000298F98  Caver::LeapingMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x0000000000299BF8  Caver::MonsterControllerComponent::ImplementsInterface(long)
 *   0x0000000000299C0C  Caver::MonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000029C130  Caver::ProjectileMonsterControllerComponent::ImplementsInterface(long)
 *   0x000000000029C158  Caver::ProjectileMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000029D598  Caver::ShootingMonsterControllerComponent::ImplementsInterface(long)
 *   0x000000000029D5C0  Caver::ShootingMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000029E970  Caver::SkellyMonsterControllerComponent::ImplementsInterface(long)
 *   0x000000000029E998  Caver::SkellyMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000029FF38  Caver::SnappingMonsterControllerComponent::ImplementsInterface(long)
 *   0x000000000029FF60  Caver::SnappingMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002A0F10  Caver::StaticMonsterControllerComponent::ImplementsInterface(long)
 *   0x00000000002A0F38  Caver::StaticMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002A192C  Caver::WalkingMonsterControllerComponent::ImplementsInterface(long)
 *   0x00000000002A1954  Caver::WalkingMonsterControllerComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::MonsterControllerComponent::Interface(
        Caver::MonsterControllerComponent *this))(Caver::MonsterControllerComponent *__hidden this)
{
  return Caver::MonsterControllerComponent::Interface;
}

