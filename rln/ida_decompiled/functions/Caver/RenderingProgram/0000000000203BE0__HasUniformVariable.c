/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203BE0
 * Mangled: ._ZN5Caver16RenderingProgram18HasUniformVariableEi
 * Demangled: Caver::RenderingProgram::HasUniformVariable(int)
 *
 * Callers: 7
 *   0x000000000048C2C8  Caver::RenderingContext::PrepareForDrawing(void)
 *   0x000000000048C330  Caver::RenderingContext::DrawArrays(int,int,int)
 *   0x000000000048C3B8  Caver::RenderingContext::DrawElements(int,int,Caver::DataType,void const*)
 *   0x000000000048C450  Caver::RenderingContext::DrawTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,Caver::Rectangle const&,float)
 *   0x000000000048C6A0  Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const&,float)
 *   0x000000000048C848  Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const*,float)
 *   0x000000000048C9F8  Caver::RenderingContext::DrawRect(Caver::Rectangle const&,Caver::Color const&,float)
 *
 * Callees: 1
 *   0x000000000048D0B4  Caver::RenderingProgram::HasUniformVariable(int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203BE4 string=0x000000000048D0B4 ""
 *   insn=0x0000000000203BE8 string=0x0000000000203BEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingProgram::HasUniformVariable(Caver::RenderingProgram *this, int a2)
{
  return _ZN5Caver16RenderingProgram18HasUniformVariableEi(this, a2);
}

