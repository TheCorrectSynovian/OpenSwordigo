/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030FD6C
 * Mangled: _ZN5Caver5Proto14LightComponent5ClearEv
 * Demangled: Caver::Proto::LightComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FBAB0  Caver::Proto::FloatColor::Clear(void)
 *   0x00000000002034E0  Caver::Proto::Vector3::Clear(void)
 *
 * Referenced strings: 8
 *   insn=0x000000000030FD78 string=0x000000000030FD7C "h"
 *   insn=0x000000000030FD88 string=0x000000000030FD8C "`"
 *   insn=0x000000000030FD8C string=0x000000000030FD90 "`"
 *   insn=0x000000000030FD90 string=0x000000000030FD94 "G"
 *   insn=0x000000000030FD94 string=0x000000000030FD98 "h:@"
 *   insn=0x000000000030FD94 string=0x00000000001FBAB0 "0'"
 *   insn=0x000000000030FDA4 string=0x000000000030FDA8 "`"
 *   insn=0x000000000030FDA8 string=0x000000000030FDAC "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::LightComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 56);
  if ( (_BYTE)v2 )
  {
    *(_QWORD *)(this + 12) = 0;
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(this + 24);
      if ( this )
      {
        this = Caver::Proto::FloatColor::Clear((Caver::Proto::FloatColor *)this);
        v2 = *(_DWORD *)(v1 + 56);
      }
    }
    *(_QWORD *)(v1 + 32) = 0;
    *(_DWORD *)(v1 + 40) = 0;
    if ( (v2 & 0x40) != 0 )
    {
      this = *(_QWORD *)(v1 + 48);
      if ( this )
        this = Caver::Proto::Vector3::Clear((Caver::Proto::Vector3 *)this);
    }
  }
  *(_DWORD *)(v1 + 56) = 0;
  return this;
}

