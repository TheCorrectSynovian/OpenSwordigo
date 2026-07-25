/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9890
 * Mangled: ._ZN5Caver9SceneGrid10MoveObjectEPNS_14SceneGridEntryERKNS_9RectangleEf
 * Demangled: Caver::SceneGrid::MoveObject(Caver::SceneGridEntry *,Caver::Rectangle const&,float)
 *
 * Callers: 3
 *   0x000000000046584C  Caver::Scene::UpdateObjectWorldBounds(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x000000000046590C  Caver::Scene::UpdateCollisionShapeWorldBounds(Caver::CollisionShapeComponent *)
 *   0x0000000000465968  Caver::Scene::Update(float)
 *
 * Callees: 1
 *   0x000000000046CB84  Caver::SceneGrid::MoveObject(Caver::SceneGridEntry *,Caver::Rectangle const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9898 string=0x00000000001F989C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneGrid::MoveObject(
        Caver::SceneGrid *this,
        Caver::SceneGridEntry *a2,
        const Caver::Rectangle *a3,
        float a4)
{
  return _ZN5Caver9SceneGrid10MoveObjectEPNS_14SceneGridEntryERKNS_9RectangleEf(this, a2, a3, a4);
}

