/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031F3C0
 * Mangled: _ZN5Caver5Proto17ParticleComponent10SharedCtorEv
 * Demangled: Caver::Proto::ParticleComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000031F3C0 string=0x000000000031F3C4 "("
 *   insn=0x000000000031F3C4 string=0x000000000031F3C8 ""
 *   insn=0x000000000031F3C8 string=0x000000000031F3CC "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleComponent::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_QWORD *)(this + 16) = &Caver::Proto::ParticleComponent::_default_texture_name_;
  *(_QWORD *)(this + 24) = 0;
  return this;
}

