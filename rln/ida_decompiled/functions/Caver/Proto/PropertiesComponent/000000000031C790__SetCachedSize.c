/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031C790
 * Mangled: _ZNK5Caver5Proto19PropertiesComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::PropertiesComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000031C708  Caver::Proto::PropertiesComponent::~PropertiesComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PropertiesComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

