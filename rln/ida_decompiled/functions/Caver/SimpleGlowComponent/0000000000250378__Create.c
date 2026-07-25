/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250378
 * Mangled: _ZN5Caver19SimpleGlowComponent6CreateEv
 * Demangled: Caver::SimpleGlowComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x0000000000250338  Caver::FireEmitterComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8390  Caver::SimpleGlowComponent::SimpleGlowComponent(void)
 *   0x00000000002503B8  Caver::ParticleObjectComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x0000000000250388 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000250390 string=0x00000000001F8390 "0'"
 *   insn=0x00000000002503AC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002503B0 string=0x00000000002503B4 "D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SimpleGlowComponent *__fastcall Caver::SimpleGlowComponent::Create(Caver::SimpleGlowComponent *this)
{
  Caver::SimpleGlowComponent *v1; // x19

  v1 = (Caver::SimpleGlowComponent *)operator new(0xE0u);
  Caver::SimpleGlowComponent::SimpleGlowComponent(v1);
  return v1;
}

