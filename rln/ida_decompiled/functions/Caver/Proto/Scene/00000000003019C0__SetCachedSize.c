/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003019C0
 * Mangled: _ZNK5Caver5Proto5Scene13SetCachedSizeEi
 * Demangled: Caver::Proto::Scene::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000301988  Caver::Proto::Scene::~Scene()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Scene::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

