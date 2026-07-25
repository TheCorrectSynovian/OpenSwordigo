/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033B9B4
 * Mangled: _ZNK5Caver5Proto10PackedMesh13SetCachedSizeEi
 * Demangled: Caver::Proto::PackedMesh::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000033B97C  Caver::Proto::PackedMesh::~PackedMesh()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PackedMesh::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

