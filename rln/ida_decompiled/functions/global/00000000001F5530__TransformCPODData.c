/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5530
 * Mangled: ._Z17TransformCPODDataR8CPODDataS0_iP11PVRTMATRIXfPfS3_ib
 * Demangled: TransformCPODData(CPODData &,CPODData &,int,PVRTMATRIXf *,float *,float *,int,bool)
 *
 * Callers: 1
 *   0x000000000050F2AC  PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD &,CPVRTModelPOD &)
 *
 * Callees: 1
 *   0x0000000000510314  TransformCPODData(CPODData &,CPODData &,int,PVRTMATRIXf *,float *,float *,int,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5538 string=0x00000000001F553C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 TransformCPODData()
{
  return _Z17TransformCPODDataR8CPODDataS0_iP11PVRTMATRIXfPfS3_ib();
}

