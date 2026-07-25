/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB780
 * Mangled: ._ZN5Caver18WaterMeshComponent10UpdateMeshEv
 * Demangled: Caver::WaterMeshComponent::UpdateMesh(void)
 *
 * Callers: 1
 *   0x00000000002C2DF4  Caver::WaterMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000002C2FF8  Caver::WaterMeshComponent::UpdateMesh(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB788 string=0x00000000001FB78C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WaterMeshComponent::UpdateMesh(Caver::WaterMeshComponent *this)
{
  return _ZN5Caver18WaterMeshComponent10UpdateMeshEv(this);
}

