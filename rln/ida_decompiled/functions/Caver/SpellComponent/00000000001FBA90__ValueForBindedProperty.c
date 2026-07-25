/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBA90
 * Mangled: ._ZN5Caver14SpellComponent22ValueForBindedPropertyEi
 * Demangled: Caver::SpellComponent::ValueForBindedProperty(int)
 *
 * Callers: 10
 *   0x0000000000281EC8  Caver::DimensionSpellComponent::ValueForBindedProperty(int)
 *   0x0000000000281ECC  `non-virtual thunk to'Caver::DimensionSpellComponent::ValueForBindedProperty(int)
 *   0x0000000000282A58  Caver::FireBreathComponent::ValueForBindedProperty(int)
 *   0x0000000000282A6C  `non-virtual thunk to'Caver::FireBreathComponent::ValueForBindedProperty(int)
 *   0x0000000000284564  Caver::MagicBoltComponent::ValueForBindedProperty(int)
 *   0x0000000000284588  `non-virtual thunk to'Caver::MagicBoltComponent::ValueForBindedProperty(int)
 *   0x0000000000285CB0  Caver::MagicBombComponent::ValueForBindedProperty(int)
 *   0x0000000000285CC4  `non-virtual thunk to'Caver::MagicBombComponent::ValueForBindedProperty(int)
 *   0x0000000000289954  Caver::MagicHookshotComponent::ValueForBindedProperty(int)
 *   0x0000000000289968  `non-virtual thunk to'Caver::MagicHookshotComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x000000000028FE90  Caver::SpellComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FBA94 string=0x000000000028FE90 "A"
 *   insn=0x00000000001FBA98 string=0x00000000001FBA9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SpellComponent::ValueForBindedProperty(Caver::SpellComponent *this, int a2)
{
  return _ZN5Caver14SpellComponent22ValueForBindedPropertyEi(this, a2);
}

