/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F72D0
 * Mangled: ._ZN13CPVRTModelPOD7DestroyEv
 * Demangled: CPVRTModelPOD::Destroy(void)
 *
 * Callers: 5
 *   0x000000000044EEB8  Caver::PODLoader::CreateMesh(int)
 *   0x00000000005037C4  CPVRTModelPOD::ReadFromMemory(char const*,ulong,char *,ulong,char *,ulong)
 *   0x0000000000504048  CPVRTModelPOD::CopyFromMemory(SPODScene const&)
 *   0x0000000000505298  CPVRTModelPOD::~CPVRTModelPOD()
 *   0x000000000050F2AC  PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD &,CPVRTModelPOD &)
 *
 * Callees: 1
 *   0x0000000000503998  CPVRTModelPOD::Destroy(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F72D8 string=0x00000000001F72DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall CPVRTModelPOD::Destroy(CPVRTModelPOD *this)
{
  return _ZN13CPVRTModelPOD7DestroyEv(this);
}

