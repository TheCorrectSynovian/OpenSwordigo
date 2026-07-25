/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F80A0
 * Mangled: ._ZN17CPVRTResourceFileC2EPKcm
 * Demangled: CPVRTResourceFile::CPVRTResourceFile(char const*,ulong)
 *
 * Callers: 3
 *   0x0000000000502F0C  CSourceStream::Init(char const*,ulong)
 *   0x00000000005037C4  CPVRTModelPOD::ReadFromMemory(char const*,ulong,char *,ulong,char *,ulong)
 *   0x000000000051960C  PVRTTextureLoadFromPVR(char const*,uint *,void const*,bool,uint)
 *
 * Callees: 1
 *   0x0000000000513C9C  CPVRTResourceFile::CPVRTResourceFile(char const*,ulong)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F80A8 string=0x00000000001F80AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall CPVRTResourceFile::CPVRTResourceFile(CPVRTResourceFile *this, const char *a2, unsigned __int64 a3)
{
  _ZN17CPVRTResourceFileC2EPKcm(this, a2, a3);
}

