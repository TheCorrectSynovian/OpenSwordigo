/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8770
 * Mangled: ._ZNK5Caver14SceneGridLayer15GridRectForAABBERKNS_9RectangleE
 * Demangled: Caver::SceneGridLayer::GridRectForAABB(Caver::Rectangle const&)
 *
 * Callers: 3
 *   0x000000000046DC70  Caver::SceneGridLayer::AddObject(Caver::SceneGridEntry *,Caver::Rectangle const&)
 *   0x000000000046DE18  Caver::SceneGridLayer::MoveObject(Caver::SceneGridEntry *,Caver::Rectangle const&)
 *   0x000000000046E074  Caver::SceneGridLayer::GetEntriesInBounds(Caver::Rectangle const&,Caver::FastVector<Caver::SceneGridEntry *> *)
 *
 * Callees: 1
 *   0x000000000046DD30  Caver::SceneGridLayer::GridRectForAABB(Caver::Rectangle const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8778 string=0x00000000001F877C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneGridLayer::GridRectForAABB(Caver::SceneGridLayer *this, const Caver::Rectangle *a2)
{
  return _ZNK5Caver14SceneGridLayer15GridRectForAABBERKNS_9RectangleE(this, a2);
}

