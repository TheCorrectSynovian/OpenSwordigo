/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D2194
 * Mangled: _ZN5Caver5ImageC2EiiNS_11PixelFormatE
 * Demangled: Caver::Image::Image(int,int,Caver::PixelFormat)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 12
 *   insn=0x00000000004D219C string=0x00000000004D21A0 "i"
 *   insn=0x00000000004D21A8 string=0x00000000004D21AC "?"
 *   insn=0x00000000004D21B8 string=0x00000000004D21BC "a"
 *   insn=0x00000000004D21BC string=0x00000000004D21C0 "c"
 *   insn=0x00000000004D21C4 string=0x00000000004D21C8 "("
 *   insn=0x00000000004D21C4 string=0x00000000004D21D4 "I|"
 *   insn=0x00000000004D21C8 string=0x00000000004D21D0 ""
 *   insn=0x00000000004D21D4 string=0x00000000004D21D8 ")}h&"
 *   insn=0x00000000004D21D8 string=0x00000000004D21DC "h&"
 *   insn=0x00000000004D21DC string=0x00000000004D21E0 "(}@"
 *   insn=0x00000000004D21EC string=0x00000000004D21F0 "`"
 *   insn=0x00000000004D21EC string=0x00000000001F8570 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Image::Image(__int64 a1, int a2, int a3, int a4)
{
  int v5; // w8
  int v6; // w9
  unsigned __int64 v7; // x0
  __int64 result; // x0

  v5 = 0;
  *(_BYTE *)a1 = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = a4;
  if ( (unsigned int)(a4 - 1) <= 7 )
    v5 = dword_598170[a4 - 1];
  v6 = a3 * a2 * v5;
  *(_DWORD *)(a1 + 16) = v5;
  *(_DWORD *)(a1 + 20) = v6;
  if ( v6 < 0LL )
    v7 = -1;
  else
    v7 = v6;
  result = operator new[](v7);
  *(_QWORD *)(a1 + 24) = result;
  return result;
}

