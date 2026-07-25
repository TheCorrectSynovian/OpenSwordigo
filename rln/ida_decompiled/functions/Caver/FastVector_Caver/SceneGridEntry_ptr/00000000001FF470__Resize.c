/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF470
 * Mangled: ._ZN5Caver10FastVectorIPNS_14SceneGridEntryEE6ResizeEi
 * Demangled: Caver::FastVector<Caver::SceneGridEntry *>::Resize(int)
 *
 * Callers: 2
 *   0x000000000046E074  Caver::SceneGridLayer::GetEntriesInBounds(Caver::Rectangle const&,Caver::FastVector<Caver::SceneGridEntry *> *)
 *   0x000000000046E218  Caver::SceneGridLayer::GetAllEntries(Caver::FastVector<Caver::SceneGridEntry *> *)
 *
 * Callees: 1
 *   0x000000000046E85C  Caver::FastVector<Caver::SceneGridEntry *>::Resize(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF478 string=0x00000000001FF47C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FastVector<Caver::SceneGridEntry *>::Resize()
{
  return _ZN5Caver10FastVectorIPNS_14SceneGridEntryEE6ResizeEi();
}

