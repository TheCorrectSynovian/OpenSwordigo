/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F69F0
 * Mangled: ._ZN5Caver12MeshInstance4DrawEPNS_16RenderingContextE
 * Demangled: Caver::MeshInstance::Draw(Caver::RenderingContext *)
 *
 * Callers: 4
 *   0x00000000002B8988  Caver::GroundMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000002B8C20  Caver::GroundMeshComponent::DrawMesh(Caver::RenderingContext *,Caver::MeshInstance *)
 *   0x000000000044B14C  Caver::ModelInstance::Draw(Caver::RenderingContext *)
 *   0x0000000000451590  Caver::SkeletonInstance::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x0000000000449130  Caver::MeshInstance::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F69F8 string=0x00000000001F69FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MeshInstance::Draw(Caver::MeshInstance *this, Caver::RenderingContext *a2)
{
  return _ZN5Caver12MeshInstance4DrawEPNS_16RenderingContextE(this, a2);
}

