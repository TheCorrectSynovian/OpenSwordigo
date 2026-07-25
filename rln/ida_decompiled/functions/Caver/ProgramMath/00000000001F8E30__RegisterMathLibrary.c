/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8E30
 * Mangled: ._ZN5Caver11ProgramMath19RegisterMathLibraryEPNS_12ProgramStateE
 * Demangled: Caver::ProgramMath::RegisterMathLibrary(Caver::ProgramState *)
 *
 * Callers: 1
 *   0x00000000004D6318  Caver::ProgramMath::RegisterLibraries(Caver::ProgramState *)
 *
 * Callees: 1
 *   0x00000000004D5CF4  sub_4D5CF4
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8E38 string=0x00000000001F8E3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ProgramMath::RegisterMathLibrary(Caver::ProgramMath *this, Caver::ProgramState *a2)
{
  JUMPOUT(0x4D6088);
}

