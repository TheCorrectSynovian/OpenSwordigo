/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD4D0
 * Mangled: ._ZN5Caver14SceneGridLayer9AddObjectEPNS_14SceneGridEntryERKNS_9RectangleE
 * Demangled: Caver::SceneGridLayer::AddObject(Caver::SceneGridEntry *,Caver::Rectangle const&)
 *
 * Callers: 3
 *   0x000000000046C550  Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::~FastVector()
 *   0x000000000046CB40  Caver::SceneGrid::AddObject(Caver::SceneGridEntry *,Caver::Rectangle const&,float)
 *   0x000000000046CB84  Caver::SceneGrid::MoveObject(Caver::SceneGridEntry *,Caver::Rectangle const&,float)
 *
 * Callees: 1
 *   0x000000000046DC70  Caver::SceneGridLayer::AddObject(Caver::SceneGridEntry *,Caver::Rectangle const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD4D8 string=0x00000000001FD4DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneGridLayer::AddObject(
        Caver::SceneGridLayer *this,
        Caver::SceneGridEntry *a2,
        const Caver::Rectangle *a3)
{
  return _ZN5Caver14SceneGridLayer9AddObjectEPNS_14SceneGridEntryERKNS_9RectangleE(this, a2, a3);
}

