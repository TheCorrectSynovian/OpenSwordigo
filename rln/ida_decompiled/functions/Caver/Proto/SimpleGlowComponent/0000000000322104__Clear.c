/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000322104
 * Mangled: _ZN5Caver5Proto19SimpleGlowComponent5ClearEv
 * Demangled: Caver::Proto::SimpleGlowComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F3B50  Caver::Proto::Vector2::Clear(void)
 *   0x00000000001FBAB0  Caver::Proto::FloatColor::Clear(void)
 *
 * Referenced strings: 9
 *   insn=0x0000000000322110 string=0x0000000000322114 "h"
 *   insn=0x000000000032211C string=0x0000000000322120 "`\n@"
 *   insn=0x0000000000322120 string=0x0000000000322124 "`"
 *   insn=0x0000000000322124 string=0x0000000000322128 "bf"
 *   insn=0x0000000000322128 string=0x000000000032212C "h:@"
 *   insn=0x0000000000322128 string=0x00000000001FBAB0 "0'"
 *   insn=0x0000000000322138 string=0x000000000032213C "`"
 *   insn=0x000000000032213C string=0x0000000000322140 "@"
 *   insn=0x0000000000322144 string=0x00000000001F3B50 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SimpleGlowComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 56);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 56) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( this )
      {
        this = Caver::Proto::FloatColor::Clear((Caver::Proto::FloatColor *)this);
        v2 = *(_DWORD *)(v1 + 56);
      }
    }
    *(_QWORD *)(v1 + 24) = 0;
    *(_DWORD *)(v1 + 32) = 0;
    if ( (v2 & 0x10) != 0 )
    {
      this = *(_QWORD *)(v1 + 40);
      if ( this )
        this = Caver::Proto::Vector2::Clear((Caver::Proto::Vector2 *)this);
    }
    *(_QWORD *)(v1 + 48) = 0;
  }
  *(_DWORD *)(v1 + 56) = 0;
  return this;
}

