/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000302B90
 * Mangled: _ZNK5Caver5Proto15SpriteComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::SpriteComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000302A94  Caver::Proto::SpriteComponent::~SpriteComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpriteComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

