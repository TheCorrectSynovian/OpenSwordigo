/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9A70
 * Mangled: ._ZNK5Caver5Proto15ParticleEmitter8ByteSizeEv
 * Demangled: Caver::Proto::ParticleEmitter::ByteSize(void)
 *
 * Callers: 1
 *   0x000000000031EE30  Caver::Proto::ParticleEmitterComponent::ByteSize(void)
 *
 * Callees: 1
 *   0x000000000031D990  Caver::Proto::ParticleEmitter::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9A78 string=0x00000000001F9A7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ParticleEmitter::ByteSize(Caver::Proto::ParticleEmitter *this)
{
  return _ZNK5Caver5Proto15ParticleEmitter8ByteSizeEv(this);
}

