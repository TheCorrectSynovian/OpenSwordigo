/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000332C28
 * Mangled: _ZN5Caver5Proto18MagicBoltComponent5ClearEv
 * Demangled: Caver::Proto::MagicBoltComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBAB0  Caver::Proto::FloatColor::Clear(void)
 *
 * Referenced strings: 5
 *   insn=0x0000000000332C34 string=0x0000000000332C38 "h"
 *   insn=0x0000000000332C38 string=0x0000000000332C3C ""
 *   insn=0x0000000000332C48 string=0x0000000000332C4C "`"
 *   insn=0x0000000000332C4C string=0x0000000000332C50 "@"
 *   insn=0x0000000000332C54 string=0x00000000001FBAB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicBoltComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  char v2; // w8

  v1 = this;
  v2 = *(_BYTE *)(this + 36);
  if ( v2 )
  {
    *(_DWORD *)(this + 12) = 0;
    *(_QWORD *)(this + 16) = 0;
    if ( (v2 & 8) != 0 )
    {
      this = *(_QWORD *)(this + 24);
      if ( this )
        this = Caver::Proto::FloatColor::Clear((Caver::Proto::FloatColor *)this);
    }
    *(_DWORD *)(v1 + 32) = 0;
  }
  *(_DWORD *)(v1 + 36) = 0;
  return this;
}

