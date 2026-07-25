/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032BF24
 * Mangled: _ZN5Caver5Proto19WeaponGlowComponent5ClearEv
 * Demangled: Caver::Proto::WeaponGlowComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBAB0  Caver::Proto::FloatColor::Clear(void)
 *
 * Referenced strings: 7
 *   insn=0x000000000032BF30 string=0x000000000032BF34 "h"
 *   insn=0x000000000032BF40 string=0x000000000032BF44 "`\n@"
 *   insn=0x000000000032BF44 string=0x000000000032BF48 "`"
 *   insn=0x000000000032BF4C string=0x000000000032BF50 "h&@"
 *   insn=0x000000000032BF4C string=0x00000000001FBAB0 "0'"
 *   insn=0x000000000032BF54 string=0x000000000032BF58 "`"
 *   insn=0x000000000032BF58 string=0x000000000032BF5C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WeaponGlowComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 36);
  if ( (_BYTE)v2 )
  {
    *(_DWORD *)(this + 12) = 0;
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( this )
      {
        this = Caver::Proto::FloatColor::Clear((Caver::Proto::FloatColor *)this);
        v2 = *(_DWORD *)(v1 + 36);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( this )
        this = Caver::Proto::FloatColor::Clear((Caver::Proto::FloatColor *)this);
    }
    *(_DWORD *)(v1 + 32) = 0;
  }
  *(_DWORD *)(v1 + 36) = 0;
  return this;
}

