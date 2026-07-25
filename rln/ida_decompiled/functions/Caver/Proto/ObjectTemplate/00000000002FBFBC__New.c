/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FBFBC
 * Mangled: _ZNK5Caver5Proto14ObjectTemplate3NewEv
 * Demangled: Caver::Proto::ObjectTemplate::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FBFC8 string=0x00000000002FBFCC "H"
 *   insn=0x00000000002FBFC8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002FBFCC string=0x00000000002FBFD0 "AG"
 *   insn=0x00000000002FBFDC string=0x00000000002FBFE0 "A"
 *   insn=0x00000000002FBFE0 string=0x00000000002FBFE4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectTemplate::New(Caver::Proto::ObjectTemplate *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 1065353216;
  *(_QWORD *)result = off_6C7308;
  return result;
}

