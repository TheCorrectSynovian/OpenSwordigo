/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9310
 * Mangled: ._ZN5Caver7MapView15AddPathToSpriteEPNS_6SpriteERKN5boost10shared_ptrINS_7MapPathEEENS_5ColorERKNS3_13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 1
 *   0x0000000000424008  Caver::MapView::UpdateTargetPath(void)
 *
 * Callees: 1
 *   0x000000000042647C  Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9318 string=0x00000000001F931C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MapView::AddPathToSprite()
{
  return _ZN5Caver7MapView15AddPathToSpriteEPNS_6SpriteERKN5boost10shared_ptrINS_7MapPathEEENS_5ColorERKNS3_13intrusive_ptrINS_7TextureEEE();
}

