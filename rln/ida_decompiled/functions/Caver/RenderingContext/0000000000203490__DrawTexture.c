/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203490
 * Mangled: ._ZN5Caver16RenderingContext11DrawTextureERKN5boost13intrusive_ptrINS_7TextureEEERKNS_9RectangleES9_f
 * Demangled: Caver::RenderingContext::DrawTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,Caver::Rectangle const&,float)
 *
 * Callers: 1
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000048C450  Caver::RenderingContext::DrawTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,Caver::Rectangle const&,float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203498 string=0x000000000020349C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::RenderingContext::DrawTexture()
{
  return _ZN5Caver16RenderingContext11DrawTextureERKN5boost13intrusive_ptrINS_7TextureEEERKNS_9RectangleES9_f();
}

