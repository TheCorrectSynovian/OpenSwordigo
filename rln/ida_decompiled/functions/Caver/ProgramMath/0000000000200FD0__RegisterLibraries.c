/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200FD0
 * Mangled: ._ZN5Caver11ProgramMath17RegisterLibrariesEPNS_12ProgramStateE
 * Demangled: Caver::ProgramMath::RegisterLibraries(Caver::ProgramState *)
 *
 * Callers: 1
 *   0x00000000004C0D84  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *
 * Callees: 1
 *   0x00000000004D6318  Caver::ProgramMath::RegisterLibraries(Caver::ProgramState *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200FD8 string=0x0000000000200FDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramMath::RegisterLibraries(Caver::ProgramMath *this, Caver::ProgramState *a2)
{
  return _ZN5Caver11ProgramMath17RegisterLibrariesEPNS_12ProgramStateE(this, a2);
}

