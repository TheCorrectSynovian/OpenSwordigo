/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC170
 * Mangled: ._ZN5Caver9Rectangle9TransformERKNS_7Vector2EfS3_
 * Demangled: Caver::Rectangle::Transform(Caver::Vector2 const&,float,Caver::Vector2 const&)
 *
 * Callers: 4
 *   0x000000000021B7BC  Caver::CollisionShapeComponent::UpdateWorldAABB(void)
 *   0x0000000000464574  Caver::Scene::AddObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x000000000046584C  Caver::Scene::UpdateObjectWorldBounds(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x0000000000465968  Caver::Scene::Update(float)
 *
 * Callees: 1
 *   0x00000000004B1FE0  Caver::Rectangle::Transform(Caver::Vector2 const&,float,Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC178 string=0x00000000001FC17C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::Transform(
        Caver::Rectangle *this,
        const Caver::Vector2 *a2,
        float a3,
        const Caver::Vector2 *a4)
{
  return _ZN5Caver9Rectangle9TransformERKNS_7Vector2EfS3_(this, a2, a3, a4);
}

