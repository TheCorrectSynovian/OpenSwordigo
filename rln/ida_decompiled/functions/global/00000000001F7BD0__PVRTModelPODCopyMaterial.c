/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7BD0
 * Mangled: ._Z24PVRTModelPODCopyMaterialRK12SPODMaterialRS_
 * Demangled: PVRTModelPODCopyMaterial(SPODMaterial const&,SPODMaterial&)
 *
 * Callers: 2
 *   0x0000000000504048  CPVRTModelPOD::CopyFromMemory(SPODScene const&)
 *   0x000000000050F2AC  PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD &,CPVRTModelPOD &)
 *
 * Callees: 1
 *   0x0000000000504EC8  PVRTModelPODCopyMaterial(SPODMaterial const&,SPODMaterial&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7BD8 string=0x00000000001F7BDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall PVRTModelPODCopyMaterial(void *a1, void *a2)
{
  return _Z24PVRTModelPODCopyMaterialRK12SPODMaterialRS_(a1, a2);
}

