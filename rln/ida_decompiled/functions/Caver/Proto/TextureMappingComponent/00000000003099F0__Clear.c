/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003099F0
 * Mangled: _ZN5Caver5Proto23TextureMappingComponent5ClearEv
 * Demangled: Caver::Proto::TextureMappingComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F3B50  Caver::Proto::Vector2::Clear(void)
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 10
 *   insn=0x00000000003099FC string=0x0000000000309A00 "h"
 *   insn=0x0000000000309A00 string=0x0000000000309A04 "H"
 *   insn=0x0000000000309A0C string=0x0000000000309A10 "`\n@"
 *   insn=0x0000000000309A10 string=0x0000000000309A14 ")-F"
 *   insn=0x0000000000309A1C string=0x0000000000309A20 ""
 *   insn=0x0000000000309A30 string=0x0000000000309A34 "h*@"
 *   insn=0x0000000000309A3C string=0x0000000000309A40 "`"
 *   insn=0x0000000000309A40 string=0x0000000000309A44 "@"
 *   insn=0x0000000000309A44 string=0x0000000000309A48 "B"
 *   insn=0x0000000000309A48 string=0x00000000001F3B50 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::TextureMappingComponent::Clear(__int64 this)
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
      if ( (__int64 *)this != &Caver::Proto::TextureMappingComponent::_default_texture_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 40);
      }
    }
    *(_DWORD *)(v1 + 24) = 0;
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(v1 + 32);
      if ( this )
        this = Caver::Proto::Vector2::Clear((Caver::Proto::Vector2 *)this);
    }
  }
  *(_DWORD *)(v1 + 40) = 0;
  return this;
}

