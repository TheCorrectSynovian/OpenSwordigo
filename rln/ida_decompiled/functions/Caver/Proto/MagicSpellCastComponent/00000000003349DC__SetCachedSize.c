/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003349DC
 * Mangled: _ZNK5Caver5Proto23MagicSpellCastComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::MagicSpellCastComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000334994  Caver::Proto::MagicSpellCastComponent::~MagicSpellCastComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicSpellCastComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

