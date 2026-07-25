/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CDE44
 * Mangled: _ZNK5Caver5Proto8DateTime13SetCachedSizeEi
 * Demangled: Caver::Proto::DateTime::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002CDDFC  Caver::Proto::DateTime::~DateTime()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DateTime::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

