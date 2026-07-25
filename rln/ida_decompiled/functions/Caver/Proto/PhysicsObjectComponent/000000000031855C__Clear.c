/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031855C
 * Mangled: _ZN5Caver5Proto22PhysicsObjectComponent5ClearEv
 * Demangled: Caver::Proto::PhysicsObjectComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3B50  Caver::Proto::Vector2::Clear(void)
 *
 * Referenced strings: 7
 *   insn=0x0000000000318568 string=0x000000000031856C "h"
 *   insn=0x0000000000318574 string=0x0000000000318578 "i2"
 *   insn=0x000000000031857C string=0x0000000000318580 "`\n@"
 *   insn=0x0000000000318580 string=0x0000000000318584 "@"
 *   insn=0x0000000000318584 string=0x0000000000318588 "rm"
 *   insn=0x0000000000318588 string=0x00000000001F3B50 "P'"
 *   insn=0x0000000000318594 string=0x0000000000318598 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PhysicsObjectComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  char v2; // w8

  v1 = this;
  v2 = *(_BYTE *)(this + 48);
  if ( v2 )
  {
    *(_BYTE *)(this + 12) = 1;
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( this )
        this = Caver::Proto::Vector2::Clear((Caver::Proto::Vector2 *)this);
    }
    *(_DWORD *)(v1 + 44) = 0;
    *(_QWORD *)(v1 + 33) = 0;
    *(_DWORD *)(v1 + 24) = 1065353216;
    *(_QWORD *)(v1 + 28) = 0;
  }
  *(_DWORD *)(v1 + 48) = 0;
  return this;
}

