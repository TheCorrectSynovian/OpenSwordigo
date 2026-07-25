/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F64C0
 * Mangled: ._ZN5Caver7MapView13AddPathSpriteEPNS_11MapViewNodeES2_
 * Demangled: Caver::MapView::AddPathSprite(Caver::MapViewNode *,Caver::MapViewNode *)
 *
 * Callers: 1
 *   0x0000000000424D10  Caver::MapView::UpdateNodesSprite(void)
 *
 * Callees: 1
 *   0x000000000042784C  Caver::MapView::AddPathSprite(Caver::MapViewNode *,Caver::MapViewNode *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F64C8 string=0x00000000001F64CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapView::AddPathSprite(Caver::MapView *this, Caver::MapViewNode *a2, Caver::MapViewNode *a3)
{
  return _ZN5Caver7MapView13AddPathSpriteEPNS_11MapViewNodeES2_(this, a2, a3);
}

