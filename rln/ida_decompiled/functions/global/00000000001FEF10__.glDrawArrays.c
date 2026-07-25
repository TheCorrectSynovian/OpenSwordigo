/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEF10
 * Mangled: .glDrawArrays
 * Demangled: .glDrawArrays
 *
 * Callers: 6
 *   0x000000000047DAA8  Caver::FWShell::DrawTouches(Caver::RenderingContext *)
 *   0x000000000048C330  Caver::RenderingContext::DrawArrays(int,int,int)
 *   0x000000000048C450  Caver::RenderingContext::DrawTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,Caver::Rectangle const&,float)
 *   0x000000000048C6A0  Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const&,float)
 *   0x000000000048C848  Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const*,float)
 *   0x000000000048C9F8  Caver::RenderingContext::DrawRect(Caver::Rectangle const&,Caver::Color const&,float)
 *
 * Callees: 1
 *   0x00000000006FEAA8  glDrawArrays
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEF18 string=0x00000000001FEF1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glDrawArrays()
{
  return glDrawArrays();
}

