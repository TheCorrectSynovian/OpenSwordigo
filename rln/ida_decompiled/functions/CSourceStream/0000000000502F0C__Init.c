/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000502F0C
 * Mangled: _ZN13CSourceStream4InitEPKcm
 * Demangled: CSourceStream::Init(char const*,ulong)
 *
 * Callers: 1
 *   0x0000000000502E70  CSourceStream::Init(char const*)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F80A0  CPVRTResourceFile::CPVRTResourceFile(char const*,ulong)
 *   0x00000000001FD7E0  CPVRTResourceFile::IsOpen(void)
 *   0x0000000000502FB0  CSourceStream::Read(void *,uint)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x0000000000502F1C string=0x0000000000502F20 "`"
 *   insn=0x0000000000502F30 string=0x0000000000502F34 ""
 *   insn=0x0000000000502F34 string=0x0000000000502F38 ""
 *   insn=0x0000000000502F44 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000502F50 string=0x0000000000502F54 "S"
 *   insn=0x0000000000502F54 string=0x00000000001F80A0 "0'"
 *   insn=0x0000000000502F58 string=0x0000000000502F5C "v"
 *   insn=0x0000000000502F5C string=0x0000000000502F60 " "
 *   insn=0x0000000000502F60 string=0x0000000000502F64 "`"
 *   insn=0x0000000000502F60 string=0x00000000001FD7E0 "0'"
 *   insn=0x0000000000502F64 string=0x0000000000502F70 "`"
 *   insn=0x0000000000502F68 string=0x0000000000502F6C ""
 *   insn=0x0000000000502F74 string=0x0000000000502F78 ""
 *   insn=0x0000000000502F78 string=0x0000000000502F7C ""
 *   insn=0x0000000000502FA4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000502FA8 string=0x0000000000502FAC "F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CSourceStream::Init(CSourceStream *this, const char *a2, unsigned __int64 a3)
{
  __int64 v4; // x0
  CPVRTResourceFile *v7; // x22
  __int64 result; // x0
  __int64 v9; // x0

  v4 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 2) = 0;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v7 = (CPVRTResourceFile *)operator new(0x20u);
  CPVRTResourceFile::CPVRTResourceFile(v7, a2, a3);
  *((_QWORD *)this + 1) = v7;
  if ( (CPVRTResourceFile::IsOpen(v7) & 1) != 0 )
    return 1;
  v9 = *((_QWORD *)this + 1);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  result = 0;
  *((_QWORD *)this + 1) = 0;
  return result;
}

