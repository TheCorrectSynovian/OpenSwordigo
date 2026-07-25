/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE818
 * Mangled: _ZNK5Caver5Proto7Vector33NewEv
 * Demangled: Caver::Proto::Vector3::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x00000000002CE820 string=0x00000000002CE824 "o"
 *   insn=0x00000000002CE824 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002CE828 string=0x00000000002CE82C ""
 *   insn=0x00000000002CE834 string=0x00000000002CE838 "A"
 *   insn=0x00000000002CE838 string=0x00000000002CE83C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Vector3::New(Caver::Proto::Vector3 *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)result = off_6C5A80;
  return result;
}

