/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6D80
 * Mangled: ._ZN5Caver14SpellComponent19PerformBindedActionEi
 * Demangled: Caver::SpellComponent::PerformBindedAction(int)
 *
 * Callers: 10
 *   0x0000000000281EE0  Caver::DimensionSpellComponent::PerformBindedAction(int)
 *   0x0000000000281EE4  `non-virtual thunk to'Caver::DimensionSpellComponent::PerformBindedAction(int)
 *   0x0000000000282B5C  Caver::FireBreathComponent::PerformBindedAction(int)
 *   0x0000000000282B60  `non-virtual thunk to'Caver::FireBreathComponent::PerformBindedAction(int)
 *   0x00000000002846C0  Caver::MagicBoltComponent::PerformBindedAction(int)
 *   0x00000000002846C4  `non-virtual thunk to'Caver::MagicBoltComponent::PerformBindedAction(int)
 *   0x0000000000285DB4  Caver::MagicBombComponent::PerformBindedAction(int)
 *   0x0000000000285DB8  `non-virtual thunk to'Caver::MagicBombComponent::PerformBindedAction(int)
 *   0x0000000000289A60  Caver::MagicHookshotComponent::PerformBindedAction(int)
 *   0x0000000000289A64  `non-virtual thunk to'Caver::MagicHookshotComponent::PerformBindedAction(int)
 *
 * Callees: 1
 *   0x0000000000290010  Caver::SpellComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6D88 string=0x00000000001F6D8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SpellComponent::PerformBindedAction(Caver::SpellComponent *this, int a2)
{
  return _ZN5Caver14SpellComponent19PerformBindedActionEi(this, a2);
}

