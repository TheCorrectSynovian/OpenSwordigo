/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8C70
 * Mangled: ._ZN17CPVRTResourceFileC2EPKc
 * Demangled: CPVRTResourceFile::CPVRTResourceFile(char const*)
 *
 * Callers: 3
 *   0x0000000000502E70  CSourceStream::Init(char const*)
 *   0x0000000000503314  CPVRTModelPOD::ReadFromFile(char const*,char *,ulong,char *,ulong)
 *   0x000000000051960C  PVRTTextureLoadFromPVR(char const*,uint *,void const*,bool,uint)
 *
 * Callees: 1
 *   0x0000000000513A00  CPVRTResourceFile::CPVRTResourceFile(char const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8C78 string=0x00000000001F8C7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall CPVRTResourceFile::CPVRTResourceFile(CPVRTResourceFile *this, const char *a2)
{
  _ZN17CPVRTResourceFileC2EPKc(this, a2);
}

