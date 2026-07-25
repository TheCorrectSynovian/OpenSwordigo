/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201920
 * Mangled: ._ZN5Caver26MonsterControllerComponent19PerformBindedActionEi
 * Demangled: Caver::MonsterControllerComponent::PerformBindedAction(int)
 *
 * Callers: 22
 *   0x00000000002934E0  Caver::BatMonsterControllerComponent::PerformBindedAction(int)
 *   0x00000000002934E4  `non-virtual thunk to'Caver::BatMonsterControllerComponent::PerformBindedAction(int)
 *   0x000000000029478C  Caver::BouncingMonsterControllerComponent::PerformBindedAction(int)
 *   0x0000000000294790  `non-virtual thunk to'Caver::BouncingMonsterControllerComponent::PerformBindedAction(int)
 *   0x0000000000295E34  Caver::ChargingMonsterControllerComponent::PerformBindedAction(int)
 *   0x0000000000295E38  `non-virtual thunk to'Caver::ChargingMonsterControllerComponent::PerformBindedAction(int)
 *   0x0000000000297358  Caver::GenericMonsterControllerComponent::PerformBindedAction(int)
 *   0x000000000029735C  `non-virtual thunk to'Caver::GenericMonsterControllerComponent::PerformBindedAction(int)
 *   0x0000000000298DB8  Caver::LeapingMonsterControllerComponent::PerformBindedAction(int)
 *   0x0000000000298DBC  `non-virtual thunk to'Caver::LeapingMonsterControllerComponent::PerformBindedAction(int)
 *   0x000000000029BF18  Caver::ProjectileMonsterControllerComponent::PerformBindedAction(int)
 *   0x000000000029BF1C  `non-virtual thunk to'Caver::ProjectileMonsterControllerComponent::PerformBindedAction(int)
 *   0x000000000029C6E0  Caver::ShootingMonsterControllerComponent::PerformBindedAction(int)
 *   0x000000000029C6E4  `non-virtual thunk to'Caver::ShootingMonsterControllerComponent::PerformBindedAction(int)
 *   0x000000000029DBB8  Caver::SkellyMonsterControllerComponent::PerformBindedAction(int)
 *   0x000000000029DBBC  `non-virtual thunk to'Caver::SkellyMonsterControllerComponent::PerformBindedAction(int)
 *   0x000000000029F4D8  Caver::SnappingMonsterControllerComponent::PerformBindedAction(int)
 *   0x000000000029F4DC  `non-virtual thunk to'Caver::SnappingMonsterControllerComponent::PerformBindedAction(int)
 *   0x00000000002A095C  Caver::StaticMonsterControllerComponent::PerformBindedAction(int)
 *   0x00000000002A0960  `non-virtual thunk to'Caver::StaticMonsterControllerComponent::PerformBindedAction(int)
 *   0x00000000002A1330  Caver::WalkingMonsterControllerComponent::PerformBindedAction(int)
 *   0x00000000002A1334  `non-virtual thunk to'Caver::WalkingMonsterControllerComponent::PerformBindedAction(int)
 *
 * Callees: 1
 *   0x00000000002999F4  Caver::MonsterControllerComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201928 string=0x000000000020192C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MonsterControllerComponent::PerformBindedAction(
        Caver::MonsterControllerComponent *this,
        int a2)
{
  return _ZN5Caver26MonsterControllerComponent19PerformBindedActionEi(this, a2);
}

