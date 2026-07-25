/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7110
 * Mangled: ._Z29PVRTMatrixRotationQuaternionFR11PVRTMATRIXfRK15PVRTQUATERNIONf
 * Demangled: PVRTMatrixRotationQuaternionF(PVRTMATRIXf &,PVRTQUATERNIONf const&)
 *
 * Callers: 1
 *   0x000000000050529C  CPVRTModelPOD::GetRotationMatrix(PVRTMATRIXf &,SPODNode const&)
 *
 * Callees: 1
 *   0x0000000000513770  PVRTMatrixRotationQuaternionF(PVRTMATRIXf &,PVRTQUATERNIONf const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F7114 string=0x0000000000513770 "!"
 *   insn=0x00000000001F7118 string=0x00000000001F711C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTMatrixRotationQuaternionF()
{
  return _Z29PVRTMatrixRotationQuaternionFR11PVRTMATRIXfRK15PVRTQUATERNIONf();
}

