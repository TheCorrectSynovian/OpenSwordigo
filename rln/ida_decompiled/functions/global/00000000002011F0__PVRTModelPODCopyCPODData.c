/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002011F0
 * Mangled: ._Z24PVRTModelPODCopyCPODDataRK8CPODDataRS_jb
 * Demangled: PVRTModelPODCopyCPODData(CPODData const&,CPODData&,uint,bool)
 *
 * Callers: 1
 *   0x0000000000504930  PVRTModelPODCopyMesh(SPODMesh const&,SPODMesh&)
 *
 * Callees: 1
 *   0x000000000050F1E0  PVRTModelPODCopyCPODData(CPODData const&,CPODData&,uint,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000002011F8 string=0x00000000002011FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall PVRTModelPODCopyCPODData(const CPODData *a1, CPODData *a2, unsigned int a3, bool a4)
{
  return _Z24PVRTModelPODCopyCPODDataRK8CPODDataRS_jb(a1, a2, a3, a4);
}

