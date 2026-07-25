/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323134
 * Mangled: _ZN5Caver5Proto24OrbitControllerComponent5ClearEv
 * Demangled: Caver::Proto::OrbitControllerComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002034E0  Caver::Proto::Vector3::Clear(void)
 *
 * Referenced strings: 3
 *   insn=0x0000000000323140 string=0x0000000000323144 "h"
 *   insn=0x000000000032314C string=0x0000000000323150 "`\n@"
 *   insn=0x0000000000323150 string=0x0000000000323154 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::OrbitControllerComponent::Clear(__int64 this)
{
  __int64 v1; // x19

  v1 = this;
  if ( *(_BYTE *)(this + 32) )
  {
    if ( (*(_BYTE *)(this + 32) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( this )
        this = Caver::Proto::Vector3::Clear((Caver::Proto::Vector3 *)this);
    }
    *(_QWORD *)(v1 + 24) = 0;
  }
  *(_DWORD *)(v1 + 32) = 0;
  return this;
}

