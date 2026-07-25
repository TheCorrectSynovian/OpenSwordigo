/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048B0F0
 * Mangled: _ZN5Caver16RenderingContext30FramebufferForDrawingToTextureERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::RenderingContext::FramebufferForDrawingToTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 1
 *   0x0000000000201E80  Caver::RenderingContext::FramebufferForDrawingToTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x00000000001F89F0  Caver::NewFramebufferImplForDrawingToTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 2
 *   insn=0x000000000048B0F0 string=0x000000000048B0F4 "?"
 *   insn=0x000000000048B0F4 string=0x00000000001F89F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::RenderingContext::FramebufferForDrawingToTexture()
{
  return Caver::NewFramebufferImplForDrawingToTexture();
}

