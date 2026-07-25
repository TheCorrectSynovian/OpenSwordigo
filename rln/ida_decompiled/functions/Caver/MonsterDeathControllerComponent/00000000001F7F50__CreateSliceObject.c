/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7F50
 * Mangled: ._ZN5Caver31MonsterDeathControllerComponent17CreateSliceObjectERKN5boost10shared_ptrINS_5ModelEEERKNS_7Vector3E
 * Demangled: Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *
 * Callers: 1
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *
 * Callees: 1
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7F58 string=0x00000000001F7F5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MonsterDeathControllerComponent::CreateSliceObject()
{
  return _ZN5Caver31MonsterDeathControllerComponent17CreateSliceObjectERKN5boost10shared_ptrINS_5ModelEEERKNS_7Vector3E();
}

