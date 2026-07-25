/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEAA0
 * Mangled: ._Z15PVRTVertexWritePv13EPVRTDataTypeiPK12PVRTVECTOR4f
 * Demangled: PVRTVertexWrite(void *,EPVRTDataType,int,PVRTVECTOR4f const*)
 *
 * Callers: 6
 *   0x000000000050C664  PVRTModelPODDataConvert(CPODData &,uint,EPVRTDataType)
 *   0x000000000050C820  PVRTModelPODScaleAndConvertVtxData(SPODMesh &,EPVRTDataType)
 *   0x000000000050CA84  PVRTModelPODDataShred(CPODData &,uint,int const*)
 *   0x000000000050F2AC  PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD &,CPVRTModelPOD &)
 *   0x0000000000510314  TransformCPODData(CPODData &,CPODData &,int,PVRTMATRIXf *,float *,float *,int,bool)
 *   0x0000000000517E18  PVRTVertexGenerateTangentSpace(int *,char **,ushort *,int,char const*,int,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,float)
 *
 * Callees: 1
 *   0x000000000051732C  PVRTVertexWrite(void *,EPVRTDataType,int,PVRTVECTOR4f const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEAA8 string=0x00000000001FEAAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTVertexWrite()
{
  return _Z15PVRTVertexWritePv13EPVRTDataTypeiPK12PVRTVECTOR4f();
}

