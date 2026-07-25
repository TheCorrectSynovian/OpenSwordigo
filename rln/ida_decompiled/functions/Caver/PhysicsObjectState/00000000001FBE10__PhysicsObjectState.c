/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBE10
 * Mangled: ._ZN5Caver18PhysicsObjectStateC2Ev
 * Demangled: Caver::PhysicsObjectState::PhysicsObjectState(void)
 *
 * Callers: 5
 *   0x0000000000267BEC  Caver::EntityComponent::EntityComponent(void)
 *   0x0000000000269968  Caver::EntityComponent::~EntityComponent()
 *   0x000000000027DE30  Caver::PhysicsObjectComponent::PhysicsObjectComponent(void)
 *   0x000000000027FC24  Caver::PhysicsObjectComponent::~PhysicsObjectComponent()
 *   0x00000000002AC914  Caver::ParticleObjectComponent::ParticleObjectComponent(void)
 *
 * Callees: 1
 *   0x000000000027FE80  Caver::PhysicsObjectComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FBE14 string=0x000000000027FED8 "H"
 *   insn=0x00000000001FBE18 string=0x00000000001FBE1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PhysicsObjectState::PhysicsObjectState(Caver::PhysicsObjectState *this)
{
  JUMPOUT(0x27FED8);
}

