/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029C6D4
 * Mangled: _ZN5Caver34ShootingMonsterControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ShootingMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8E50  Caver::MonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000029C6D4 string=0x00000000001F8E50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ShootingMonsterControllerComponent::SetValueForBindedProperty(
        Caver::ShootingMonsterControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::MonsterControllerComponent::SetValueForBindedProperty(this, a2, a3);
}

