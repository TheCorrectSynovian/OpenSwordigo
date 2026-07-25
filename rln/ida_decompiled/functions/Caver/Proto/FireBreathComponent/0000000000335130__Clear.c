/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000335130
 * Mangled: _ZN5Caver5Proto19FireBreathComponent5ClearEv
 * Demangled: Caver::Proto::FireBreathComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBAB0  Caver::Proto::FloatColor::Clear(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000033513C string=0x0000000000335140 "h"
 *   insn=0x000000000033514C string=0x0000000000335150 "`"
 *   insn=0x0000000000335150 string=0x0000000000335154 "@"
 *   insn=0x0000000000335154 string=0x0000000000335158 "V"
 *   insn=0x0000000000335158 string=0x00000000001FBAB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FireBreathComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  char v2; // w8

  v1 = this;
  v2 = *(_BYTE *)(this + 32);
  if ( v2 )
  {
    *(_DWORD *)(this + 12) = 0;
    *(_DWORD *)(this + 16) = 0;
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(this + 24);
      if ( this )
        this = Caver::Proto::FloatColor::Clear((Caver::Proto::FloatColor *)this);
    }
  }
  *(_DWORD *)(v1 + 32) = 0;
  return this;
}

