/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003336C0
 * Mangled: _ZN5Caver5Proto23MagicExplosionComponent5ClearEv
 * Demangled: Caver::Proto::MagicExplosionComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBAB0  Caver::Proto::FloatColor::Clear(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000003336CC string=0x00000000003336D0 "h"
 *   insn=0x00000000003336D0 string=0x00000000003336D4 ""
 *   insn=0x00000000003336DC string=0x00000000003336E0 "`\n@"
 *   insn=0x00000000003336E0 string=0x00000000003336E4 "@"
 *   insn=0x00000000003336E8 string=0x00000000001FBAB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicExplosionComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  char v2; // w8

  v1 = this;
  v2 = *(_BYTE *)(this + 36);
  if ( v2 )
  {
    *(_DWORD *)(this + 12) = 0;
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( this )
        this = Caver::Proto::FloatColor::Clear((Caver::Proto::FloatColor *)this);
    }
    *(_QWORD *)(v1 + 24) = 0;
    *(_DWORD *)(v1 + 32) = 0;
  }
  *(_DWORD *)(v1 + 36) = 0;
  return this;
}

