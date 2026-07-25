/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250338
 * Mangled: _ZN5Caver20FireEmitterComponent6CreateEv
 * Demangled: Caver::FireEmitterComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000002502F8  Caver::MagicParticleEmitterComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002015C0  Caver::FireEmitterComponent::FireEmitterComponent(void)
 *   0x0000000000250378  Caver::SimpleGlowComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x0000000000250348 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000025036C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000250370 string=0x0000000000250374 "T"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::FireEmitterComponent *__fastcall Caver::FireEmitterComponent::Create(Caver::FireEmitterComponent *this)
{
  Caver::FireEmitterComponent *v1; // x19

  v1 = (Caver::FireEmitterComponent *)operator new(0xF0u);
  Caver::FireEmitterComponent::FireEmitterComponent(v1);
  return v1;
}

