/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003370BC
 * Mangled: _ZNK5Caver5Proto14SpellComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::SpellComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000337034  Caver::Proto::SpellComponent::~SpellComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpellComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

