/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003147B4
 * Mangled: _ZNK5Caver5Proto15EntityComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::EntityComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000031476C  Caver::Proto::EntityComponent::~EntityComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

