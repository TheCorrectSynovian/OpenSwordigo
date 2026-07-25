/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031C1B8
 * Mangled: _ZNK5Caver5Proto19BackgroundComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::BackgroundComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000031C0BC  Caver::Proto::BackgroundComponent::~BackgroundComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BackgroundComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

