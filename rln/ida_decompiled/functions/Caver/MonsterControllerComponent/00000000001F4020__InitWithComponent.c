/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4020
 * Mangled: ._ZN5Caver26MonsterControllerComponent17InitWithComponentEPKS0_
 * Demangled: Caver::MonsterControllerComponent::InitWithComponent(Caver::MonsterControllerComponent const*)
 *
 * Callers: 20
 *   0x0000000000292EF0  Caver::BatMonsterControllerComponent::BatMonsterControllerComponent(void)
 *   0x0000000000293A24  Caver::BatMonsterControllerComponent::Clone(void)
 *   0x0000000000293DB4  Caver::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(void)
 *   0x00000000002950D8  Caver::BouncingMonsterControllerComponent::Clone(void)
 *   0x000000000029521C  Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(void)
 *   0x0000000000297214  Caver::GenericMonsterControllerComponent::InitWithComponent(Caver::GenericMonsterControllerComponent const*)
 *   0x0000000000298458  Caver::GenericMonsterControllerComponent::Clone(void)
 *   0x000000000029858C  std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::AttackComponent>*,std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>>>,boost::intrusive_ptr<Caver::AttackComponent> const&)
 *   0x0000000000298F08  Caver::LeapingMonsterControllerComponent::Clone(void)
 *   0x000000000029BEDC  Caver::ProjectileMonsterControllerComponent::InitWithComponent(Caver::ProjectileMonsterControllerComponent const*)
 *   0x000000000029C0B4  Caver::ProjectileMonsterControllerComponent::Clone(void)
 *   0x000000000029C204  Caver::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(void)
 *   0x000000000029D530  Caver::ShootingMonsterControllerComponent::Clone(void)
 *   0x000000000029D66C  Caver::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(void)
 *   0x000000000029E908  Caver::SkellyMonsterControllerComponent::Clone(void)
 *   0x000000000029EB20  Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(void)
 *   0x00000000002A00DC  Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent(void)
 *   0x00000000002A0E98  Caver::StaticMonsterControllerComponent::Clone(void)
 *   0x00000000002A0FE4  Caver::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(void)
 *   0x00000000002A1898  Caver::WalkingMonsterControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x0000000000299114  Caver::MonsterControllerComponent::MonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4028 string=0x00000000001F402C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::MonsterControllerComponent::InitWithComponent()
{
  JUMPOUT(0x299528);
}

