/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE450
 * Mangled: ._ZN5Caver12MeshInstance20SkinWithBoneMatricesEPKNS_7Matrix4E
 * Demangled: Caver::MeshInstance::SkinWithBoneMatrices(Caver::Matrix4 const*)
 *
 * Callers: 1
 *   0x000000000044AE48  Caver::ModelInstance::SkinMeshes(Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000044909C  Caver::MeshInstance::SkinWithBoneMatrices(Caver::Matrix4 const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE458 string=0x00000000001FE45C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MeshInstance::SkinWithBoneMatrices(Caver::MeshInstance *this, const Caver::Matrix4 *a2)
{
  return _ZN5Caver12MeshInstance20SkinWithBoneMatricesEPKNS_7Matrix4E(this, a2);
}

