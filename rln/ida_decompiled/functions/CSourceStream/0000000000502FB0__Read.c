/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000502FB0
 * Mangled: _ZN13CSourceStream4ReadEPvj
 * Demangled: CSourceStream::Read(void *,uint)
 *
 * Callers: 1
 *   0x0000000000502F0C  CSourceStream::Init(char const*,ulong)
 *
 * Callees: 3
 *   0x00000000001F7260  CPVRTResourceFile::Size(void)
 *   0x00000000001FA5D0  CPVRTResourceFile::StringPtr(void)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 10
 *   insn=0x0000000000502FC0 string=0x0000000000502FC4 "`"
 *   insn=0x0000000000502FD4 string=0x00000000001F7260 "0'"
 *   insn=0x0000000000502FD8 string=0x0000000000502FDC "i"
 *   insn=0x0000000000502FDC string=0x0000000000502FE8 "`"
 *   insn=0x0000000000502FE8 string=0x0000000000502FEC "y"
 *   insn=0x0000000000502FEC string=0x0000000000502FF0 "h\n@"
 *   insn=0x0000000000502FEC string=0x00000000001FA5D0 "0'"
 *   insn=0x0000000000503000 string=0x0000000000503004 "h\n@"
 *   insn=0x0000000000503008 string=0x000000000050300C ""
 *   insn=0x000000000050300C string=0x0000000000503010 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CSourceStream::Read(CSourceStream *this, void *a2, unsigned int a3)
{
  size_t v4; // x21
  unsigned __int64 v6; // x22
  __int64 result; // x0
  __int64 v8; // x0

  v4 = a3;
  v6 = *((_QWORD *)this + 2) + a3;
  if ( v6 > CPVRTResourceFile::Size(*((CPVRTResourceFile **)this + 1)) )
    return 0;
  v8 = CPVRTResourceFile::StringPtr(*((CPVRTResourceFile **)this + 1));
  memcpy(a2, (const void *)(v8 + *((_QWORD *)this + 2)), v4);
  result = 1;
  *((_QWORD *)this + 2) += v4;
  return result;
}

