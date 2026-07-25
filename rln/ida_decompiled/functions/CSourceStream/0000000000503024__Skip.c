/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000503024
 * Mangled: _ZN13CSourceStream4SkipEj
 * Demangled: CSourceStream::Skip(uint)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7260  CPVRTResourceFile::Size(void)
 *
 * Referenced strings: 6
 *   insn=0x0000000000503034 string=0x0000000000503038 "`"
 *   insn=0x0000000000503044 string=0x00000000001F7260 "0'"
 *   insn=0x0000000000503048 string=0x000000000050304C "i"
 *   insn=0x000000000050304C string=0x0000000000503058 "h\n@"
 *   insn=0x000000000050305C string=0x0000000000503060 ""
 *   insn=0x0000000000503060 string=0x0000000000503064 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CSourceStream::Skip(CSourceStream *this, unsigned int a2)
{
  __int64 v3; // x20
  unsigned __int64 v4; // x21
  __int64 result; // x0

  v3 = a2;
  v4 = *((_QWORD *)this + 2) + a2;
  if ( v4 > CPVRTResourceFile::Size(*((CPVRTResourceFile **)this + 1)) )
    return 0;
  result = 1;
  *((_QWORD *)this + 2) += v3;
  return result;
}

