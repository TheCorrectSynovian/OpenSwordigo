/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D3A24
 * Mangled: _ZNK5Caver5Proto10Font_Glyph3NewEv
 * Demangled: Caver::Proto::Font_Glyph::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x00000000002D3A30 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D3A34 string=0x00000000002D3A38 ""
 *   insn=0x00000000002D3A44 string=0x00000000002D3A48 "A"
 *   insn=0x00000000002D3A48 string=0x00000000002D3A4C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Font_Glyph::New(Caver::Proto::Font_Glyph *this)
{
  __int64 result; // x0

  result = operator new(0x30u);
  *(_QWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)result = off_6C5EB8;
  *(_DWORD *)(result + 24) = 0;
  return result;
}

