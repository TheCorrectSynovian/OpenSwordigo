/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F79F0
 * Mangled: ._ZN13CPVRTModelPOD8InitImplEv
 * Demangled: CPVRTModelPOD::InitImpl(void)
 *
 * Callers: 4
 *   0x0000000000503314  CPVRTModelPOD::ReadFromFile(char const*,char *,ulong,char *,ulong)
 *   0x00000000005037C4  CPVRTModelPOD::ReadFromMemory(char const*,ulong,char *,ulong,char *,ulong)
 *   0x0000000000504048  CPVRTModelPOD::CopyFromMemory(SPODScene const&)
 *   0x000000000050F2AC  PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD &,CPVRTModelPOD &)
 *
 * Callees: 1
 *   0x0000000000503F24  CPVRTModelPOD::InitImpl(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F79F8 string=0x00000000001F79FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall CPVRTModelPOD::InitImpl(CPVRTModelPOD *this)
{
  return _ZN13CPVRTModelPOD8InitImplEv(this);
}

