/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000317A20
 * Mangled: _ZN5Caver5Proto22MonsterEntityComponent5ClearEv
 * Demangled: Caver::Proto::MonsterEntityComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4DE0  Caver::Proto::Program::Clear(void)
 *
 * Referenced strings: 8
 *   insn=0x0000000000317A2C string=0x0000000000317A30 "h"
 *   insn=0x0000000000317A30 string=0x0000000000317A34 "h"
 *   insn=0x0000000000317A38 string=0x0000000000317A3C "`\n@"
 *   insn=0x0000000000317A3C string=0x0000000000317A40 "`"
 *   insn=0x0000000000317A44 string=0x0000000000317A48 "h&@"
 *   insn=0x0000000000317A44 string=0x00000000001F4DE0 "P'"
 *   insn=0x0000000000317A4C string=0x0000000000317A50 "`"
 *   insn=0x0000000000317A50 string=0x0000000000317A54 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterEntityComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 36);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 36) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( this )
      {
        this = Caver::Proto::Program::Clear((Caver::Proto::Program *)this);
        v2 = *(_DWORD *)(v1 + 36);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( this )
        this = Caver::Proto::Program::Clear((Caver::Proto::Program *)this);
    }
    *(_WORD *)(v1 + 32) = 0;
  }
  *(_DWORD *)(v1 + 36) = 0;
  return this;
}

