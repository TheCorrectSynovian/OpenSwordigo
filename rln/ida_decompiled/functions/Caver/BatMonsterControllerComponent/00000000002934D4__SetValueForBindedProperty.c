/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002934D4
 * Mangled: _ZN5Caver29BatMonsterControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::BatMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8E50  Caver::MonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002934D4 string=0x00000000001F8E50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BatMonsterControllerComponent::SetValueForBindedProperty(
        Caver::BatMonsterControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::MonsterControllerComponent::SetValueForBindedProperty(this, a2, a3);
}

