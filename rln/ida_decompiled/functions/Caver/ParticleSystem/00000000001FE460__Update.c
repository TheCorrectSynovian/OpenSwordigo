/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE460
 * Mangled: ._ZN5Caver14ParticleSystem6UpdateEf
 * Demangled: Caver::ParticleSystem::Update(float)
 *
 * Callers: 3
 *   0x00000000002AA5B4  Caver::ParticleEmitterComponent::Prepare(void)
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *   0x00000000003E15F8  Caver::OverlayMenuButton::Update(float)
 *
 * Callees: 1
 *   0x0000000000453FF8  Caver::ParticleSystem::Update(float)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FE464 string=0x0000000000453FF8 "$@"
 *   insn=0x00000000001FE468 string=0x00000000001FE46C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleSystem::Update(Caver::ParticleSystem *this, float a2)
{
  return _ZN5Caver14ParticleSystem6UpdateEf(this, a2);
}

