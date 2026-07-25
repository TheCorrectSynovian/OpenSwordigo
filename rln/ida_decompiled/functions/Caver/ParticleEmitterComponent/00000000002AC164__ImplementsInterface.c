/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AC164
 * Mangled: _ZN5Caver24ParticleEmitterComponent19ImplementsInterfaceEl
 * Demangled: Caver::ParticleEmitterComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000269C04  Caver::EntityComponent::className(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002AC164 string=0x00000000002AC168 ""
 *   insn=0x00000000002AC168 string=0x00000000002AC16C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ParticleEmitterComponent::ImplementsInterface(
        Caver::ParticleEmitterComponent *this,
        _QWORD (*a2)(Caver::ParticleEmitterComponent *__hidden this))
{
  return a2 == Caver::ParticleEmitterComponent::Interface;
}

