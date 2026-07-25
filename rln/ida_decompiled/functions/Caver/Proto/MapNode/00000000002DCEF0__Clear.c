/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DCEF0
 * Mangled: _ZN5Caver5Proto7MapNode5ClearEv
 * Demangled: Caver::Proto::MapNode::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F3B50  Caver::Proto::Vector2::Clear(void)
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 30
 *   insn=0x00000000002DCEFC string=0x00000000002DCF00 "h"
 *   insn=0x00000000002DCF0C string=0x00000000002DCF10 "`\n@"
 *   insn=0x00000000002DCF10 string=0x00000000002DCF14 "`"
 *   insn=0x00000000002DCF18 string=0x00000000002DCF1C "h"
 *   insn=0x00000000002DCF18 string=0x00000000001F3B50 "P'"
 *   insn=0x00000000002DCF20 string=0x00000000002DCF24 "I "
 *   insn=0x00000000002DCF24 string=0x00000000002DCF28 "`"
 *   insn=0x00000000002DCF28 string=0x00000000002DCF2C ")=D"
 *   insn=0x00000000002DCF34 string=0x00000000002DCF38 ""
 *   insn=0x00000000002DCF44 string=0x00000000002DCF48 "\/\n"
 *   insn=0x00000000002DCF48 string=0x00000000002DCF4C "h"
 *   insn=0x00000000002DCF50 string=0x00000000002DCF54 "I "
 *   insn=0x00000000002DCF54 string=0x00000000002DCF58 "`"
 *   insn=0x00000000002DCF58 string=0x00000000002DCF5C ")"
 *   insn=0x00000000002DCF64 string=0x00000000002DCF68 ""
 *   insn=0x00000000002DCF74 string=0x00000000002DCF78 "P/\n"
 *   insn=0x00000000002DCF78 string=0x00000000002DCF7C "h"
 *   insn=0x00000000002DCF8C string=0x00000000002DCF90 "I "
 *   insn=0x00000000002DCF90 string=0x00000000002DCF94 "`:@"
 *   insn=0x00000000002DCF94 string=0x00000000002DCF98 ")"
 *   insn=0x00000000002DCFA0 string=0x00000000002DCFA4 ""
 *   insn=0x00000000002DCFB0 string=0x00000000002DCFB4 "A/\n"
 *   insn=0x00000000002DCFB4 string=0x00000000002DCFB8 "h"
 *   insn=0x00000000002DCFC0 string=0x00000000002DCFD0 "h2@"
 *   insn=0x00000000002DCFD4 string=0x00000000002DCFD8 "k"
 *   insn=0x00000000002DCFDC string=0x00000000002DCFE0 "h"
 *   insn=0x00000000002DCFE4 string=0x00000000002DCFE8 ""
 *   insn=0x00000000002DCFE8 string=0x00000000002DCFEC ""
 *   insn=0x00000000002DCFF0 string=0x00000000002DCFF4 "h2"
 *   insn=0x00000000002DCFFC string=0x00000000002DD000 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MapNode::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v3; // x20
  __int64 v4; // x0

  v1 = this;
  v2 = *(_DWORD *)(this + 132);
  if ( (_BYTE)v2 )
  {
    if ( (v2 & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( this )
      {
        this = Caver::Proto::Vector2::Clear((Caver::Proto::Vector2 *)this);
        v2 = *(_DWORD *)(v1 + 132);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( (__int64 *)this != &Caver::Proto::MapNode::_default_level_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 132);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(v1 + 32);
      if ( (__int64 *)this != &Caver::Proto::MapNode::_default_title_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 132);
      }
    }
    *(_DWORD *)(v1 + 96) = 0;
    *(_BYTE *)(v1 + 100) = 0;
    *(_DWORD *)(v1 + 104) = 0;
    if ( (v2 & 0x80) != 0 )
    {
      this = *(_QWORD *)(v1 + 112);
      if ( (__int64 *)this != &Caver::Proto::MapNode::_default_music_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 132);
      }
    }
  }
  if ( (v2 & 0xFF00) != 0 )
  {
    *(_BYTE *)(v1 + 120) = 0;
    *(_DWORD *)(v1 + 124) = 0;
    *(_BYTE *)(v1 + 128) = 0;
  }
  if ( *(int *)(v1 + 48) >= 1 )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v1 + 40) + 8 * v3);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
      ++v3;
    }
    while ( v3 < *(int *)(v1 + 48) );
  }
  *(_DWORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 132) = 0;
  return this;
}

