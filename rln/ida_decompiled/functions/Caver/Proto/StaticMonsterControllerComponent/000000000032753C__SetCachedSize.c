/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032753C
 * Mangled: _ZNK5Caver5Proto32StaticMonsterControllerComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::StaticMonsterControllerComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000003274D8  Caver::Proto::StaticMonsterControllerComponent::~StaticMonsterControllerComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::StaticMonsterControllerComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

