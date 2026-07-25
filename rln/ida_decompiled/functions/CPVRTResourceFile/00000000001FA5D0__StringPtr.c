/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA5D0
 * Mangled: ._ZNK17CPVRTResourceFile9StringPtrEv
 * Demangled: CPVRTResourceFile::StringPtr(void)
 *
 * Callers: 1
 *   0x0000000000502FB0  CSourceStream::Read(void *,uint)
 *
 * Callees: 1
 *   0x0000000000513DB8  CPVRTResourceFile::StringPtr(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA5D8 string=0x00000000001FA5DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall CPVRTResourceFile::StringPtr(CPVRTResourceFile *this)
{
  return _ZNK17CPVRTResourceFile9StringPtrEv(this);
}

