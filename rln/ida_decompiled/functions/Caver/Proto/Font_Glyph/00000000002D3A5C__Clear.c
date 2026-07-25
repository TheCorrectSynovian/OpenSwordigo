/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D3A5C
 * Mangled: _ZN5Caver5Proto10Font_Glyph5ClearEv
 * Demangled: Caver::Proto::Font_Glyph::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x00000000002D3A64 string=0x00000000002D3A68 "("
 *   insn=0x00000000002D3A68 string=0x00000000002D3A6C "\t@"
 *   insn=0x00000000002D3A70 string=0x00000000002D3A74 "(q@9h"
 *   insn=0x00000000002D3A74 string=0x00000000002D3A78 "h"
 *   insn=0x00000000002D3A78 string=0x00000000002D3A7C "?A"
 *   insn=0x00000000002D3A78 string=0x00000000002D3A84 "?"
 *   insn=0x00000000002D3A7C string=0x00000000002D3A80 "?"
 *   insn=0x00000000002D3A84 string=0x00000000002D3A88 "(@"
 *   insn=0x00000000002D3A8C string=0x00000000002D3A90 ""
 *   insn=0x00000000002D3A90 string=0x00000000002D3A94 ""
 *   insn=0x00000000002D3A98 string=0x00000000002D3A9C "\tq@9i"
 *   insn=0x00000000002D3A9C string=0x00000000002D3AA0 "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Font_Glyph::Clear(__int64 this)
{
  int v1; // w8
  __int64 v2; // x9
  __int64 v3; // x8

  LOBYTE(v1) = *(_BYTE *)(this + 40);
  if ( (_BYTE)v1 )
  {
    *(_DWORD *)(this + 12) = 0;
    if ( (v1 & 2) != 0 )
    {
      v2 = *(_QWORD *)(this + 16);
      if ( v2 )
      {
        if ( *(_BYTE *)(v2 + 28) )
        {
          *(_QWORD *)(v2 + 20) = 0;
          *(_QWORD *)(v2 + 12) = 0;
        }
        *(_DWORD *)(v2 + 28) = 0;
        v1 = *(_DWORD *)(this + 40);
      }
    }
    *(_DWORD *)(this + 24) = 0;
    if ( (v1 & 8) != 0 )
    {
      v3 = *(_QWORD *)(this + 32);
      if ( v3 )
      {
        if ( *(_BYTE *)(v3 + 28) )
        {
          *(_QWORD *)(v3 + 20) = 0;
          *(_QWORD *)(v3 + 12) = 0;
        }
        *(_DWORD *)(v3 + 28) = 0;
      }
    }
  }
  *(_DWORD *)(this + 40) = 0;
  return this;
}

