/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5BB0
 * Mangled: ._ZN5Caver14SceneGridLayer18GetEntriesInBoundsERKNS_9RectangleEPNS_10FastVectorIPNS_14SceneGridEntryEEE
 * Demangled: Caver::SceneGridLayer::GetEntriesInBounds(Caver::Rectangle const&,Caver::FastVector<Caver::SceneGridEntry *> *)
 *
 * Callers: 2
 *   0x000000000046CC30  Caver::SceneGrid::GetObjectsInBounds(Caver::Rectangle const&,void ***)
 *   0x000000000046CE8C  Caver::SceneGrid::GetObjectsNearCamera(float,void ***)
 *
 * Callees: 1
 *   0x000000000046E074  Caver::SceneGridLayer::GetEntriesInBounds(Caver::Rectangle const&,Caver::FastVector<Caver::SceneGridEntry *> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5BB8 string=0x00000000001F5BBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneGridLayer::GetEntriesInBounds(Caver::SceneGridLayer *this, Caver::Rectangle *a2)
{
  return _ZN5Caver14SceneGridLayer18GetEntriesInBoundsERKNS_9RectangleEPNS_10FastVectorIPNS_14SceneGridEntryEEE(
           this,
           a2);
}

