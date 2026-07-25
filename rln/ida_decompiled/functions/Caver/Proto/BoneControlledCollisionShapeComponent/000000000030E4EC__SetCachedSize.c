/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030E4EC
 * Mangled: _ZNK5Caver5Proto37BoneControlledCollisionShapeComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::BoneControlledCollisionShapeComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000030E3F0  Caver::Proto::BoneControlledCollisionShapeComponent::~BoneControlledCollisionShapeComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BoneControlledCollisionShapeComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

