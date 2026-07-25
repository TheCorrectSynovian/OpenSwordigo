/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000502E70
 * Mangled: _ZN13CSourceStream4InitEPKc
 * Demangled: CSourceStream::Init(char const*)
 *
 * Callers: 1
 *   0x0000000000502E18  CSourceStream::~CSourceStream()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8C70  CPVRTResourceFile::CPVRTResourceFile(char const*)
 *   0x00000000001FD7E0  CPVRTResourceFile::IsOpen(void)
 *   0x0000000000502F0C  CSourceStream::Init(char const*,ulong)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x0000000000502E80 string=0x0000000000502E84 "`"
 *   insn=0x0000000000502E90 string=0x0000000000502E94 ""
 *   insn=0x0000000000502E94 string=0x0000000000502E98 ""
 *   insn=0x0000000000502EA4 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000502EAC string=0x0000000000502EB0 "p"
 *   insn=0x0000000000502EB0 string=0x00000000001F8C70 "0'"
 *   insn=0x0000000000502EB4 string=0x0000000000502EB8 "u"
 *   insn=0x0000000000502EB8 string=0x0000000000502EBC "I"
 *   insn=0x0000000000502EBC string=0x0000000000502EC0 "`"
 *   insn=0x0000000000502EBC string=0x00000000001FD7E0 "0'"
 *   insn=0x0000000000502EC0 string=0x0000000000502ECC "`"
 *   insn=0x0000000000502EC4 string=0x0000000000502EC8 ""
 *   insn=0x0000000000502ED0 string=0x0000000000502ED4 ""
 *   insn=0x0000000000502ED4 string=0x0000000000502ED8 ""
 *   insn=0x0000000000502F00 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000502F04 string=0x0000000000502F08 "o"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CSourceStream::Init(CSourceStream *this, const char *a2)
{
  __int64 v3; // x0
  CPVRTResourceFile *v5; // x21
  __int64 result; // x0
  __int64 v7; // x0

  v3 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 2) = 0;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v5 = (CPVRTResourceFile *)operator new(0x20u);
  CPVRTResourceFile::CPVRTResourceFile(v5, a2);
  *((_QWORD *)this + 1) = v5;
  if ( (CPVRTResourceFile::IsOpen(v5) & 1) != 0 )
    return 1;
  v7 = *((_QWORD *)this + 1);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  result = 0;
  *((_QWORD *)this + 1) = 0;
  return result;
}

