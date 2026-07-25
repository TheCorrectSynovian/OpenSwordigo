/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048C330
 * Mangled: _ZN5Caver16RenderingContext10DrawArraysEiii
 * Demangled: Caver::RenderingContext::DrawArrays(int,int,int)
 *
 * Callers: 1
 *   0x00000000001F3B30  Caver::RenderingContext::DrawArrays(int,int,int)
 *
 * Callees: 3
 *   0x00000000001F69D0  .glColor4ub
 *   0x00000000001FEF10  .glDrawArrays
 *   0x0000000000203BE0  Caver::RenderingProgram::HasUniformVariable(int)
 *
 * Referenced strings: 3
 *   insn=0x000000000048C350 string=0x000000000048C354 "("
 *   insn=0x000000000048C370 string=0x00000000001F69D0 "0'"
 *   insn=0x000000000048C378 string=0x000000000048C37C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::DrawArrays(Caver::RenderingContext *this)
{
  if ( *((_BYTE *)this + 118) )
  {
    if ( !*(_DWORD *)this )
      glColor4ub();
    *((_BYTE *)this + 118) = 0;
  }
  if ( *((_BYTE *)this + 128) )
  {
    if ( *(_DWORD *)this == 1 )
      Caver::RenderingProgram::HasUniformVariable(*((Caver::RenderingProgram **)this + 7), 0);
    *((_BYTE *)this + 128) = 0;
  }
  return glDrawArrays();
}

