/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002019D0
 * Mangled: ._ZN5Caver7MapView22AddPathSegmentToSpriteEPNS_6SpriteERKNS_7Vector2ES5_fRKN5boost13intrusive_ptrINS_7TextureEEENS_5ColorE
 * Demangled: Caver::MapView::AddPathSegmentToSprite(Caver::Sprite *,Caver::Vector2 const&,Caver::Vector2 const&,float,boost::intrusive_ptr<Caver::Texture> const&,Caver::Color)
 *
 * Callers: 2
 *   0x000000000042647C  Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x000000000042784C  Caver::MapView::AddPathSprite(Caver::MapViewNode *,Caver::MapViewNode *)
 *
 * Callees: 1
 *   0x000000000042647C  Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002019D8 string=0x00000000002019DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::MapView::AddPathSegmentToSprite()
{
  JUMPOUT(0x427680);
}

