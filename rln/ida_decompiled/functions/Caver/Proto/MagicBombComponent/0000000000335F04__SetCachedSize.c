/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000335F04
 * Mangled: _ZNK5Caver5Proto18MagicBombComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::MagicBombComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000335E7C  Caver::Proto::MagicBombComponent::~MagicBombComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicBombComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

