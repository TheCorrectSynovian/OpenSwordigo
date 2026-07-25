/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000339ACC
 * Mangled: _ZNK5Caver5Proto4Mesh13SetCachedSizeEi
 * Demangled: Caver::Proto::Mesh::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000339A94  Caver::Proto::Mesh::~Mesh()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Mesh::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

