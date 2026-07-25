/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD010
 * Mangled: ._ZN5Caver31MonsterDeathControllerComponent12SliceMonsterERKN5boost13intrusive_ptrINS_11SceneObjectEEERKNS_7Vector4E
 * Demangled: Caver::MonsterDeathControllerComponent::SliceMonster(boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector4 const&)
 *
 * Callers: 1
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *
 * Callees: 1
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD018 string=0x00000000001FD01C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::MonsterDeathControllerComponent::SliceMonster()
{
  JUMPOUT(0x29AA50);
}

