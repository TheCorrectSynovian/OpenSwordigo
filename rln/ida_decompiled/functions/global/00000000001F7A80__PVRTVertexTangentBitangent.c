/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7A80
 * Mangled: ._Z26PVRTVertexTangentBitangentP12PVRTVECTOR3fS0_PKS_PKfS4_S4_S4_S4_S4_
 * Demangled: PVRTVertexTangentBitangent(PVRTVECTOR3f *,PVRTVECTOR3f *,PVRTVECTOR3f const*,float const*,float const*,float const*,float const*,float const*,float const*)
 *
 * Callers: 1
 *   0x0000000000517E18  PVRTVertexGenerateTangentSpace(int *,char **,ushort *,int,char const*,int,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,float)
 *
 * Callees: 1
 *   0x0000000000517BE8  PVRTVertexTangentBitangent(PVRTVECTOR3f *,PVRTVECTOR3f *,PVRTVECTOR3f const*,float const*,float const*,float const*,float const*,float const*,float const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7A88 string=0x00000000001F7A8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTVertexTangentBitangent()
{
  return _Z26PVRTVertexTangentBitangentP12PVRTVECTOR3fS0_PKS_PKfS4_S4_S4_S4_S4_();
}

