/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000310958
 * Mangled: _ZN5Caver5Proto15ShadowComponent5ClearEv
 * Demangled: Caver::Proto::ShadowComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002034E0  Caver::Proto::Vector3::Clear(void)
 *
 * Referenced strings: 3
 *   insn=0x0000000000310964 string=0x0000000000310968 "h"
 *   insn=0x0000000000310974 string=0x0000000000310978 "`"
 *   insn=0x0000000000310978 string=0x000000000031097C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShadowComponent::Clear(__int64 this)
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
        this = Caver::Proto::Vector3::Clear((Caver::Proto::Vector3 *)this);
    }
  }
  *(_DWORD *)(v1 + 32) = 0;
  return this;
}

