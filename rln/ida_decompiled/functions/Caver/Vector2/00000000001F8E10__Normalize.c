/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8E10
 * Mangled: ._ZN5Caver7Vector29NormalizeEv
 * Demangled: Caver::Vector2::Normalize(void)
 *
 * Callers: 31
 *   0x0000000000217554  Caver::CollisionShape::NearestPointInShape(Caver::Vector2 const&)
 *   0x000000000022C47C  Caver::OverlayTargetArrowComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x0000000000235A70  Caver::ShadowComponent::CreateShadowWithShapes(Caver::CollisionShapeComponent **,int,Caver::FastVector<Caver::ShadowVertex> *)
 *   0x0000000000238F7C  Caver::ShapeComponent::DrawShape(Caver::RenderingContext *,Caver::Shape const&,Caver::Matrix4 const&)
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *   0x000000000027F310  Caver::PhysicsObjectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000283338  Caver::HookshotTrailComponent::UpdateVertices(void)
 *   0x0000000000284B60  Caver::MagicBoltComponent::Update(float)
 *   0x0000000000288320  Caver::MagicExplosionComponent::HandleMessage(int,void *)
 *   0x0000000000289C5C  Caver::MagicHookshotComponent::FindGrabbableObject(void)
 *   0x000000000028A180  Caver::MagicHookshotComponent::CreateBlast(void)
 *   0x000000000028A9FC  Caver::MagicHookshotComponent::HandleMessage(int,void *)
 *   0x000000000028CD94  Caver::ProjectileControllerComponent::CreateBlast(void)
 *   0x0000000000293550  Caver::BatMonsterControllerComponent::Update(float)
 *   0x00000000002A4644  Caver::OrbitControllerComponent::Update(float)
 *   0x00000000002B4318  Caver::ElevatorControllerComponent::RegisterLibrary(void)
 *   0x00000000002B4574  Caver::ElevatorControllerComponent::ReturnToOriginalPosition(void)
 *   0x00000000002B4628  Caver::ElevatorControllerComponent::Update(float)
 *   0x00000000002B49D4  Caver::ElevatorControllerComponent::HandleMessage(int,void *)
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *   0x00000000002BB010  Caver::GroundMeshGenerator::GenerateSurfaceMeshWithRoundHat(float,float,float,float)
 *   0x00000000002C6690  Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *   0x000000000042647C  Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x000000000042784C  Caver::MapView::AddPathSprite(Caver::MapViewNode *,Caver::MapViewNode *)
 *   0x00000000004ABC08  Caver::BezierSegment::EvaluateTangent(float)
 *   0x00000000004AC394  Caver::RectangleIntersectsConvexPolygon(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *   0x00000000004AC5A0  Caver::RectangleIntersectsPolygon(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *,Caver::Vector2 const&)
 *   0x00000000004ACC90  Caver::CircleIntersectsPolygon(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *   0x00000000004AD4F8  Caver::LineSegmentIntersectsPolygon(Caver::LineSegment const&,Caver::Polygon const&,Caver::Vector2 const&,float,float,float *,Caver::Vector2*,Caver::Vector2*,int *)
 *   0x00000000004B05D8  Caver::Polygon::SplitEdgesToMaxLength(float)
 *   0x00000000004C7AA4  Caver::Sprite::AddLine(Caver::Vector2 const&,Caver::Vector2 const&,float,Caver::Rectangle const&,Caver::Color const&)
 *
 * Callees: 1
 *   0x00000000004B27B0  Caver::Vector2::Normalize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8E18 string=0x00000000001F8E1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Vector2::Normalize(Caver::Vector2 *this)
{
  return _ZN5Caver7Vector29NormalizeEv(this);
}

