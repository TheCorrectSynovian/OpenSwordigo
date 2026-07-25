/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202F90
 * Mangled: ._Z19C_Matrix4Vector4MulPKfS0_Pf
 * Demangled: C_Matrix4Vector4Mul(float const*,float const*,float *)
 *
 * Callers: 19
 *   0x0000000000214C88  Caver::BoneControlledCollisionShapeComponent::Update(float)
 *   0x0000000000224388  Caver::ModelComponent::UpdateBounds(void)
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *   0x000000000025FEF8  Caver::CharControllerComponent::TargetPickupObjectPosition(void)
 *   0x00000000002A4644  Caver::OrbitControllerComponent::Update(float)
 *   0x00000000002AA5B4  Caver::ParticleEmitterComponent::Prepare(void)
 *   0x00000000002C5630  Caver::SwingableWeaponComponent::UpdateTransform(Caver::Matrix4 const&)
 *   0x0000000000451590  Caver::SkeletonInstance::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000452FC0  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *   0x00000000004545B4  Caver::ParticleSystem::BuildVertexDataWithCamera(Caver::Vector3 const&,Caver::Vector3 const&,Caver::Matrix4 const&)
 *   0x000000000045491C  Caver::ParticleSystem::BuildVertexDataWithTransform(Caver::Matrix4 const&)
 *   0x0000000000456AB8  Caver::Camera::NormalizedScreenPointFromWorldPosition(Caver::Vector3 const&,float *)
 *   0x0000000000456B74  Caver::Camera::ScreenPointFromWorldPosition(Caver::Vector3 const&,Caver::Rectangle const&,float *)
 *   0x0000000000456C64  Caver::Camera::WorldPositionFromNormalizedScreenPoint(Caver::Vector2,float)
 *   0x0000000000456D84  Caver::Camera::RayFromScreenPoint(Caver::Vector2 const&)
 *   0x0000000000456EF8  Caver::Camera::ScreenAABBFromWorldAABB(Caver::Rectangle const&,float,Caver::Rectangle const&)
 *   0x00000000004571BC  Caver::Camera::ForwardDirection(void)
 *   0x00000000004B21D0  Caver::Rectangle::Transform(Caver::Matrix4 const&)
 *   0x00000000004C7614  Caver::Sprite::AddTransformedRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Matrix4 const&,Caver::Color const&)
 *
 * Callees: 1
 *   0x00000000004AF95C  C_Matrix4Vector4Mul(float const*,float const*,float *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202F98 string=0x0000000000202F9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall C_Matrix4Vector4Mul(const float *a1, const float *a2, float *a3)
{
  return _Z19C_Matrix4Vector4MulPKfS0_Pf(a1, a2, a3);
}

