/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC0A0
 * Mangled: ._ZNK5Caver23CollisionShapeComponent11WorldMatrixEf
 * Demangled: Caver::CollisionShapeComponent::WorldMatrix(float)
 *
 * Callers: 1
 *   0x000000000021B6C4  Caver::CollisionShapeComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000021AE00  Caver::CollisionShapeComponent::SetDefaultShapeOfType(Caver::Shape::Type)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC0A8 string=0x00000000001FC0AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CollisionShapeComponent::WorldMatrix(Caver::CollisionShapeComponent *this, float a2)
{
  JUMPOUT(0x21B5CC);
}

