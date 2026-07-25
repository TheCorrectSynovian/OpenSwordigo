/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002509B8
 * Mangled: _ZN5Caver23MagicSpellCastComponent6CreateEv
 * Demangled: Caver::MagicSpellCastComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x0000000000250978  Caver::SkillComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FECA0  Caver::MagicSpellCastComponent::MagicSpellCastComponent(void)
 *   0x00000000002509F8  Caver::FireBreathComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000002509C8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002509E8 string=0x00000000002509EC "1"
 *   insn=0x00000000002509EC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::MagicSpellCastComponent *__fastcall Caver::MagicSpellCastComponent::Create(Caver::MagicSpellCastComponent *this)
{
  Caver::MagicSpellCastComponent *v1; // x19

  v1 = (Caver::MagicSpellCastComponent *)operator new(0xA8u);
  Caver::MagicSpellCastComponent::MagicSpellCastComponent(v1);
  return v1;
}

