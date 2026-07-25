/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD7E0
 * Mangled: ._ZNK17CPVRTResourceFile6IsOpenEv
 * Demangled: CPVRTResourceFile::IsOpen(void)
 *
 * Callers: 5
 *   0x0000000000502E70  CSourceStream::Init(char const*)
 *   0x0000000000502F0C  CSourceStream::Init(char const*,ulong)
 *   0x0000000000503314  CPVRTModelPOD::ReadFromFile(char const*,char *,ulong,char *,ulong)
 *   0x00000000005037C4  CPVRTModelPOD::ReadFromMemory(char const*,ulong,char *,ulong,char *,ulong)
 *   0x000000000051906C  PVRTTextureLoadFromPVRResourceFile(CPVRTResourceFile &,uint *,void const*,bool,uint,int *,int *)
 *
 * Callees: 1
 *   0x0000000000513D98  CPVRTResourceFile::IsOpen(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD7E8 string=0x00000000001FD7EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall CPVRTResourceFile::IsOpen(CPVRTResourceFile *this)
{
  return _ZNK17CPVRTResourceFile6IsOpenEv(this);
}

