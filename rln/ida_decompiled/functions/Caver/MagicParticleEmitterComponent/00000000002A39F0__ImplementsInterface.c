/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A39F0
 * Mangled: _ZN5Caver29MagicParticleEmitterComponent19ImplementsInterfaceEl
 * Demangled: Caver::MagicParticleEmitterComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000269C04  Caver::EntityComponent::className(void)
 *   0x00000000002A3A78  Caver::MagicParticleEmitterComponent::className(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002A39F0 string=0x00000000002A39F4 ""
 *   insn=0x00000000002A39F4 string=0x00000000002A39F8 "\t""
 *   insn=0x00000000002A39F8 string=0x00000000002A39FC ")"
 *   insn=0x00000000002A39FC string=0x00000000002A3A00 "?"
 *   insn=0x00000000002A3A04 string=0x00000000002A3A08 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicParticleEmitterComponent::ImplementsInterface(
        Caver::MagicParticleEmitterComponent *this,
        _QWORD (*a2)(Caver::ParticleEmitterComponent *__hidden this))
{
  return (a2 == Caver::MagicParticleEmitterComponent::Interface)
       | (unsigned int)(a2 == Caver::ParticleEmitterComponent::Interface);
}

