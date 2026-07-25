/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200F80
 * Mangled: ._ZN5Caver17GUIAnimatedSprite10SetTextureERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::GUIAnimatedSprite::SetTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 1
 *   0x00000000003F87EC  Caver::AttributePointsView::SetInitialPoints(int)
 *
 * Callees: 1
 *   0x00000000004A918C  Caver::GUIAnimatedSprite::SetTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200F88 string=0x0000000000200F8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIAnimatedSprite::SetTexture()
{
  return _ZN5Caver17GUIAnimatedSprite10SetTextureERKN5boost13intrusive_ptrINS_7TextureEEE();
}

