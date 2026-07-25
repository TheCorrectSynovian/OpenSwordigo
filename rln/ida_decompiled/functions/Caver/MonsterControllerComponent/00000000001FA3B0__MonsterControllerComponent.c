/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA3B0
 * Mangled: ._ZN5Caver26MonsterControllerComponentC2Ev
 * Demangled: Caver::MonsterControllerComponent::MonsterControllerComponent(void)
 *
 * Callers: 12
 *   0x0000000000292EF0  Caver::BatMonsterControllerComponent::BatMonsterControllerComponent(void)
 *   0x0000000000293DB4  Caver::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(void)
 *   0x000000000029521C  Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(void)
 *   0x0000000000296F64  Caver::GenericMonsterControllerComponent::GenericMonsterControllerComponent(void)
 *   0x000000000029858C  std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::AttackComponent>*,std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>>>,boost::intrusive_ptr<Caver::AttackComponent> const&)
 *   0x000000000029BE98  Caver::ProjectileMonsterControllerComponent::ProjectileMonsterControllerComponent(void)
 *   0x000000000029C0B4  Caver::ProjectileMonsterControllerComponent::Clone(void)
 *   0x000000000029C204  Caver::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(void)
 *   0x000000000029D66C  Caver::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(void)
 *   0x000000000029EB20  Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(void)
 *   0x00000000002A00DC  Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent(void)
 *   0x00000000002A0FE4  Caver::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(void)
 *
 * Callees: 1
 *   0x0000000000299114  Caver::MonsterControllerComponent::MonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA3B8 string=0x00000000001FA3BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MonsterControllerComponent::MonsterControllerComponent(
        Caver::MonsterControllerComponent *this)
{
  return _ZN5Caver26MonsterControllerComponentC2Ev(this);
}

