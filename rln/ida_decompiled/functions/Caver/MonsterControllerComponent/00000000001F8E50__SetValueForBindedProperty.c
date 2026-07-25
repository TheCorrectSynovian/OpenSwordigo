/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8E50
 * Mangled: ._ZN5Caver26MonsterControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::MonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 22
 *   0x00000000002934D4  Caver::BatMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002934D8  `non-virtual thunk to'Caver::BatMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000294708  Caver::BouncingMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000294748  `non-virtual thunk to'Caver::BouncingMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000295DC8  Caver::ChargingMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000295DFC  `non-virtual thunk to'Caver::ChargingMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000029734C  Caver::GenericMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000297350  `non-virtual thunk to'Caver::GenericMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000298DAC  Caver::LeapingMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000298DB0  `non-virtual thunk to'Caver::LeapingMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000029BF0C  Caver::ProjectileMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000029BF10  `non-virtual thunk to'Caver::ProjectileMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000029C6D4  Caver::ShootingMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000029C6D8  `non-virtual thunk to'Caver::ShootingMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000029DBAC  Caver::SkellyMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000029DBB0  `non-virtual thunk to'Caver::SkellyMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000029F4CC  Caver::SnappingMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000029F4D0  `non-virtual thunk to'Caver::SnappingMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002A0950  Caver::StaticMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002A0954  `non-virtual thunk to'Caver::StaticMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002A1324  Caver::WalkingMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002A1328  `non-virtual thunk to'Caver::WalkingMonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000002999B8  Caver::MonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F8E54 string=0x00000000002999B8 "?"
 *   insn=0x00000000001F8E58 string=0x00000000001F8E5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MonsterControllerComponent::SetValueForBindedProperty(
        Caver::MonsterControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver26MonsterControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

