/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000324724
 * Mangled: _ZNK5Caver5Proto34ChargingMonsterControllerComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::ChargingMonsterControllerComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000003246DC  Caver::Proto::ChargingMonsterControllerComponent::~ChargingMonsterControllerComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ChargingMonsterControllerComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

