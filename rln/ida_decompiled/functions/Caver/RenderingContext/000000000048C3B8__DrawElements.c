/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048C3B8
 * Mangled: _ZN5Caver16RenderingContext12DrawElementsEiiNS_8DataTypeEPKv
 * Demangled: Caver::RenderingContext::DrawElements(int,int,Caver::DataType,void const*)
 *
 * Callers: 1
 *   0x0000000000201770  Caver::RenderingContext::DrawElements(int,int,Caver::DataType,void const*)
 *
 * Callees: 3
 *   0x00000000001F69D0  .glColor4ub
 *   0x00000000001FDCD0  .glDrawElements
 *   0x0000000000203BE0  Caver::RenderingProgram::HasUniformVariable(int)
 *
 * Referenced strings: 6
 *   insn=0x000000000048C3E0 string=0x000000000048C3E4 "("
 *   insn=0x000000000048C3FC string=0x000000000048C400 "t"
 *   insn=0x000000000048C400 string=0x00000000001F69D0 "0'"
 *   insn=0x000000000048C408 string=0x000000000048C40C ""
 *   insn=0x000000000048C448 string=0x000000000048C44C "!"
 *   insn=0x000000000048C44C string=0x00000000001FDCD0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::DrawElements(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 118) )
  {
    if ( !*(_DWORD *)a1 )
      glColor4ub();
    *(_BYTE *)(a1 + 118) = 0;
  }
  if ( *(_BYTE *)(a1 + 128) )
  {
    if ( *(_DWORD *)a1 == 1 )
      Caver::RenderingProgram::HasUniformVariable(*(Caver::RenderingProgram **)(a1 + 56), 0);
    *(_BYTE *)(a1 + 128) = 0;
  }
  return glDrawElements();
}

