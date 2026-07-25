/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003293FC
 * Mangled: _ZNK5Caver5Proto33GenericMonsterControllerComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::GenericMonsterControllerComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000003293B4  Caver::Proto::GenericMonsterControllerComponent::~GenericMonsterControllerComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GenericMonsterControllerComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

