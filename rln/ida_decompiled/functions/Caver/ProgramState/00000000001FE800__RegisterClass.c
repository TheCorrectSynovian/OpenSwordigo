/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE800
 * Mangled: ._ZN5Caver12ProgramState13RegisterClassERKSsPKNS_11LibFunctionES5_
 * Demangled: Caver::ProgramState::RegisterClass(std::string const&,Caver::LibFunction const*,Caver::LibFunction const*)
 *
 * Callers: 3
 *   0x00000000004769F4  Caver::SceneObjectLib::RegisterLibrary(Caver::ProgramState *)
 *   0x00000000004D4BE0  Caver::ProgramMath::PushVector3(Caver::ProgramState *,Caver::Vector3 const&)
 *   0x00000000004D56A4  sub_4D56A4
 *
 * Callees: 1
 *   0x00000000004C1B88  Caver::ProgramState::RegisterClass(std::string const&,Caver::LibFunction const*,Caver::LibFunction const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE808 string=0x00000000001FE80C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ProgramState::RegisterClass()
{
  return _ZN5Caver12ProgramState13RegisterClassERKSsPKNS_11LibFunctionES5_();
}

