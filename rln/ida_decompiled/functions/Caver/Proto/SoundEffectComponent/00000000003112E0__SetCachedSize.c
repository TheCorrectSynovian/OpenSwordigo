/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003112E0
 * Mangled: _ZNK5Caver5Proto20SoundEffectComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::SoundEffectComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000003111E4  Caver::Proto::SoundEffectComponent::~SoundEffectComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SoundEffectComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

