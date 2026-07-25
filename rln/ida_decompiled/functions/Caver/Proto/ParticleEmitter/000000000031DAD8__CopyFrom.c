/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031DAD8
 * Mangled: _ZN5Caver5Proto15ParticleEmitter8CopyFromERKS1_
 * Demangled: Caver::Proto::ParticleEmitter::CopyFrom(Caver::Proto::ParticleEmitter const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE980  Caver::Proto::ParticleEmitter::MergeFrom(Caver::Proto::ParticleEmitter const&)
 *
 * Referenced strings: 2
 *   insn=0x000000000031DAEC string=0x000000000031DAF0 "@"
 *   insn=0x000000000031DAF8 string=0x000000000031DAFC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ParticleEmitter::CopyFrom(
        Caver::Proto::ParticleEmitter *this,
        const Caver::Proto::ParticleEmitter *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::ParticleEmitter *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::ParticleEmitter::MergeFrom(this, a2);
  }
}

