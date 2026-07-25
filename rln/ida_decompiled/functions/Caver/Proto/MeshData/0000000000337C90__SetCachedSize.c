/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000337C90
 * Mangled: _ZNK5Caver5Proto8MeshData13SetCachedSizeEi
 * Demangled: Caver::Proto::MeshData::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000337C48  Caver::Proto::MeshData::~MeshData()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MeshData::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

