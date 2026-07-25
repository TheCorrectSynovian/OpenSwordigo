/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201450
 * Mangled: ._ZN5Caver31MonsterDeathControllerComponent11KillMonsterERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::MonsterDeathControllerComponent::KillMonster(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 2
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *
 * Callees: 1
 *   0x000000000029A028  Caver::MonsterDeathControllerComponent::KillMonster(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201458 string=0x000000000020145C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MonsterDeathControllerComponent::KillMonster()
{
  return _ZN5Caver31MonsterDeathControllerComponent11KillMonsterERKN5boost13intrusive_ptrINS_11SceneObjectEEE();
}

