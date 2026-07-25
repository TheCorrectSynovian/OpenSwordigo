/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D174C
 * Mangled: _ZN5Caver5Proto18Texture_Subtexture5ClearEv
 * Demangled: Caver::Proto::Texture_Subtexture::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 11
 *   insn=0x00000000002D1758 string=0x00000000002D175C "h"
 *   insn=0x00000000002D1764 string=0x00000000002D1794 ""
 *   insn=0x00000000002D1768 string=0x00000000002D176C "`\n@"
 *   insn=0x00000000002D176C string=0x00000000002D1770 ")"
 *   insn=0x00000000002D1778 string=0x00000000002D177C ""
 *   insn=0x00000000002D1788 string=0x00000000002D178C "K]\n"
 *   insn=0x00000000002D178C string=0x00000000002D1790 "h&@"
 *   insn=0x00000000002D1794 string=0x00000000002D1798 "h"
 *   insn=0x00000000002D179C string=0x00000000002D17A0 "\tq@9i"
 *   insn=0x00000000002D17A0 string=0x00000000002D17A4 "i"
 *   insn=0x00000000002D17B4 string=0x00000000002D17B8 "h""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture_Subtexture::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v3; // x8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 36);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 36) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::Texture_Subtexture::_default_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 36);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      v3 = *(_QWORD *)(v1 + 24);
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
    *(_DWORD *)(v1 + 32) = 1065353216;
  }
  *(_DWORD *)(v1 + 36) = 0;
  return this;
}

