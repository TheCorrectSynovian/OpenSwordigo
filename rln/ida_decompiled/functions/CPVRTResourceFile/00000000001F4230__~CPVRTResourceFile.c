/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4230
 * Mangled: ._ZN17CPVRTResourceFileD2Ev
 * Demangled: CPVRTResourceFile::~CPVRTResourceFile()
 *
 * Callers: 1
 *   0x000000000051960C  PVRTTextureLoadFromPVR(char const*,uint *,void const*,bool,uint)
 *
 * Callees: 1
 *   0x0000000000513CBC  CPVRTResourceFile::~CPVRTResourceFile()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4238 string=0x00000000001F423C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall CPVRTResourceFile::~CPVRTResourceFile(CPVRTResourceFile *this)
{
  _ZN17CPVRTResourceFileD2Ev(this);
}

