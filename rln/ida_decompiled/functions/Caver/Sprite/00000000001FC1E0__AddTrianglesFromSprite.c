/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC1E0
 * Mangled: ._ZN5Caver6Sprite22AddTrianglesFromSpriteEPS0_
 * Demangled: Caver::Sprite::AddTrianglesFromSprite(Caver::Sprite*)
 *
 * Callers: 1
 *   0x00000000003DE41C  Caver::ItemOverlay::UpdateSprites(void)
 *
 * Callees: 1
 *   0x00000000004C7F54  Caver::Sprite::AddTrianglesFromSprite(Caver::Sprite*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC1E8 string=0x00000000001FC1EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Sprite::AddTrianglesFromSprite(Caver::Sprite *this, Caver::Sprite *a2)
{
  return _ZN5Caver6Sprite22AddTrianglesFromSpriteEPS0_(this, a2);
}

