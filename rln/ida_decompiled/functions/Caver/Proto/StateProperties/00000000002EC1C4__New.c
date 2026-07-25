/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EC1C4
 * Mangled: _ZNK5Caver5Proto15StateProperties3NewEv
 * Demangled: Caver::Proto::StateProperties::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 7
 *   insn=0x00000000002EC1D0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002EC1D4 string=0x00000000002EC1D8 "IA"
 *   insn=0x00000000002EC1D8 string=0x00000000002EC1DC "\t"
 *   insn=0x00000000002EC1E0 string=0x00000000002EC1E4 "\t|"
 *   insn=0x00000000002EC1E4 string=0x00000000002EC1E8 "A"
 *   insn=0x00000000002EC1EC string=0x00000000002EC1F0 "\n "
 *   insn=0x00000000002EC1F0 string=0x00000000002EC1F4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::StateProperties::New(Caver::Proto::StateProperties *this)
{
  __int64 result; // x0

  result = operator new(0x50u);
  *(_QWORD *)(result + 16) = result + 40;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 32) = 4;
  *(_QWORD *)result = off_6C6E20;
  *(_DWORD *)(result + 72) = 0;
  return result;
}

