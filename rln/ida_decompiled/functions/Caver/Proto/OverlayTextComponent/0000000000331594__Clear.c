/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000331594
 * Mangled: _ZN5Caver5Proto20OverlayTextComponent5ClearEv
 * Demangled: Caver::Proto::OverlayTextComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F3B50  Caver::Proto::Vector2::Clear(void)
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 18
 *   insn=0x00000000003315A0 string=0x00000000003315A4 "h"
 *   insn=0x00000000003315A4 string=0x00000000003315A8 "H"
 *   insn=0x00000000003315B0 string=0x00000000003315B4 "`\n@"
 *   insn=0x00000000003315B4 string=0x00000000003315B8 ")\tG"
 *   insn=0x00000000003315C0 string=0x00000000003315C4 ""
 *   insn=0x00000000003315D4 string=0x00000000003315D8 "h2@"
 *   insn=0x00000000003315DC string=0x00000000003315E0 "`"
 *   insn=0x00000000003315E0 string=0x00000000003315E4 "`"
 *   insn=0x00000000003315E4 string=0x00000000003315E8 "Z\t"
 *   insn=0x00000000003315E8 string=0x00000000003315EC "h2@"
 *   insn=0x00000000003315E8 string=0x00000000001F3B50 "P'"
 *   insn=0x00000000003315F4 string=0x00000000003315F8 "`"
 *   insn=0x00000000003315F8 string=0x00000000003315FC ")"
 *   insn=0x0000000000331604 string=0x0000000000331608 ""
 *   insn=0x0000000000331618 string=0x000000000033161C "h2@"
 *   insn=0x0000000000331620 string=0x0000000000331624 "`"
 *   insn=0x0000000000331624 string=0x0000000000331628 "@"
 *   insn=0x0000000000331628 string=0x000000000033162C "I\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::OverlayTextComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 48);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 48) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::OverlayTextComponent::_default_text_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 48);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( this )
      {
        this = Caver::Proto::Vector2::Clear((Caver::Proto::Vector2 *)this);
        v2 = *(_DWORD *)(v1 + 48);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(v1 + 32);
      if ( (__int64 *)this != &Caver::Proto::OverlayTextComponent::_default_sprite_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 48);
      }
    }
    if ( (v2 & 8) != 0 )
    {
      this = *(_QWORD *)(v1 + 40);
      if ( this )
        this = Caver::Proto::Vector2::Clear((Caver::Proto::Vector2 *)this);
    }
  }
  *(_DWORD *)(v1 + 48) = 0;
  return this;
}

