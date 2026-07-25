/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBD50
 * Mangled: ._ZN5Caver21AddCappedRectToSpriteEPNS_6SpriteERKN5boost13intrusive_ptrINS_7TextureEEERKNS_9RectangleEf
 * Demangled: Caver::AddCappedRectToSprite(Caver::Sprite *,boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,float)
 *
 * Callers: 1
 *   0x000000000049CF4C  Caver::GUISlider::UpdateSprite(void)
 *
 * Callees: 1
 *   0x000000000049D1B8  Caver::AddCappedRectToSprite(Caver::Sprite *,boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBD58 string=0x00000000001FBD5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::AddCappedRectToSprite()
{
  return _ZN5Caver21AddCappedRectToSpriteEPNS_6SpriteERKN5boost13intrusive_ptrINS_7TextureEEERKNS_9RectangleEf();
}

