/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000337D00
 * Mangled: _ZN5Caver5Proto8MeshData5ClearEv
 * Demangled: Caver::Proto::MeshData::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MeshData::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 28) )
    *(_OWORD *)(this + 12) = xmmword_58B490;
  *(_DWORD *)(this + 28) = 0;
  return this;
}

