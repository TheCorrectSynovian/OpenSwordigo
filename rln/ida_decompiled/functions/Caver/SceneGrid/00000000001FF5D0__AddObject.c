/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF5D0
 * Mangled: ._ZN5Caver9SceneGrid9AddObjectEPNS_14SceneGridEntryERKNS_9RectangleEf
 * Demangled: Caver::SceneGrid::AddObject(Caver::SceneGridEntry *,Caver::Rectangle const&,float)
 *
 * Callers: 3
 *   0x0000000000464574  Caver::Scene::AddObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x000000000046590C  Caver::Scene::UpdateCollisionShapeWorldBounds(Caver::CollisionShapeComponent *)
 *   0x0000000000465968  Caver::Scene::Update(float)
 *
 * Callees: 1
 *   0x000000000046CB40  Caver::SceneGrid::AddObject(Caver::SceneGridEntry *,Caver::Rectangle const&,float)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FF5D4 string=0x000000000046CB40 ""
 *   insn=0x00000000001FF5D8 string=0x00000000001FF5DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneGrid::AddObject(
        Caver::SceneGrid *this,
        Caver::SceneGridEntry *a2,
        const Caver::Rectangle *a3,
        float a4)
{
  return _ZN5Caver9SceneGrid9AddObjectEPNS_14SceneGridEntryERKNS_9RectangleEf(this, a2, a3, a4);
}

