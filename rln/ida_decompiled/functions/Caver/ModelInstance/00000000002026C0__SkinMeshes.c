/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002026C0
 * Mangled: ._ZN5Caver13ModelInstance10SkinMeshesERKNS_7Matrix4E
 * Demangled: Caver::ModelInstance::SkinMeshes(Caver::Matrix4 const&)
 *
 * Callers: 2
 *   0x0000000000224388  Caver::ModelComponent::UpdateBounds(void)
 *   0x0000000000225D00  Caver::ModelComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *
 * Callees: 1
 *   0x000000000044AE48  Caver::ModelInstance::SkinMeshes(Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002026C8 string=0x00000000002026CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ModelInstance::SkinMeshes(Caver::ModelInstance *this, const Caver::Matrix4 *a2)
{
  return _ZN5Caver13ModelInstance10SkinMeshesERKNS_7Matrix4E(this, a2);
}

