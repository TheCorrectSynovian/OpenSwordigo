/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF3B0
 * Mangled: ._ZN5Caver21WhooshParticleEmitterC2Ev
 * Demangled: Caver::WhooshParticleEmitter::WhooshParticleEmitter(void)
 *
 * Callers: 1
 *   0x0000000000452FC0  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *
 * Callees: 1
 *   0x0000000000456308  Caver::WhooshParticleEmitter::WhooshParticleEmitter(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF3B8 string=0x00000000001FF3BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WhooshParticleEmitter::WhooshParticleEmitter(Caver::WhooshParticleEmitter *this)
{
  return _ZN5Caver21WhooshParticleEmitterC2Ev(this);
}

