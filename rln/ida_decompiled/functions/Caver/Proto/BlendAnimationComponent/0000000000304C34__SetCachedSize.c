/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000304C34
 * Mangled: _ZNK5Caver5Proto23BlendAnimationComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::BlendAnimationComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000304BEC  Caver::Proto::BlendAnimationComponent::~BlendAnimationComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BlendAnimationComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

