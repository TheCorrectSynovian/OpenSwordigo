/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE9A0
 * Mangled: ._ZN5Caver12ProgramState11NewUserDataEmRKSs
 * Demangled: Caver::ProgramState::NewUserData(ulong,std::string const&)
 *
 * Callers: 2
 *   0x0000000000476844  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x00000000004D4BE0  Caver::ProgramMath::PushVector3(Caver::ProgramState *,Caver::Vector3 const&)
 *
 * Callees: 1
 *   0x00000000004C1ACC  Caver::ProgramState::NewUserData(ulong,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE9A8 string=0x00000000001FE9AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ProgramState::NewUserData()
{
  return _ZN5Caver12ProgramState11NewUserDataEmRKSs();
}

