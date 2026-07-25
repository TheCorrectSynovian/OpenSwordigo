/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDDB0
 * Mangled: ._ZN5Caver12ProgramState15SetParentObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::ProgramState::SetParentObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 2
 *   0x0000000000232710  Caver::ProgramComponent::Execute(void)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *
 * Callees: 1
 *   0x00000000004C1424  Caver::ProgramState::SetParentObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FDDB4 string=0x00000000004C1424 ")"
 *   insn=0x00000000001FDDB8 string=0x00000000001FDDBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ProgramState::SetParentObject()
{
  return _ZN5Caver12ProgramState15SetParentObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE();
}

