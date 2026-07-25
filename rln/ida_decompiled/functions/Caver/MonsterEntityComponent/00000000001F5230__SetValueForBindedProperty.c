/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5230
 * Mangled: ._ZN5Caver22MonsterEntityComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::MonsterEntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x000000000027BB28  Caver::MonsterEntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x000000000027BB28  Caver::MonsterEntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5238 string=0x00000000001F523C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MonsterEntityComponent::SetValueForBindedProperty(
        Caver::MonsterEntityComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver22MonsterEntityComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

