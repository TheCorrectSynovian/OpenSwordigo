/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000336660
 * Mangled: _ZN5Caver5Proto22MagicHookshotComponent5ClearEv
 * Demangled: Caver::Proto::MagicHookshotComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBAB0  Caver::Proto::FloatColor::Clear(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000033666C string=0x0000000000336670 "h"
 *   insn=0x0000000000336680 string=0x0000000000336684 "`"
 *   insn=0x0000000000336684 string=0x0000000000336688 "@"
 *   insn=0x0000000000336688 string=0x000000000033668C "\t"
 *   insn=0x000000000033668C string=0x00000000001FBAB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicHookshotComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  char v2; // w8

  v1 = this;
  v2 = *(_BYTE *)(this + 40);
  if ( v2 )
  {
    *(_QWORD *)(this + 20) = 0;
    *(_QWORD *)(this + 12) = 0;
    if ( (v2 & 0x10) != 0 )
    {
      this = *(_QWORD *)(this + 32);
      if ( this )
        this = Caver::Proto::FloatColor::Clear((Caver::Proto::FloatColor *)this);
    }
  }
  *(_DWORD *)(v1 + 40) = 0;
  return this;
}

