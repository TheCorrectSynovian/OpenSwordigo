/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7640
 * Mangled: ._ZN5Caver18PhysicsObjectStateD2Ev
 * Demangled: Caver::PhysicsObjectState::~PhysicsObjectState()
 *
 * Callers: 7
 *   0x0000000000269968  Caver::EntityComponent::~EntityComponent()
 *   0x0000000000271E60  Caver::HeroEntityComponent::HeroEntityComponent(void)
 *   0x0000000000273CA4  Caver::HeroEntityComponent::TargetObject(boost::intrusive_ptr<Caver::SceneObject> const&,int)
 *   0x000000000027D978  Caver::MonsterEntityComponent::~MonsterEntityComponent()
 *   0x000000000027FC24  Caver::PhysicsObjectComponent::~PhysicsObjectComponent()
 *   0x00000000002AC914  Caver::ParticleObjectComponent::ParticleObjectComponent(void)
 *   0x00000000002ACFDC  Caver::ParticleObjectComponent::~ParticleObjectComponent()
 *
 * Callees: 1
 *   0x000000000027FF40  Caver::PhysicsObjectState::~PhysicsObjectState()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7648 string=0x00000000001F764C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PhysicsObjectState::~PhysicsObjectState(Caver::PhysicsObjectState *this)
{
  _ZN5Caver18PhysicsObjectStateD2Ev(this);
}

