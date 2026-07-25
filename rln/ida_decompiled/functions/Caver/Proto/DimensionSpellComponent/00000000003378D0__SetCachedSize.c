/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003378D0
 * Mangled: _ZNK5Caver5Proto23DimensionSpellComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::DimensionSpellComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000337888  Caver::Proto::DimensionSpellComponent::~DimensionSpellComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DimensionSpellComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

