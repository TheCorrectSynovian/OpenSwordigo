/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3540
 * Mangled: ._Z24PVRTMatrixVec3NormalizeFR12PVRTVECTOR3fRKS_
 * Demangled: PVRTMatrixVec3NormalizeF(PVRTVECTOR3f &,PVRTVECTOR3f const&)
 *
 * Callers: 2
 *   0x0000000000517BE8  PVRTVertexTangentBitangent(PVRTVECTOR3f *,PVRTVECTOR3f *,PVRTVECTOR3f const*,float const*,float const*,float const*,float const*,float const*,float const*)
 *   0x0000000000517E18  PVRTVertexGenerateTangentSpace(int *,char **,ushort *,int,char const*,int,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,float)
 *
 * Callees: 1
 *   0x000000000051B81C  PVRTMatrixVec3NormalizeF(PVRTVECTOR3f &,PVRTVECTOR3f const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3548 string=0x00000000001F354C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTMatrixVec3NormalizeF()
{
  return _Z24PVRTMatrixVec3NormalizeFR12PVRTVECTOR3fRKS_();
}

