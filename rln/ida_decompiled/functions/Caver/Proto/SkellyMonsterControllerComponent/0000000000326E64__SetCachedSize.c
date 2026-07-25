/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000326E64
 * Mangled: _ZNK5Caver5Proto32SkellyMonsterControllerComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::SkellyMonsterControllerComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000326E1C  Caver::Proto::SkellyMonsterControllerComponent::~SkellyMonsterControllerComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SkellyMonsterControllerComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

