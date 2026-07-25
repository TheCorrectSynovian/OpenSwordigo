/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000330648
 * Mangled: _ZNK5Caver5Proto17ItemDropComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::ItemDropComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000330610  Caver::Proto::ItemDropComponent::~ItemDropComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ItemDropComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

