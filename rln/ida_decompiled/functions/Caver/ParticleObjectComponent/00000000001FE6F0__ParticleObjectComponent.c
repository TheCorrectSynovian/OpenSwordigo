/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE6F0
 * Mangled: ._ZN5Caver23ParticleObjectComponentC2Ev
 * Demangled: Caver::ParticleObjectComponent::ParticleObjectComponent(void)
 *
 * Callers: 2
 *   0x00000000002503B8  Caver::ParticleObjectComponent::Create(void)
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *
 * Callees: 1
 *   0x00000000002AC914  Caver::ParticleObjectComponent::ParticleObjectComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE6F8 string=0x00000000001FE6FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleObjectComponent::ParticleObjectComponent(Caver::ParticleObjectComponent *this)
{
  return _ZN5Caver23ParticleObjectComponentC2Ev(this);
}

