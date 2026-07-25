/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030AF34
 * Mangled: _ZN5Caver5Proto14ShapeComponent5ClearEv
 * Demangled: Caver::Proto::ShapeComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F56A0  Caver::Proto::Polygon::Clear(void)
 *   0x00000000001FC540  Caver::Proto::Circle::Clear(void)
 *   0x00000000001FCDE0  Caver::Proto::Rectangle::Clear(void)
 *
 * Referenced strings: 13
 *   insn=0x000000000030AF40 string=0x000000000030AF44 "h"
 *   insn=0x000000000030AF4C string=0x000000000030AF50 "`\n@"
 *   insn=0x000000000030AF50 string=0x000000000030AF54 "`"
 *   insn=0x000000000030AF58 string=0x000000000030AF5C "h*@"
 *   insn=0x000000000030AF58 string=0x00000000001FCDE0 "0'"
 *   insn=0x000000000030AF60 string=0x000000000030AF64 "`"
 *   insn=0x000000000030AF64 string=0x000000000030AF68 "`"
 *   insn=0x000000000030AF68 string=0x000000000030AF6C "u"
 *   insn=0x000000000030AF6C string=0x000000000030AF70 "h*@"
 *   insn=0x000000000030AF6C string=0x00000000001FC540 "0'"
 *   insn=0x000000000030AF74 string=0x000000000030AF78 "`"
 *   insn=0x000000000030AF78 string=0x000000000030AF7C "@"
 *   insn=0x000000000030AF80 string=0x00000000001F56A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShapeComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 40);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 40) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( this )
      {
        this = Caver::Proto::Rectangle::Clear((Caver::Proto::Rectangle *)this);
        v2 = *(_DWORD *)(v1 + 40);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( this )
      {
        this = Caver::Proto::Circle::Clear((Caver::Proto::Circle *)this);
        v2 = *(_DWORD *)(v1 + 40);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(v1 + 32);
      if ( this )
        this = Caver::Proto::Polygon::Clear((Caver::Proto::Polygon *)this);
    }
  }
  *(_DWORD *)(v1 + 40) = 0;
  return this;
}

