/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048D0C8
 * Mangled: _ZN5Caver16RenderingProgram25LocationOfUniformVariableEi
 * Demangled: Caver::RenderingProgram::LocationOfUniformVariable(int)
 *
 * Callers: 1
 *   0x00000000001F35C0  Caver::RenderingProgram::LocationOfUniformVariable(int)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingProgram::LocationOfUniformVariable(Caver::RenderingProgram *this, int a2)
{
  return *((unsigned int *)this + a2 + 14);
}

