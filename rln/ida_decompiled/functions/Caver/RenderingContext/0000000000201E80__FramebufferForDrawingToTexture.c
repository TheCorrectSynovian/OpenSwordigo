/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201E80
 * Mangled: ._ZN5Caver16RenderingContext30FramebufferForDrawingToTextureERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::RenderingContext::FramebufferForDrawingToTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 1
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000048B0F0  Caver::RenderingContext::FramebufferForDrawingToTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201E88 string=0x0000000000201E8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::RenderingContext::FramebufferForDrawingToTexture()
{
  return _ZN5Caver16RenderingContext30FramebufferForDrawingToTextureERKN5boost13intrusive_ptrINS_7TextureEEE();
}

