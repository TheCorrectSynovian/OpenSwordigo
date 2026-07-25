/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048D0B4
 * Mangled: _ZN5Caver16RenderingProgram18HasUniformVariableEi
 * Demangled: Caver::RenderingProgram::HasUniformVariable(int)
 *
 * Callers: 1
 *   0x0000000000203BE0  Caver::RenderingProgram::HasUniformVariable(int)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000048D0B4 string=0x000000000048D0B8 "9@"
 *   insn=0x000000000048D0B8 string=0x000000000048D0BC "}"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::RenderingProgram::HasUniformVariable(Caver::RenderingProgram *this, int a2)
{
  return *((_DWORD *)this + a2 + 14) >= 0;
}

