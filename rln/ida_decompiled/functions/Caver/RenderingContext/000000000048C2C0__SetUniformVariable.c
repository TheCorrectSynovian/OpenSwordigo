/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048C2C0
 * Mangled: _ZN5Caver16RenderingContext18SetUniformVariableEiRKNS_7Matrix4E
 * Demangled: Caver::RenderingContext::SetUniformVariable(int,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F35C0  Caver::RenderingProgram::LocationOfUniformVariable(int)
 *
 * Referenced strings: 1
 *   insn=0x000000000048C2C4 string=0x00000000001F35C0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::SetUniformVariable(
        Caver::RenderingProgram **this,
        int a2,
        const Caver::Matrix4 *a3)
{
  return Caver::RenderingProgram::LocationOfUniformVariable(this[7], a2);
}

