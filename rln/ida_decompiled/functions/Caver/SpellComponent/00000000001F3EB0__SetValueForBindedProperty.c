/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3EB0
 * Mangled: ._ZN5Caver14SpellComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::SpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 11
 *   0x0000000000281ED4  Caver::DimensionSpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000281ED8  `non-virtual thunk to'Caver::DimensionSpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000282A84  Caver::FireBreathComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000282AF0  `non-virtual thunk to'Caver::FireBreathComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002845B0  Caver::MagicBoltComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000284638  `non-virtual thunk to'Caver::MagicBoltComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000285CDC  Caver::MagicBombComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000285D48  `non-virtual thunk to'Caver::MagicBombComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000289980  Caver::MagicHookshotComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002899F0  `non-virtual thunk to'Caver::MagicHookshotComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000028FEB4  Caver::SpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x000000000028FEB4  Caver::SpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3EB8 string=0x00000000001F3EBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SpellComponent::SetValueForBindedProperty(
        Caver::SpellComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver14SpellComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

