/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000324220
 * Mangled: _ZNK5Caver5Proto33WalkingMonsterControllerComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::WalkingMonsterControllerComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000003241D8  Caver::Proto::WalkingMonsterControllerComponent::~WalkingMonsterControllerComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WalkingMonsterControllerComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

