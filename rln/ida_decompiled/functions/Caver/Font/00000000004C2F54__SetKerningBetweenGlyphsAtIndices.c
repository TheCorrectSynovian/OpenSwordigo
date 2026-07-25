/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C2F54
 * Mangled: _ZN5Caver4Font32SetKerningBetweenGlyphsAtIndicesEiii
 * Demangled: Caver::Font::SetKerningBetweenGlyphsAtIndices(int,int,int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FBC40  .memset
 *
 * Referenced strings: 14
 *   insn=0x00000000004C2F7C string=0x00000000004C2F80 "V"
 *   insn=0x00000000004C2F84 string=0x00000000004C2F88 "("
 *   insn=0x00000000004C2F88 string=0x00000000004C2F8C "it"
 *   insn=0x00000000004C2F8C string=0x00000000004C2F98 ""
 *   insn=0x00000000004C2F98 string=0x00000000004C2F9C "i"
 *   insn=0x00000000004C2FA4 string=0x00000000004C2FE8 "(S"
 *   insn=0x00000000004C2FA8 string=0x00000000004C2FAC "("
 *   insn=0x00000000004C2FAC string=0x00000000004C2FB0 "it"
 *   insn=0x00000000004C2FB0 string=0x00000000004C2FBC ""
 *   insn=0x00000000004C2FBC string=0x00000000004C2FC0 "i"
 *   insn=0x00000000004C2FC4 string=0x00000000004C2FC8 "8"
 *   insn=0x00000000004C2FCC string=0x00000000004C2FD0 "h"
 *   insn=0x00000000004C2FD0 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004C2FE4 string=0x00000000001FBC40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Font::SetKerningBetweenGlyphsAtIndices(_QWORD *this, int a2, int a3, char a4)
{
  _QWORD *v4; // x23
  void *v5; // x22
  __int64 v9; // x25

  v4 = this;
  v5 = (void *)this[8];
  v9 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(this[3] - this[2]) >> 2);
  if ( !v5 )
  {
    v5 = (void *)operator new[]((unsigned int)(v9 * v9));
    v4[8] = v5;
    this = memset(v5, 0, (unsigned int)(v9 * v9));
  }
  *((_BYTE *)v5 + a3 + (int)v9 * a2) = a4;
  return this;
}

