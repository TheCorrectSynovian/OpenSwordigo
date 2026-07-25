/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030DADC
 * Mangled: _ZN5Caver5Proto15HealthComponent5ClearEv
 * Demangled: Caver::Proto::HealthComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3B50  Caver::Proto::Vector2::Clear(void)
 *
 * Referenced strings: 4
 *   insn=0x000000000030DAE8 string=0x000000000030DAEC "h"
 *   insn=0x000000000030DAF8 string=0x000000000030DAFC "`"
 *   insn=0x000000000030DAFC string=0x000000000030DB00 "@"
 *   insn=0x000000000030DB04 string=0x00000000001F3B50 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::HealthComponent::Clear(__int64 this)
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
        this = Caver::Proto::Vector2::Clear((Caver::Proto::Vector2 *)this);
    }
  }
  *(_DWORD *)(v1 + 32) = 0;
  return this;
}

