/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000300888
 * Mangled: _ZNK5Caver5Proto16SceneObjectGroup13SetCachedSizeEi
 * Demangled: Caver::Proto::SceneObjectGroup::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000300850  Caver::Proto::SceneObjectGroup::~SceneObjectGroup()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SceneObjectGroup::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

