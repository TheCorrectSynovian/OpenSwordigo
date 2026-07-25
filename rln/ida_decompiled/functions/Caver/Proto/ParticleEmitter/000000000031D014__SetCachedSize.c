/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031D014
 * Mangled: _ZNK5Caver5Proto15ParticleEmitter13SetCachedSizeEi
 * Demangled: Caver::Proto::ParticleEmitter::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000031CFDC  Caver::Proto::ParticleEmitter::~ParticleEmitter()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleEmitter::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

