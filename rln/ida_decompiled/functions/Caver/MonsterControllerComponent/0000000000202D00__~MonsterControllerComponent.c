/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202D00
 * Mangled: ._ZN5Caver26MonsterControllerComponentD2Ev
 * Demangled: Caver::MonsterControllerComponent::~MonsterControllerComponent()
 *
 * Callers: 22
 *   0x0000000000292EF0  Caver::BatMonsterControllerComponent::BatMonsterControllerComponent(void)
 *   0x00000000002938EC  Caver::BatMonsterControllerComponent::~BatMonsterControllerComponent()
 *   0x0000000000293DB4  Caver::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(void)
 *   0x0000000000294F4C  Caver::BouncingMonsterControllerComponent::~BouncingMonsterControllerComponent()
 *   0x000000000029521C  Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(void)
 *   0x0000000000296B90  Caver::ChargingMonsterControllerComponent::~ChargingMonsterControllerComponent()
 *   0x0000000000296F64  Caver::GenericMonsterControllerComponent::GenericMonsterControllerComponent(void)
 *   0x0000000000298258  Caver::GenericMonsterControllerComponent::~GenericMonsterControllerComponent()
 *   0x000000000029858C  std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::AttackComponent>*,std::vector<boost::intrusive_ptr<Caver::AttackComponent>,std::allocator<boost::intrusive_ptr<Caver::AttackComponent>>>>,boost::intrusive_ptr<Caver::AttackComponent> const&)
 *   0x0000000000298DD0  Caver::LeapingMonsterControllerComponent::~LeapingMonsterControllerComponent()
 *   0x0000000000299BB8  Caver::MonsterControllerComponent::~MonsterControllerComponent()
 *   0x000000000029C07C  Caver::ProjectileMonsterControllerComponent::~ProjectileMonsterControllerComponent()
 *   0x000000000029C204  Caver::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(void)
 *   0x000000000029D350  Caver::ShootingMonsterControllerComponent::~ShootingMonsterControllerComponent()
 *   0x000000000029D66C  Caver::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(void)
 *   0x000000000029E71C  Caver::SkellyMonsterControllerComponent::~SkellyMonsterControllerComponent()
 *   0x000000000029EB20  Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(void)
 *   0x000000000029FC64  Caver::SnappingMonsterControllerComponent::~SnappingMonsterControllerComponent()
 *   0x00000000002A00DC  Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent(void)
 *   0x00000000002A0CD0  Caver::StaticMonsterControllerComponent::~StaticMonsterControllerComponent()
 *   0x00000000002A0FE4  Caver::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(void)
 *   0x00000000002A1760  Caver::WalkingMonsterControllerComponent::~WalkingMonsterControllerComponent()
 *
 * Callees: 1
 *   0x0000000000292EF0  Caver::BatMonsterControllerComponent::BatMonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202D08 string=0x0000000000202D0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MonsterControllerComponent::~MonsterControllerComponent(Caver::MonsterControllerComponent *this)
{
  JUMPOUT(0x2931D4);
}

