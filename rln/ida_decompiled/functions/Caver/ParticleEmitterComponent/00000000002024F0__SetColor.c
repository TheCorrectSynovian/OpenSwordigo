/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002024F0
 * Mangled: ._ZN5Caver24ParticleEmitterComponent8SetColorERKNS_10FloatColorE
 * Demangled: Caver::ParticleEmitterComponent::SetColor(Caver::FloatColor const&)
 *
 * Callers: 1
 *   0x00000000002CB43C  Caver::WeaponGlowComponent::UpdateParticleEmitter(void)
 *
 * Callees: 1
 *   0x00000000002AA56C  Caver::ParticleEmitterComponent::SetColor(Caver::FloatColor const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002024F8 string=0x00000000002024FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleEmitterComponent::SetColor(
        Caver::ParticleEmitterComponent *this,
        const Caver::FloatColor *a2)
{
  return _ZN5Caver24ParticleEmitterComponent8SetColorERKNS_10FloatColorE(this, a2);
}

