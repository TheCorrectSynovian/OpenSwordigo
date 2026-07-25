/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F84C0
 * Mangled: ._ZN5Caver9SceneGrid18GetObjectsInBoundsERKNS_9RectangleEPPPv
 * Demangled: Caver::SceneGrid::GetObjectsInBounds(Caver::Rectangle const&,void ***)
 *
 * Callers: 3
 *   0x0000000000465968  Caver::Scene::Update(float)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000468CE0  Caver::Scene::LineSegmentIntersectsGround(Caver::LineSegment const&,float,float,Caver::Vector2 *)
 *
 * Callees: 1
 *   0x000000000046CC30  Caver::SceneGrid::GetObjectsInBounds(Caver::Rectangle const&,void ***)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F84C8 string=0x00000000001F84CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneGrid::GetObjectsInBounds(Caver::SceneGrid *this, const Caver::Rectangle *a2, void ***a3)
{
  return _ZN5Caver9SceneGrid18GetObjectsInBoundsERKNS_9RectangleEPPPv(this, a2, a3);
}

