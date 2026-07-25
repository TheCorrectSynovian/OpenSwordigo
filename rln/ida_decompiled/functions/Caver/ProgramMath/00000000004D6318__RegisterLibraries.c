/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D6318
 * Mangled: _ZN5Caver11ProgramMath17RegisterLibrariesEPNS_12ProgramStateE
 * Demangled: Caver::ProgramMath::RegisterLibraries(Caver::ProgramState *)
 *
 * Callers: 1
 *   0x0000000000200FD0  Caver::ProgramMath::RegisterLibraries(Caver::ProgramState *)
 *
 * Callees: 3
 *   0x00000000001F8E30  Caver::ProgramMath::RegisterMathLibrary(Caver::ProgramState *)
 *   0x00000000001F98E0  Caver::ProgramMath::RegisterVector3Library(Caver::ProgramState *)
 *   0x0000000000202840  Caver::ProgramMath::RegisterRectangleLibrary(Caver::ProgramState *)
 *
 * Referenced strings: 4
 *   insn=0x00000000004D6324 string=0x00000000004D6328 "n"
 *   insn=0x00000000004D6328 string=0x00000000001F98E0 "0'"
 *   insn=0x00000000004D632C string=0x00000000004D6330 "D"
 *   insn=0x00000000004D6340 string=0x00000000001F8E30 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProgramMath::RegisterLibraries(Caver::ProgramMath *this, Caver::ProgramState *a2)
{
  Caver::ProgramState *v3; // x1
  Caver::ProgramState *v4; // x1

  Caver::ProgramMath::RegisterVector3Library(this, a2);
  Caver::ProgramMath::RegisterRectangleLibrary(this, v3);
  Caver::ProgramMath::RegisterMathLibrary(this, v4);
}

