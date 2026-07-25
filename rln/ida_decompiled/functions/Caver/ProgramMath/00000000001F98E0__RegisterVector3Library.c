/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F98E0
 * Mangled: ._ZN5Caver11ProgramMath22RegisterVector3LibraryEPNS_12ProgramStateE
 * Demangled: Caver::ProgramMath::RegisterVector3Library(Caver::ProgramState *)
 *
 * Callers: 1
 *   0x00000000004D6318  Caver::ProgramMath::RegisterLibraries(Caver::ProgramState *)
 *
 * Callees: 1
 *   0x00000000004D4BE0  Caver::ProgramMath::PushVector3(Caver::ProgramState *,Caver::Vector3 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F98E8 string=0x00000000001F98EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ProgramMath::RegisterVector3Library(Caver::ProgramMath *this, Caver::ProgramState *a2)
{
  JUMPOUT(0x4D4E88);
}

