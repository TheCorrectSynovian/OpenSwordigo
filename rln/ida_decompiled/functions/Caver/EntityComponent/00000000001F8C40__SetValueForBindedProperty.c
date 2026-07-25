/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8C40
 * Mangled: ._ZN5Caver15EntityComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::EntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 2
 *   0x0000000000272510  Caver::HeroEntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000027BB28  Caver::MonsterEntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000268B70  Caver::EntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F8C44 string=0x0000000000268B70 "?"
 *   insn=0x00000000001F8C48 string=0x00000000001F8C4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityComponent::SetValueForBindedProperty(
        Caver::EntityComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver15EntityComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

