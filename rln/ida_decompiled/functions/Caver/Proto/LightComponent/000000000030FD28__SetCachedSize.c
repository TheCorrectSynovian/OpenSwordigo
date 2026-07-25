/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030FD28
 * Mangled: _ZNK5Caver5Proto14LightComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::LightComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000030FC8C  Caver::Proto::LightComponent::~LightComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::LightComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

