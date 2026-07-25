/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F35C0
 * Mangled: ._ZN5Caver16RenderingProgram25LocationOfUniformVariableEi
 * Demangled: Caver::RenderingProgram::LocationOfUniformVariable(int)
 *
 * Callers: 1
 *   0x000000000048C2C0  Caver::RenderingContext::SetUniformVariable(int,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000048D0C8  Caver::RenderingProgram::LocationOfUniformVariable(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F35C4 string=0x000000000048D0C8 ""
 *   insn=0x00000000001F35C8 string=0x00000000001F35CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingProgram::LocationOfUniformVariable(Caver::RenderingProgram *this, int a2)
{
  return _ZN5Caver16RenderingProgram25LocationOfUniformVariableEi(this, a2);
}

