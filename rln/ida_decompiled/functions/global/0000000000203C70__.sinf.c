/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203C70
 * Mangled: .sinf
 * Demangled: .sinf
 *
 * Callers: 23
 *   0x0000000000293550  Caver::BatMonsterControllerComponent::Update(float)
 *   0x00000000002A4644  Caver::OrbitControllerComponent::Update(float)
 *   0x00000000002AA5B4  Caver::ParticleEmitterComponent::Prepare(void)
 *   0x00000000002B0CC8  Caver::SimpleGlowComponent::Update(float)
 *   0x00000000002B0DAC  `non-virtual thunk to'Caver::SimpleGlowComponent::Update(float)
 *   0x00000000002C2FF8  Caver::WaterMeshComponent::UpdateMesh(void)
 *   0x00000000003E06A0  Caver::OverlayButton::Update(float)
 *   0x000000000042A45C  Caver::MenuItemSlot::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x0000000000454268  Caver::ParticleSystem::BuildVertexDataWithCamera(Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000004545B4  Caver::ParticleSystem::BuildVertexDataWithCamera(Caver::Vector3 const&,Caver::Vector3 const&,Caver::Matrix4 const&)
 *   0x000000000045491C  Caver::ParticleSystem::BuildVertexDataWithTransform(Caver::Matrix4 const&)
 *   0x000000000045807C  Caver::CameraController::CameraController(void)
 *   0x00000000004AF338  Caver::Matrix4::RotationX(float)
 *   0x00000000004AF3A0  Caver::Matrix4::RotationY(float)
 *   0x00000000004AF414  Caver::Matrix4::RotationZ(float)
 *   0x00000000004B1270  Caver::Quaternion::RotationAxisAngle(float,Caver::Vector3 const&)
 *   0x00000000004B19F0  Caver::Rectangle::TransformedRectsIntersect(Caver::Rectangle const&,Caver::Vector2,float,float,Caver::Rectangle const&,Caver::Vector2,float,float)
 *   0x00000000004B2870  Caver::Vector2::Rotate(float)
 *   0x00000000004B28E0  Caver::Vector2::RotatedAroundPoint(float,Caver::Vector2 const&)
 *   0x00000000004B2974  Caver::Vector2::Transformed(Caver::Vector2 const&,float,float)
 *   0x00000000004B2A24  Caver::Vector2::InverseTransformed(Caver::Vector2 const&,float,float)
 *   0x00000000004B2B60  Caver::Vector2::FromAngle(float)
 *   0x00000000004D62E0  sub_4D62E0
 *
 * Callees: 1
 *   0x00000000006FECF8  sinf
 *
 * Referenced strings: 1
 *   insn=0x0000000000203C78 string=0x0000000000203C7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
float sinf(float x)
{
  return sinf(x);
}

