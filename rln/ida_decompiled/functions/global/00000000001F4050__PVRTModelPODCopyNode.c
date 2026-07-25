/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4050
 * Mangled: ._Z20PVRTModelPODCopyNodeRK8SPODNodeRS_i
 * Demangled: PVRTModelPODCopyNode(SPODNode const&,SPODNode&,int)
 *
 * Callers: 2
 *   0x0000000000504048  CPVRTModelPOD::CopyFromMemory(SPODScene const&)
 *   0x000000000050F2AC  PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD &,CPVRTModelPOD &)
 *
 * Callees: 1
 *   0x00000000005043EC  PVRTModelPODCopyNode(SPODNode const&,SPODNode&,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4058 string=0x00000000001F405C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTModelPODCopyNode()
{
  return _Z20PVRTModelPODCopyNodeRK8SPODNodeRS_i();
}

