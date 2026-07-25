/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000336620
 * Mangled: _ZNK5Caver5Proto22MagicHookshotComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::MagicHookshotComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000336598  Caver::Proto::MagicHookshotComponent::~MagicHookshotComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicHookshotComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

