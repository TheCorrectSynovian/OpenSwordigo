/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033CD20
 * Mangled: _ZNK5Caver5Proto12UnpackedMesh13SetCachedSizeEi
 * Demangled: Caver::Proto::UnpackedMesh::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000033CCE8  Caver::Proto::UnpackedMesh::~UnpackedMesh()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::UnpackedMesh::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

