/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D0E38
 * Mangled: _ZN5Caver5Proto10FloatColor5ClearEv
 * Demangled: Caver::Proto::FloatColor::Clear(void)
 *
 * Callers: 1
 *   0x00000000001FBAB0  Caver::Proto::FloatColor::Clear(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FloatColor::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 28) )
    *(_OWORD *)(this + 12) = xmmword_583800;
  *(_DWORD *)(this + 28) = 0;
  return this;
}

