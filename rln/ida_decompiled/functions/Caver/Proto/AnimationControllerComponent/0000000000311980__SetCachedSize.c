/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000311980
 * Mangled: _ZNK5Caver5Proto28AnimationControllerComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::AnimationControllerComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000311938  Caver::Proto::AnimationControllerComponent::~AnimationControllerComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::AnimationControllerComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

