/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9340
 * Mangled: ._Z14PVRTVertexReadP12PVRTVECTOR4fPKv13EPVRTDataTypei
 * Demangled: PVRTVertexRead(PVRTVECTOR4f *,void const*,EPVRTDataType,int)
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
 *   0x0000000000516E34  PVRTVertexRead(PVRTVECTOR4f *,void const*,EPVRTDataType,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F9344 string=0x0000000000516E34 "h"
 *   insn=0x00000000001F9348 string=0x00000000001F934C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTVertexRead()
{
  return _Z14PVRTVertexReadP12PVRTVECTOR4fPKv13EPVRTDataTypei();
}

