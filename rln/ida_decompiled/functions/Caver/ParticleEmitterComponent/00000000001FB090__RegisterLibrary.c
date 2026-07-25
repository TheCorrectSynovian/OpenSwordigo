/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB090
 * Mangled: ._ZN5Caver24ParticleEmitterComponent15RegisterLibraryEv
 * Demangled: Caver::ParticleEmitterComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x00000000002AA5B4  Caver::ParticleEmitterComponent::Prepare(void)
 *
 * Callees: 1
 *   0x00000000002AA5B4  Caver::ParticleEmitterComponent::Prepare(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB098 string=0x00000000001FB09C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ParticleEmitterComponent::RegisterLibrary(Caver::ParticleEmitterComponent *this)
{
  JUMPOUT(0x2AA818);
}

