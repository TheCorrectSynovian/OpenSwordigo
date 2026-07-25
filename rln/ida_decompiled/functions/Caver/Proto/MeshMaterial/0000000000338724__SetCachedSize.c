/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000338724
 * Mangled: _ZNK5Caver5Proto12MeshMaterial13SetCachedSizeEi
 * Demangled: Caver::Proto::MeshMaterial::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000003386EC  Caver::Proto::MeshMaterial::~MeshMaterial()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MeshMaterial::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

