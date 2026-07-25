/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDE90
 * Mangled: .glMaterialfv
 * Demangled: .glMaterialfv
 *
 * Callers: 3
 *   0x00000000002B8988  Caver::GroundMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000044B14C  Caver::ModelInstance::Draw(Caver::RenderingContext *)
 *   0x0000000000451590  Caver::SkeletonInstance::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000006FEA38  glMaterialfv
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDE98 string=0x00000000001FDE9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glMaterialfv()
{
  return glMaterialfv();
}

