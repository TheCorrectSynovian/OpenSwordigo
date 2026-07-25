/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000315C7C
 * Mangled: _ZN5Caver5Proto24PressureTriggerComponent5ClearEv
 * Demangled: Caver::Proto::PressureTriggerComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4DE0  Caver::Proto::Program::Clear(void)
 *
 * Referenced strings: 9
 *   insn=0x0000000000315C88 string=0x0000000000315C8C "h"
 *   insn=0x0000000000315C9C string=0x0000000000315CA0 "`"
 *   insn=0x0000000000315CA0 string=0x0000000000315CA4 "`"
 *   insn=0x0000000000315CA4 string=0x0000000000315CA8 "N|"
 *   insn=0x0000000000315CA8 string=0x0000000000315CAC "h*@"
 *   insn=0x0000000000315CA8 string=0x00000000001F4DE0 "P'"
 *   insn=0x0000000000315CB0 string=0x0000000000315CB4 "`"
 *   insn=0x0000000000315CB4 string=0x0000000000315CB8 "@"
 *   insn=0x0000000000315CB8 string=0x0000000000315CBC "I|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PressureTriggerComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 40);
  if ( (_BYTE)v2 )
  {
    *(_DWORD *)(this + 12) = 0;
    *(_BYTE *)(this + 16) = 0;
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(this + 24);
      if ( this )
      {
        this = Caver::Proto::Program::Clear((Caver::Proto::Program *)this);
        v2 = *(_DWORD *)(v1 + 40);
      }
    }
    if ( (v2 & 8) != 0 )
    {
      this = *(_QWORD *)(v1 + 32);
      if ( this )
        this = Caver::Proto::Program::Clear((Caver::Proto::Program *)this);
    }
  }
  *(_DWORD *)(v1 + 40) = 0;
  return this;
}

