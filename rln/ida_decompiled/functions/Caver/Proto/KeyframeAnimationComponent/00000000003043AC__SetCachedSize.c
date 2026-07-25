/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003043AC
 * Mangled: _ZNK5Caver5Proto26KeyframeAnimationComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::KeyframeAnimationComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000003042B0  Caver::Proto::KeyframeAnimationComponent::~KeyframeAnimationComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::KeyframeAnimationComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

