/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281ED4
 * Mangled: _ZN5Caver23DimensionSpellComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::DimensionSpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3EB0  Caver::SpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000281ED4 string=0x00000000001F3EB0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DimensionSpellComponent::SetValueForBindedProperty(
        Caver::DimensionSpellComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::SpellComponent::SetValueForBindedProperty(this, a2, a3);
}

