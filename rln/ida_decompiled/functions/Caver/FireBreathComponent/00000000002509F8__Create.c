/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002509F8
 * Mangled: _ZN5Caver19FireBreathComponent6CreateEv
 * Demangled: Caver::FireBreathComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000002509B8  Caver::MagicSpellCastComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5E20  Caver::FireBreathComponent::FireBreathComponent(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000250A38  Caver::ProjectileControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x0000000000250A08 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000250A10 string=0x00000000001F5E20 "P'"
 *   insn=0x0000000000250A28 string=0x0000000000250A2C "!"
 *   insn=0x0000000000250A2C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::FireBreathComponent *__fastcall Caver::FireBreathComponent::Create(Caver::FireBreathComponent *this)
{
  Caver::FireBreathComponent *v1; // x19

  v1 = (Caver::FireBreathComponent *)operator new(0x108u);
  Caver::FireBreathComponent::FireBreathComponent(v1);
  return v1;
}

