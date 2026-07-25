/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDC30
 * Mangled: ._ZN5Caver9Rectangle16FlipHorizontallyEv
 * Demangled: Caver::Rectangle::FlipHorizontally(void)
 *
 * Callers: 7
 *   0x0000000000216ED0  std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<Caver::CollisionPair const,bool>>)
 *   0x000000000021742C  Caver::CollisionShape::IntersectsWithLineSegment(Caver::LineSegment const&,Caver::Vector2 *,Caver::Vector2 *,int *)
 *   0x0000000000217554  Caver::CollisionShape::NearestPointInShape(Caver::Vector2 const&)
 *   0x000000000021B7BC  Caver::CollisionShapeComponent::UpdateWorldAABB(void)
 *   0x0000000000464574  Caver::Scene::AddObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x000000000046584C  Caver::Scene::UpdateObjectWorldBounds(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x0000000000465968  Caver::Scene::Update(float)
 *
 * Callees: 1
 *   0x00000000004B1F10  Caver::Rectangle::FlipHorizontally(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDC38 string=0x00000000001FDC3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::FlipHorizontally(Caver::Rectangle *this)
{
  return _ZN5Caver9Rectangle16FlipHorizontallyEv(this);
}

