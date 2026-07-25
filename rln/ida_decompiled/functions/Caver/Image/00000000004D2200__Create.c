/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D2200
 * Mangled: _ZN5Caver5Image6CreateEiiNS_11PixelFormatE
 * Demangled: Caver::Image::Create(int,int,Caver::PixelFormat)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 14
 *   insn=0x00000000004D2208 string=0x00000000004D220C "h"
 *   insn=0x00000000004D2214 string=0x00000000004D2218 "a"
 *   insn=0x00000000004D2218 string=0x00000000004D221C "c"
 *   insn=0x00000000004D2220 string=0x00000000004D2224 ")"
 *   insn=0x00000000004D2224 string=0x00000000004D222C "("
 *   insn=0x00000000004D2230 string=0x00000000004D2238 "I|"
 *   insn=0x00000000004D2238 string=0x00000000004D223C ")}h&"
 *   insn=0x00000000004D223C string=0x00000000004D2240 "h&"
 *   insn=0x00000000004D2240 string=0x00000000004D2244 "(}@"
 *   insn=0x00000000004D2250 string=0x00000000004D2254 "h"
 *   insn=0x00000000004D2250 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004D2254 string=0x00000000004D2258 "`"
 *   insn=0x00000000004D2268 string=0x00000000004D226C "="
 *   insn=0x00000000004D226C string=0x00000000001F4F60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Image::Create(__int64 a1, int a2, int a3, int a4)
{
  int v5; // w8
  int v6; // w9
  unsigned __int64 v7; // x0
  __int64 v8; // x0
  void *v9; // x8

  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = a4;
  if ( (unsigned int)(a4 - 1) > 7 )
    v5 = 0;
  else
    v5 = dword_598170[a4 - 1];
  v6 = a3 * a2 * v5;
  *(_DWORD *)(a1 + 16) = v5;
  *(_DWORD *)(a1 + 20) = v6;
  if ( v6 < 0LL )
    v7 = -1;
  else
    v7 = v6;
  v8 = operator new[](v7);
  v9 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v8;
  if ( v9 )
    operator delete[](v9);
}

