/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D04B4
 * Mangled: _ZNK5Caver5Proto7Polygon3NewEv
 * Demangled: Caver::Proto::Polygon::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 9
 *   insn=0x00000000002D04BC string=0x00000000002D04C0 "H"
 *   insn=0x00000000002D04C0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D04C4 string=0x00000000002D04C8 ""
 *   insn=0x00000000002D04C8 string=0x00000000002D04CC "\t"
 *   insn=0x00000000002D04D4 string=0x00000000002D04D8 "A"
 *   insn=0x00000000002D04D8 string=0x00000000002D04DC "\t|"
 *   insn=0x00000000002D04E0 string=0x00000000002D04E4 "\n "
 *   insn=0x00000000002D04E4 string=0x00000000002D04E8 ""
 *   insn=0x00000000002D04E8 string=0x00000000002D04EC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Polygon::New(Caver::Proto::Polygon *this)
{
  __int64 result; // x0

  result = operator new(0x50u);
  *(_QWORD *)(result + 16) = result + 40;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 32) = 4;
  *(_WORD *)(result + 72) = 256;
  *(_QWORD *)result = off_6C5C60;
  *(_DWORD *)(result + 76) = 0;
  return result;
}

