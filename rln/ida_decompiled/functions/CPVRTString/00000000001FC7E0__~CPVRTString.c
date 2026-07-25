/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC7E0
 * Mangled: ._ZN11CPVRTStringD2Ev
 * Demangled: CPVRTString::~CPVRTString()
 *
 * Callers: 1
 *   0x0000000000513A00  CPVRTResourceFile::CPVRTResourceFile(char const*)
 *
 * Callees: 1
 *   0x00000000005144C8  CPVRTString::~CPVRTString()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC7E8 string=0x00000000001FC7EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall CPVRTString::~CPVRTString(CPVRTString *this)
{
  _ZN11CPVRTStringD2Ev(this);
}

