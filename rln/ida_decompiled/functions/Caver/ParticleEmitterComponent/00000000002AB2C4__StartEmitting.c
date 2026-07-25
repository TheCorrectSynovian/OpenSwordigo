/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AB2C4
 * Mangled: _ZN5Caver24ParticleEmitterComponent13StartEmittingEv
 * Demangled: Caver::ParticleEmitterComponent::StartEmitting(void)
 *
 * Callers: 1
 *   0x00000000001FD310  Caver::ParticleEmitterComponent::StartEmitting(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000002AB2C4 string=0x00000000002AB2C8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleEmitterComponent::StartEmitting(__int64 this)
{
  *(_BYTE *)(this + 360) = 1;
  return this;
}

