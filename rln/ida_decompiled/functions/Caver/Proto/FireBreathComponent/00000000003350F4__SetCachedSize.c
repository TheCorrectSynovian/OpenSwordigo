/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003350F4
 * Mangled: _ZNK5Caver5Proto19FireBreathComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::FireBreathComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000033506C  Caver::Proto::FireBreathComponent::~FireBreathComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FireBreathComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

