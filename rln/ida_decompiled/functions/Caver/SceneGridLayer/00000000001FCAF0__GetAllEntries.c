/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCAF0
 * Mangled: ._ZN5Caver14SceneGridLayer13GetAllEntriesEPNS_10FastVectorIPNS_14SceneGridEntryEEE
 * Demangled: Caver::SceneGridLayer::GetAllEntries(Caver::FastVector<Caver::SceneGridEntry *> *)
 *
 * Callers: 1
 *   0x000000000046C550  Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::~FastVector()
 *
 * Callees: 1
 *   0x000000000046E218  Caver::SceneGridLayer::GetAllEntries(Caver::FastVector<Caver::SceneGridEntry *> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCAF8 string=0x00000000001FCAFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SceneGridLayer::GetAllEntries()
{
  return _ZN5Caver14SceneGridLayer13GetAllEntriesEPNS_10FastVectorIPNS_14SceneGridEntryEEE();
}

