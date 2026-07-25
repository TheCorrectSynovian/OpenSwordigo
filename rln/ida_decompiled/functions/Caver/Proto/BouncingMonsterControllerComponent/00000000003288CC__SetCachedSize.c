/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003288CC
 * Mangled: _ZNK5Caver5Proto34BouncingMonsterControllerComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::BouncingMonsterControllerComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000328884  Caver::Proto::BouncingMonsterControllerComponent::~BouncingMonsterControllerComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BouncingMonsterControllerComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

