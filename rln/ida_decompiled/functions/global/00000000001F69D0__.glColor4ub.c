/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F69D0
 * Mangled: .glColor4ub
 * Demangled: .glColor4ub
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
 *   0x00000000006FE730  glColor4ub
 *
 * Referenced strings: 1
 *   insn=0x00000000001F69D8 string=0x00000000001F69DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glColor4ub()
{
  return glColor4ub();
}

