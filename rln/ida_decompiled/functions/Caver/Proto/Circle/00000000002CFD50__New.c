/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CFD50
 * Mangled: _ZNK5Caver5Proto6Circle3NewEv
 * Demangled: Caver::Proto::Circle::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x00000000002CFD58 string=0x00000000002CFD5C "!"
 *   insn=0x00000000002CFD5C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002CFD60 string=0x00000000002CFD64 ""
 *   insn=0x00000000002CFD6C string=0x00000000002CFD70 "A"
 *   insn=0x00000000002CFD70 string=0x00000000002CFD74 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Circle::New(Caver::Proto::Circle *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = off_6C5BE8;
  return result;
}

