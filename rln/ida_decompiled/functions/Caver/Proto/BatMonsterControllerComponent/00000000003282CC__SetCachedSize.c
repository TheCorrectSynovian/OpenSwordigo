/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003282CC
 * Mangled: _ZNK5Caver5Proto29BatMonsterControllerComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::BatMonsterControllerComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000328284  Caver::Proto::BatMonsterControllerComponent::~BatMonsterControllerComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BatMonsterControllerComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

