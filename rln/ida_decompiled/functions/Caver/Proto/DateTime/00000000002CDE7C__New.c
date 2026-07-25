/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CDE7C
 * Mangled: _ZNK5Caver5Proto8DateTime3NewEv
 * Demangled: Caver::Proto::DateTime::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x00000000002CDE88 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002CDE8C string=0x00000000002CDE90 "UF"
 *   insn=0x00000000002CDE9C string=0x00000000002CDEA0 "A"
 *   insn=0x00000000002CDEA0 string=0x00000000002CDEA4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DateTime::New(Caver::Proto::DateTime *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)result = off_6C5990;
  return result;
}

