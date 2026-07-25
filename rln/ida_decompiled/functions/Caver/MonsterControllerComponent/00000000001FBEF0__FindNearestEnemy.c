/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBEF0
 * Mangled: ._ZN5Caver26MonsterControllerComponent16FindNearestEnemyEv
 * Demangled: Caver::MonsterControllerComponent::FindNearestEnemy(void)
 *
 * Callers: 6
 *   0x0000000000294B58  Caver::BouncingMonsterControllerComponent::Update(float)
 *   0x00000000002962EC  Caver::ChargingMonsterControllerComponent::Update(float)
 *   0x00000000002976D8  Caver::GenericMonsterControllerComponent::Update(float)
 *   0x000000000029CB68  Caver::ShootingMonsterControllerComponent::Update(float)
 *   0x000000000029E128  Caver::SkellyMonsterControllerComponent::Update(float)
 *   0x000000000029F8EC  Caver::SnappingMonsterControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x0000000000299B44  Caver::MonsterControllerComponent::FindNearestEnemy(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBEF8 string=0x00000000001FBEFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MonsterControllerComponent::FindNearestEnemy(Caver::MonsterControllerComponent *this)
{
  return _ZN5Caver26MonsterControllerComponent16FindNearestEnemyEv(this);
}

