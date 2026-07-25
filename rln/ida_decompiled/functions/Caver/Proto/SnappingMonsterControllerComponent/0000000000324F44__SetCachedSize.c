/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000324F44
 * Mangled: _ZNK5Caver5Proto34SnappingMonsterControllerComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::SnappingMonsterControllerComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000324EFC  Caver::Proto::SnappingMonsterControllerComponent::~SnappingMonsterControllerComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SnappingMonsterControllerComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

