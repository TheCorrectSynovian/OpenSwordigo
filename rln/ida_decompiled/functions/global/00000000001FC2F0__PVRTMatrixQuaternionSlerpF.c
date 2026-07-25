/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC2F0
 * Mangled: ._Z26PVRTMatrixQuaternionSlerpFR15PVRTQUATERNIONfRKS_S2_f
 * Demangled: PVRTMatrixQuaternionSlerpF(PVRTQUATERNIONf &,PVRTQUATERNIONf const&,PVRTQUATERNIONf const&,float)
 *
 * Callers: 1
 *   0x000000000050529C  CPVRTModelPOD::GetRotationMatrix(PVRTMATRIXf &,SPODNode const&)
 *
 * Callees: 1
 *   0x000000000051359C  PVRTMatrixQuaternionSlerpF(PVRTQUATERNIONf &,PVRTQUATERNIONf const&,PVRTQUATERNIONf const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC2F8 string=0x00000000001FC2FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTMatrixQuaternionSlerpF()
{
  return _Z26PVRTMatrixQuaternionSlerpFR15PVRTQUATERNIONfRKS_S2_f();
}

