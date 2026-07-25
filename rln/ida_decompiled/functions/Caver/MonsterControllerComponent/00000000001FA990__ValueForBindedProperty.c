/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA990
 * Mangled: ._ZN5Caver26MonsterControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::MonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 22
 *   0x00000000002934C8  Caver::BatMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002934CC  `non-virtual thunk to'Caver::BatMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002946A4  Caver::BouncingMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002946D4  `non-virtual thunk to'Caver::BouncingMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x0000000000295D7C  Caver::ChargingMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x0000000000295DA0  `non-virtual thunk to'Caver::ChargingMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x0000000000297340  Caver::GenericMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x0000000000297344  `non-virtual thunk to'Caver::GenericMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x0000000000298DA0  Caver::LeapingMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x0000000000298DA4  `non-virtual thunk to'Caver::LeapingMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x000000000029BF00  Caver::ProjectileMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x000000000029BF04  `non-virtual thunk to'Caver::ProjectileMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x000000000029C6C8  Caver::ShootingMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x000000000029C6CC  `non-virtual thunk to'Caver::ShootingMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x000000000029DBA0  Caver::SkellyMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x000000000029DBA4  `non-virtual thunk to'Caver::SkellyMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x000000000029F4C0  Caver::SnappingMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x000000000029F4C4  `non-virtual thunk to'Caver::SnappingMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002A0944  Caver::StaticMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002A0948  `non-virtual thunk to'Caver::StaticMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002A1318  Caver::WalkingMonsterControllerComponent::ValueForBindedProperty(int)
 *   0x00000000002A131C  `non-virtual thunk to'Caver::WalkingMonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x000000000029998C  Caver::MonsterControllerComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FA994 string=0x000000000029998C "?"
 *   insn=0x00000000001FA998 string=0x00000000001FA99C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MonsterControllerComponent::ValueForBindedProperty(
        Caver::MonsterControllerComponent *this,
        int a2)
{
  return _ZN5Caver26MonsterControllerComponent22ValueForBindedPropertyEi(this, a2);
}

