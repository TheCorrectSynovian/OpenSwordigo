/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F89F0
 * Mangled: ._ZN5Caver37NewFramebufferImplForDrawingToTextureERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::NewFramebufferImplForDrawingToTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 1
 *   0x000000000048B0F0  Caver::RenderingContext::FramebufferForDrawingToTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x00000000004B2D58  Caver::NewFramebufferImplForDrawingToTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F89F8 string=0x00000000001F89FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::NewFramebufferImplForDrawingToTexture()
{
  return _ZN5Caver37NewFramebufferImplForDrawingToTextureERKN5boost13intrusive_ptrINS_7TextureEEE();
}

