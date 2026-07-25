/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF1F0
 * Mangled: .cosf
 * Demangled: .cosf
 *
 * Callers: 16
 *   0x0000000000293550  Caver::BatMonsterControllerComponent::Update(float)
 *   0x00000000002AA5B4  Caver::ParticleEmitterComponent::Prepare(void)
 *   0x0000000000454268  Caver::ParticleSystem::BuildVertexDataWithCamera(Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000004545B4  Caver::ParticleSystem::BuildVertexDataWithCamera(Caver::Vector3 const&,Caver::Vector3 const&,Caver::Matrix4 const&)
 *   0x000000000045491C  Caver::ParticleSystem::BuildVertexDataWithTransform(Caver::Matrix4 const&)
 *   0x00000000004AF338  Caver::Matrix4::RotationX(float)
 *   0x00000000004AF3A0  Caver::Matrix4::RotationY(float)
 *   0x00000000004AF414  Caver::Matrix4::RotationZ(float)
 *   0x00000000004B1270  Caver::Quaternion::RotationAxisAngle(float,Caver::Vector3 const&)
 *   0x00000000004B19F0  Caver::Rectangle::TransformedRectsIntersect(Caver::Rectangle const&,Caver::Vector2,float,float,Caver::Rectangle const&,Caver::Vector2,float,float)
 *   0x00000000004B24EC  Caver::RootsForCubicEquation(float,float,float,float,float *)
 *   0x00000000004B2870  Caver::Vector2::Rotate(float)
 *   0x00000000004B28E0  Caver::Vector2::RotatedAroundPoint(float,Caver::Vector2 const&)
 *   0x00000000004B2974  Caver::Vector2::Transformed(Caver::Vector2 const&,float,float)
 *   0x00000000004B2A24  Caver::Vector2::InverseTransformed(Caver::Vector2 const&,float,float)
 *   0x00000000004B2B60  Caver::Vector2::FromAngle(float)
 *
 * Callees: 1
 *   0x00000000006FEAD0  cosf
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF1F8 string=0x00000000001FF1FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
float cosf(float x)
{
  return cosf(x);
}

