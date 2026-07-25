/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE510
 * Mangled: ._Z23PVRTModelPODDataConvertR8CPODDataj13EPVRTDataType
 * Demangled: PVRTModelPODDataConvert(CPODData &,uint,EPVRTDataType)
 *
 * Callers: 1
 *   0x000000000050C820  PVRTModelPODScaleAndConvertVtxData(SPODMesh &,EPVRTDataType)
 *
 * Callees: 1
 *   0x000000000050C664  PVRTModelPODDataConvert(CPODData &,uint,EPVRTDataType)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE518 string=0x00000000001FE51C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTModelPODDataConvert()
{
  return _Z23PVRTModelPODDataConvertR8CPODDataj13EPVRTDataType();
}

