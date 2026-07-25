/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDBE0
 * Mangled: ._Z27PVRTMatrixVec3CrossProductFR12PVRTVECTOR3fRKS_S2_
 * Demangled: PVRTMatrixVec3CrossProductF(PVRTVECTOR3f &,PVRTVECTOR3f const&,PVRTVECTOR3f const&)
 *
 * Callers: 1
 *   0x0000000000517BE8  PVRTVertexTangentBitangent(PVRTVECTOR3f *,PVRTVECTOR3f *,PVRTVECTOR3f const*,float const*,float const*,float const*,float const*,float const*,float const*)
 *
 * Callees: 1
 *   0x000000000051B894  PVRTMatrixVec3CrossProductF(PVRTVECTOR3f &,PVRTVECTOR3f const&,PVRTVECTOR3f const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FDBE4 string=0x000000000051B894 " "
 *   insn=0x00000000001FDBE8 string=0x00000000001FDBEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTMatrixVec3CrossProductF()
{
  return _Z27PVRTMatrixVec3CrossProductFR12PVRTVECTOR3fRKS_S2_();
}

