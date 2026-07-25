/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AB2D0
 * Mangled: _ZN5Caver24ParticleEmitterComponent12StopEmittingEv
 * Demangled: Caver::ParticleEmitterComponent::StopEmitting(void)
 *
 * Callers: 1
 *   0x00000000001F81F0  Caver::ParticleEmitterComponent::StopEmitting(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleEmitterComponent::StopEmitting(__int64 this)
{
  *(_BYTE *)(this + 360) = 0;
  return this;
}

