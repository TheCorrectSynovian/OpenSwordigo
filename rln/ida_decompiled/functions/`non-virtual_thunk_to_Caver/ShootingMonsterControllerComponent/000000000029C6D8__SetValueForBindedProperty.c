/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029C6D8
 * Mangled: _ZThn16_N5Caver34ShootingMonsterControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::ShootingMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8E50  Caver::MonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000029C6DC string=0x00000000001F8E50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ShootingMonsterControllerComponent::SetValueForBindedProperty(
        Caver::ShootingMonsterControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::MonsterControllerComponent::SetValueForBindedProperty(
           (Caver::ShootingMonsterControllerComponent *)((char *)this - 16),
           a2,
           a3);
}

