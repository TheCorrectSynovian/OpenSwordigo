/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000316FCC
 * Mangled: _ZN5Caver5Proto16ProgramComponent5ClearEv
 * Demangled: Caver::Proto::ProgramComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4DE0  Caver::Proto::Program::Clear(void)
 *
 * Referenced strings: 7
 *   insn=0x0000000000316FD8 string=0x0000000000316FDC "h"
 *   insn=0x0000000000316FDC string=0x0000000000316FE0 ""
 *   insn=0x0000000000316FE8 string=0x0000000000316FEC "i"
 *   insn=0x0000000000316FF0 string=0x0000000000316FF4 "`"
 *   insn=0x0000000000316FF4 string=0x0000000000316FF8 "@"
 *   insn=0x0000000000316FF8 string=0x0000000000316FFC "yw"
 *   insn=0x0000000000316FFC string=0x00000000001F4DE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ProgramComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  char v2; // w8

  v1 = this;
  v2 = *(_BYTE *)(this + 32);
  if ( v2 )
  {
    *(_WORD *)(this + 12) = 0;
    *(_DWORD *)(this + 16) = 1;
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

