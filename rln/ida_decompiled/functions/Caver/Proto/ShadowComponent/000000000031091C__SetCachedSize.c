/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031091C
 * Mangled: _ZNK5Caver5Proto15ShadowComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::ShadowComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000310894  Caver::Proto::ShadowComponent::~ShadowComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShadowComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

