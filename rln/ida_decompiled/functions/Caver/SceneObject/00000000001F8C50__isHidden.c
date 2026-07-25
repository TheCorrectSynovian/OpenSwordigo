/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8C50
 * Mangled: ._ZNK5Caver11SceneObject8isHiddenEv
 * Demangled: Caver::SceneObject::isHidden(void)
 *
 * Callers: 6
 *   0x0000000000235A70  Caver::ShadowComponent::CreateShadowWithShapes(Caver::CollisionShapeComponent **,int,Caver::FastVector<Caver::ShadowVertex> *)
 *   0x00000000002360FC  Caver::SceneObject::isHidden(void)
 *   0x0000000000465578  Caver::Scene::ActivateObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x0000000000465968  Caver::Scene::Update(float)
 *   0x0000000000468CE0  Caver::Scene::LineSegmentIntersectsGround(Caver::LineSegment const&,float,float,Caver::Vector2 *)
 *   0x0000000000476F04  sub_476F04
 *
 * Callees: 1
 *   0x00000000002360FC  Caver::SceneObject::isHidden(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8C58 string=0x00000000001F8C5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::isHidden(Caver::SceneObject *this)
{
  return _ZNK5Caver11SceneObject8isHiddenEv(this);
}

