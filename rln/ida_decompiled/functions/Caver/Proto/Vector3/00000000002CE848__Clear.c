/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE848
 * Mangled: _ZN5Caver5Proto7Vector35ClearEv
 * Demangled: Caver::Proto::Vector3::Clear(void)
 *
 * Callers: 1
 *   0x00000000002034E0  Caver::Proto::Vector3::Clear(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000002CE848 string=0x00000000002CE84C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Vector3::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 24) )
  {
    *(_DWORD *)(this + 12) = 0;
    *(_QWORD *)(this + 16) = 0;
  }
  *(_DWORD *)(this + 24) = 0;
  return this;
}

