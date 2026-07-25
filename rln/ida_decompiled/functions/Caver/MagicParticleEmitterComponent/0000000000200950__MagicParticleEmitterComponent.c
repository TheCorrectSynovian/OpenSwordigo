/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200950
 * Mangled: ._ZN5Caver29MagicParticleEmitterComponentC2Ev
 * Demangled: Caver::MagicParticleEmitterComponent::MagicParticleEmitterComponent(void)
 *
 * Callers: 1
 *   0x00000000002502F8  Caver::MagicParticleEmitterComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002A35BC  Caver::GlowComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200958 string=0x000000000020095C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MagicParticleEmitterComponent::MagicParticleEmitterComponent(
        Caver::MagicParticleEmitterComponent *this)
{
  JUMPOUT(0x2A3614);
}

