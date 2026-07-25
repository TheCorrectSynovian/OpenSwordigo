/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003099A4
 * Mangled: _ZNK5Caver5Proto23TextureMappingComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::TextureMappingComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000030996C  Caver::Proto::TextureMappingComponent::~TextureMappingComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::TextureMappingComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

