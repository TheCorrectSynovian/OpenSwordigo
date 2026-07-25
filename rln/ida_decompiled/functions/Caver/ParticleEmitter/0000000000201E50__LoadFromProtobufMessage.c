/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201E50
 * Mangled: ._ZN5Caver15ParticleEmitter23LoadFromProtobufMessageERKNS_5Proto15ParticleEmitterE
 * Demangled: Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *
 * Callers: 2
 *   0x00000000002A69FC  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *   0x0000000000452D00  Caver::ParticleEmitter::Clone(void)
 *
 * Callees: 1
 *   0x0000000000452FC0  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201E58 string=0x0000000000201E5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleEmitter::LoadFromProtobufMessage(
        Caver::ParticleEmitter *this,
        const Caver::Proto::ParticleEmitter *a2)
{
  return _ZN5Caver15ParticleEmitter23LoadFromProtobufMessageERKNS_5Proto15ParticleEmitterE(this, a2);
}

