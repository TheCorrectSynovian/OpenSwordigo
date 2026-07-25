/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003375DC
 * Mangled: _ZNK5Caver5Proto24DimensionObjectComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::DimensionObjectComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000337594  Caver::Proto::DimensionObjectComponent::~DimensionObjectComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DimensionObjectComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

