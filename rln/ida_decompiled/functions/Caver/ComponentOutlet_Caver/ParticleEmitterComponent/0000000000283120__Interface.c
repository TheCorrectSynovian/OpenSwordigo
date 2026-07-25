/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000283120
 * Mangled: _ZNK5Caver15ComponentOutletINS_24ParticleEmitterComponentEE9InterfaceEv
 * Demangled: Caver::ComponentOutlet<Caver::ParticleEmitterComponent>::Interface(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000269C04  Caver::EntityComponent::className(void)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD (*Caver::ComponentOutlet<Caver::ParticleEmitterComponent>::Interface())(Caver::ParticleEmitterComponent *__hidden this)
{
  return Caver::ParticleEmitterComponent::Interface;
}

