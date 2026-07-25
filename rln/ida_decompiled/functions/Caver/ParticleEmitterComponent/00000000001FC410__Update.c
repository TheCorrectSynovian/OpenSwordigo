/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC410
 * Mangled: ._ZN5Caver24ParticleEmitterComponent6UpdateEf
 * Demangled: Caver::ParticleEmitterComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000002AA5B4  Caver::ParticleEmitterComponent::Prepare(void)
 *
 * Callees: 1
 *   0x00000000002AA5B4  Caver::ParticleEmitterComponent::Prepare(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC418 string=0x00000000001FC41C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ParticleEmitterComponent::Update(Caver::ParticleEmitterComponent *this, float a2)
{
  JUMPOUT(0x2AAB74);
}

