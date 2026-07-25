/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000327D18
 * Mangled: _ZNK5Caver5Proto34ShootingMonsterControllerComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::ShootingMonsterControllerComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000327CD0  Caver::Proto::ShootingMonsterControllerComponent::~ShootingMonsterControllerComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShootingMonsterControllerComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

