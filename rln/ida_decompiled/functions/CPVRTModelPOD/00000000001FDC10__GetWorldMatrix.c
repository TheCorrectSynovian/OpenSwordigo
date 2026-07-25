/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDC10
 * Mangled: ._ZNK13CPVRTModelPOD14GetWorldMatrixER11PVRTMATRIXfRK8SPODNode
 * Demangled: CPVRTModelPOD::GetWorldMatrix(PVRTMATRIXf &,SPODNode const&)
 *
 * Callers: 1
 *   0x000000000044E094  Caver::PODLoader::CreateModel(void)
 *
 * Callees: 1
 *   0x00000000005056A4  CPVRTModelPOD::GetWorldMatrix(PVRTMATRIXf &,SPODNode const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDC18 string=0x00000000001FDC1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 CPVRTModelPOD::GetWorldMatrix()
{
  return _ZNK13CPVRTModelPOD14GetWorldMatrixER11PVRTMATRIXfRK8SPODNode();
}

