/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD530
 * Mangled: .sqrtf
 * Demangled: .sqrtf
 *
 * Callers: 41
 *   0x0000000000235A70  Caver::ShadowComponent::CreateShadowWithShapes(Caver::CollisionShapeComponent **,int,Caver::FastVector<Caver::ShadowVertex> *)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x0000000000280348  Caver::PhysicsObjectState::UpdateObjectState(float)
 *   0x000000000028A180  Caver::MagicHookshotComponent::CreateBlast(void)
 *   0x00000000002A4644  Caver::OrbitControllerComponent::Update(float)
 *   0x00000000002AA5B4  Caver::ParticleEmitterComponent::Prepare(void)
 *   0x00000000002ADE28  Caver::PortalEffectComponent::CreateVertices(void)
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *   0x00000000002BA45C  Caver::GroundMeshGenerator::InsertRoundHatVertices(Caver::Vector2 const&,float,float,Caver::Vector3 const&,Caver::Vector3 const&,float)
 *   0x00000000002BAC60  Caver::GroundMeshGenerator::GeneratePlainSurfaceWithHatGaps(float)
 *   0x00000000002BB010  Caver::GroundMeshGenerator::GenerateSurfaceMeshWithRoundHat(float,float,float,float)
 *   0x000000000042647C  Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000427A3C  Caver::MapView::NearestNodeInDirection(Caver::MapViewNode *,Caver::Vector2 const&)
 *   0x000000000045A38C  Caver::LightOverlay::UpdateWithCamera(Caver::Camera *)
 *   0x00000000004ABA84  Caver::BezierSegment::ControlPolygonLength(void)
 *   0x00000000004ABB20  Caver::BezierSegment::ApproximatedLength(void)
 *   0x00000000004ABCD4  Caver::BezierSegment::MovePathLocation(float,int,float)
 *   0x00000000004AD158  Caver::CircleIntersectsRectangle(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *   0x00000000004AD3D8  Caver::CircleIntersectsCircle(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *   0x00000000004ADE64  Caver::LineSegment::IntersectsCircle(Caver::Circle const&,float *,float *)
 *   0x00000000004ADF7C  Caver::LineSegment::IntersectsCircle(Caver::Circle const&,Caver::Vector2 *,Caver::Vector2 *)
 *   0x00000000004AF474  Caver::Matrix4::LookAt(Caver::Vector3 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000004B05D8  Caver::Polygon::SplitEdgesToMaxLength(float)
 *   0x00000000004B112C  Caver::Quaternion::Length(void)
 *   0x00000000004B117C  Caver::Quaternion::Normalize(void)
 *   0x00000000004B12DC  Caver::Quaternion::FromRotationMatrix(Caver::Matrix4 const&)
 *   0x00000000004B14B4  Caver::Quaternion::Nlerp(Caver::Quaternion const&,Caver::Quaternion const&,float)
 *   0x00000000004B1680  Caver::Rectangle::DistanceFromPoint(Caver::Vector2 const&)
 *   0x00000000004B24EC  Caver::RootsForCubicEquation(float,float,float,float,float *)
 *   0x00000000004B27B0  Caver::Vector2::Normalize(void)
 *   0x00000000004B2BC0  Caver::Vector3::Normalize(void)
 *   0x00000000004B2CAC  Caver::Vector4::Normalize(void)
 *   0x00000000004D4A3C  Caver::Circle::IntersectsWithCircle(Caver::Circle const&)
 *   0x00000000004D5428  sub_4D5428
 *   0x00000000004D548C  sub_4D548C
 *   0x00000000005133BC  PVRTMatrixQuaternionRotationAxisF(PVRTQUATERNIONf &,PVRTVECTOR3f const&,float)
 *   0x0000000000513484  PVRTMatrixQuaternionNormalizeF(PVRTQUATERNIONf &)
 *   0x0000000000513500  PVRTMatrixQuaternionToAxisAngleF(PVRTQUATERNIONf const&,PVRTVECTOR3f &,float &)
 *   0x000000000051359C  PVRTMatrixQuaternionSlerpF(PVRTQUATERNIONf &,PVRTQUATERNIONf const&,PVRTQUATERNIONf const&,float)
 *   0x00000000005138BC  PVRTMatrixQuaternionMultiplyF(PVRTQUATERNIONf &,PVRTQUATERNIONf const&,PVRTQUATERNIONf const&)
 *   0x000000000051BF2C  PVRTMatrixVec3LengthF(PVRTVECTOR3f const&)
 *
 * Callees: 1
 *   0x00000000006FE9F8  sqrtf
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD538 string=0x00000000001FD53C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
float sqrtf(float x)
{
  return sqrtf(x);
}

