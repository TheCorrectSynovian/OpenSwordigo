/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC440
 * Mangled: ._ZN5Caver7Vector26RotateEf
 * Demangled: Caver::Vector2::Rotate(float)
 *
 * Callers: 19
 *   0x0000000000216ED0  std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair const,bool>,std::_Select1st<std::pair<Caver::CollisionPair const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair const,bool>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<Caver::CollisionPair const,bool>>)
 *   0x0000000000222F98  Caver::LightComponent::Enable(Caver::RenderingContext *,int)
 *   0x0000000000272D10  Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000473B08  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x0000000000473C50  Caver::SceneObject::LocalPointFromWorldPoint(Caver::Vector2 const&)
 *   0x0000000000473CE8  Caver::SceneObject::ContainsPoint(Caver::Vector2 const&)
 *   0x0000000000473D84  Caver::SceneObject::WorldDirectionFromLocalDirection(Caver::Vector2 const&)
 *   0x0000000000473DA4  Caver::SceneObject::LocalDirectionFromWorldDirection(Caver::Vector2 const&)
 *   0x0000000000473DF0  Caver::SceneObject::VelocityAtWorldPoint(Caver::Vector2 const&)
 *   0x00000000004AC394  Caver::RectangleIntersectsConvexPolygon(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *   0x00000000004AC5A0  Caver::RectangleIntersectsPolygon(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *,Caver::Vector2 const&)
 *   0x00000000004ACC90  Caver::CircleIntersectsPolygon(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *   0x00000000004AD158  Caver::CircleIntersectsRectangle(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *   0x00000000004AD4F8  Caver::LineSegmentIntersectsPolygon(Caver::LineSegment const&,Caver::Polygon const&,Caver::Vector2 const&,float,float,float *,Caver::Vector2*,Caver::Vector2*,int *)
 *   0x00000000004AFC30  Caver::OrientedRect::OBFromTransformedRectangle(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2 const&,float,float)
 *   0x00000000004B19F0  Caver::Rectangle::TransformedRectsIntersect(Caver::Rectangle const&,Caver::Vector2,float,float,Caver::Rectangle const&,Caver::Vector2,float,float)
 *   0x00000000004B1D98  Caver::Rectangle::Rotate(float)
 *
 * Callees: 1
 *   0x00000000004B2870  Caver::Vector2::Rotate(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC448 string=0x00000000001FC44C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Vector2::Rotate(Caver::Vector2 *this, float a2)
{
  return _ZN5Caver7Vector26RotateEf(this, a2);
}

