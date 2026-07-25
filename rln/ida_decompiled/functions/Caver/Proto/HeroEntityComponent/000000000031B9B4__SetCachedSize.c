/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031B9B4
 * Mangled: _ZNK5Caver5Proto19HeroEntityComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::HeroEntityComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000031B92C  Caver::Proto::HeroEntityComponent::~HeroEntityComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::HeroEntityComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

