/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D1F54
 * Mangled: _ZN5Caver5Proto22Texture_ConversionInfo5ClearEv
 * Demangled: Caver::Proto::Texture_ConversionInfo::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000002D1F54 string=0x00000000002D1F58 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture_ConversionInfo::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 28) )
  {
    *(_QWORD *)(this + 20) = 0;
    *(_QWORD *)(this + 12) = 0;
  }
  *(_DWORD *)(this + 28) = 0;
  return this;
}

