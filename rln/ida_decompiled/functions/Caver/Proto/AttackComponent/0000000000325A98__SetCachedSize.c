/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000325A98
 * Mangled: _ZNK5Caver5Proto15AttackComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::AttackComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000325A10  Caver::Proto::AttackComponent::~AttackComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::AttackComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

