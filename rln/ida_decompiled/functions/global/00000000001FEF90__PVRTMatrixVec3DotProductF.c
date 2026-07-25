/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEF90
 * Mangled: ._Z25PVRTMatrixVec3DotProductFRK12PVRTVECTOR3fS1_
 * Demangled: PVRTMatrixVec3DotProductF(PVRTVECTOR3f const&,PVRTVECTOR3f const&)
 *
 * Callers: 2
 *   0x0000000000517BE8  PVRTVertexTangentBitangent(PVRTVECTOR3f *,PVRTVECTOR3f *,PVRTVECTOR3f const*,float const*,float const*,float const*,float const*,float const*,float const*)
 *   0x0000000000517E18  PVRTVertexGenerateTangentSpace(int *,char **,ushort *,int,char const*,int,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,float)
 *
 * Callees: 1
 *   0x000000000051BF04  PVRTMatrixVec3DotProductF(PVRTVECTOR3f const&,PVRTVECTOR3f const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEF98 string=0x00000000001FEF9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTMatrixVec3DotProductF()
{
  return _Z25PVRTMatrixVec3DotProductFRK12PVRTVECTOR3fS1_();
}

