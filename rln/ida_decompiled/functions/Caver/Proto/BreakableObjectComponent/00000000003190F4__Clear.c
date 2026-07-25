/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003190F4
 * Mangled: _ZN5Caver5Proto24BreakableObjectComponent5ClearEv
 * Demangled: Caver::Proto::BreakableObjectComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4DE0  Caver::Proto::Program::Clear(void)
 *
 * Referenced strings: 5
 *   insn=0x0000000000319100 string=0x0000000000319104 "h"
 *   insn=0x0000000000319114 string=0x0000000000319118 "`"
 *   insn=0x0000000000319118 string=0x000000000031911C "@"
 *   insn=0x000000000031911C string=0x0000000000319120 "0o"
 *   insn=0x0000000000319120 string=0x00000000001F4DE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BreakableObjectComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  char v2; // w8

  v1 = this;
  v2 = *(_BYTE *)(this + 32);
  if ( v2 )
  {
    *(_BYTE *)(this + 12) = 0;
    *(_QWORD *)(this + 16) = 0;
    if ( (v2 & 8) != 0 )
    {
      this = *(_QWORD *)(this + 24);
      if ( this )
        this = Caver::Proto::Program::Clear((Caver::Proto::Program *)this);
    }
  }
  *(_DWORD *)(v1 + 32) = 0;
  return this;
}

