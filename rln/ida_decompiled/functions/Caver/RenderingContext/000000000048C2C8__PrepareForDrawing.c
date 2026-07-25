/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048C2C8
 * Mangled: _ZN5Caver16RenderingContext17PrepareForDrawingEv
 * Demangled: Caver::RenderingContext::PrepareForDrawing(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F69D0  .glColor4ub
 *   0x0000000000203BE0  Caver::RenderingProgram::HasUniformVariable(int)
 *
 * Referenced strings: 13
 *   insn=0x000000000048C2D4 string=0x000000000048C2D8 "h"
 *   insn=0x000000000048C2D8 string=0x000000000048C2DC "("
 *   insn=0x000000000048C2DC string=0x000000000048C2E0 "h"
 *   insn=0x000000000048C2DC string=0x000000000048C300 "h"
 *   insn=0x000000000048C2E4 string=0x000000000048C2E8 "c"
 *   insn=0x000000000048C2E8 string=0x000000000048C2EC "b"
 *   insn=0x000000000048C2EC string=0x000000000048C2F0 "a"
 *   insn=0x000000000048C2F0 string=0x000000000048C2F4 "`"
 *   insn=0x000000000048C2F8 string=0x00000000001F69D0 "0'"
 *   insn=0x000000000048C300 string=0x000000000048C304 ""
 *   insn=0x000000000048C304 string=0x000000000048C308 "h"
 *   insn=0x000000000048C310 string=0x000000000048C314 "`"
 *   insn=0x000000000048C318 string=0x000000000048C31C "1"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::PrepareForDrawing(__int64 this)
{
  __int64 v1; // x19

  v1 = this;
  if ( *(_BYTE *)(this + 118) )
  {
    if ( !*(_DWORD *)this )
      this = glColor4ub();
    *(_BYTE *)(v1 + 118) = 0;
  }
  if ( *(_BYTE *)(v1 + 128) )
  {
    if ( *(_DWORD *)v1 == 1 )
      this = Caver::RenderingProgram::HasUniformVariable(*(Caver::RenderingProgram **)(v1 + 56), 0);
    *(_BYTE *)(v1 + 128) = 0;
  }
  return this;
}

