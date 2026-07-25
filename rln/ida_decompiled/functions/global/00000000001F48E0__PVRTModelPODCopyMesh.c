/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F48E0
 * Mangled: ._Z20PVRTModelPODCopyMeshRK8SPODMeshRS_
 * Demangled: PVRTModelPODCopyMesh(SPODMesh const&,SPODMesh&)
 *
 * Callers: 2
 *   0x0000000000504048  CPVRTModelPOD::CopyFromMemory(SPODScene const&)
 *   0x000000000050F2AC  PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD &,CPVRTModelPOD &)
 *
 * Callees: 1
 *   0x0000000000504930  PVRTModelPODCopyMesh(SPODMesh const&,SPODMesh&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F48E8 string=0x00000000001F48EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTModelPODCopyMesh()
{
  return _Z20PVRTModelPODCopyMeshRK8SPODMeshRS_();
}

