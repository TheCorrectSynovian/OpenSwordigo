/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250278
 * Mangled: _ZN5Caver24ParticleEmitterComponent6CreateEv
 * Demangled: Caver::ParticleEmitterComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x0000000000250238  Caver::GenericMonsterControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6430  Caver::ParticleEmitterComponent::ParticleEmitterComponent(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002502B8  Caver::ParticleComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x0000000000250288 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000025028C string=0x0000000000250290 "h"
 *   insn=0x0000000000250290 string=0x00000000001F6430 "0'"
 *   insn=0x00000000002502AC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::ParticleEmitterComponent *__fastcall Caver::ParticleEmitterComponent::Create(
        Caver::ParticleEmitterComponent *this)
{
  Caver::ParticleEmitterComponent *v1; // x19

  v1 = (Caver::ParticleEmitterComponent *)operator new(0x1D8u);
  Caver::ParticleEmitterComponent::ParticleEmitterComponent(v1);
  return v1;
}

