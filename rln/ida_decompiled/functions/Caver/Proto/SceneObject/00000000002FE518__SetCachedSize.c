/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FE518
 * Mangled: _ZNK5Caver5Proto11SceneObject13SetCachedSizeEi
 * Demangled: Caver::Proto::SceneObject::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002FE4E0  Caver::Proto::SceneObject::~SceneObject()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SceneObject::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

