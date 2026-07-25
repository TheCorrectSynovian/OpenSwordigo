/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7260
 * Mangled: ._ZNK17CPVRTResourceFile4SizeEv
 * Demangled: CPVRTResourceFile::Size(void)
 *
 * Callers: 2
 *   0x0000000000502FB0  CSourceStream::Read(void *,uint)
 *   0x0000000000503024  CSourceStream::Skip(uint)
 *
 * Callees: 1
 *   0x0000000000513DA8  CPVRTResourceFile::Size(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7268 string=0x00000000001F726C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall CPVRTResourceFile::Size(CPVRTResourceFile *this)
{
  return _ZNK17CPVRTResourceFile4SizeEv(this);
}

