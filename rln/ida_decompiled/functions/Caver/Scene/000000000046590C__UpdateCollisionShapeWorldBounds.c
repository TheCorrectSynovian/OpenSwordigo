/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046590C
 * Mangled: _ZN5Caver5Scene31UpdateCollisionShapeWorldBoundsEPNS_23CollisionShapeComponentE
 * Demangled: Caver::Scene::UpdateCollisionShapeWorldBounds(Caver::CollisionShapeComponent *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F9890  Caver::SceneGrid::MoveObject(Caver::SceneGridEntry *,Caver::Rectangle const&,float)
 *   0x00000000001FA720  Caver::CollisionShapeComponent::UpdateWorldAABB(void)
 *   0x00000000001FF5D0  Caver::SceneGrid::AddObject(Caver::SceneGridEntry *,Caver::Rectangle const&,float)
 *
 * Referenced strings: 4
 *   insn=0x0000000000465928 string=0x000000000046592C "}S"
 *   insn=0x000000000046592C string=0x00000000001FA720 "0'"
 *   insn=0x0000000000465954 string=0x00000000001F9890 "0'"
 *   insn=0x0000000000465960 string=0x0000000000465964 "g"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Scene::UpdateCollisionShapeWorldBounds(
        Caver::Scene *this,
        Caver::CollisionShapeComponent *a2)
{
  const Caver::Rectangle *v4; // x19
  Caver::SceneGridEntry *v5; // x1
  Caver::SceneGrid *v6; // x0

  v4 = (Caver::CollisionShapeComponent *)((char *)a2 + 360);
  Caver::CollisionShapeComponent::UpdateWorldAABB(a2);
  v5 = (Caver::CollisionShapeComponent *)((char *)a2 + 400);
  v6 = (Caver::Scene *)((char *)this + 928);
  if ( *((_QWORD *)a2 + 50) )
    return Caver::SceneGrid::MoveObject(v6, v5, v4, 0.0);
  else
    return Caver::SceneGrid::AddObject(v6, v5, v4, 0.0);
}

