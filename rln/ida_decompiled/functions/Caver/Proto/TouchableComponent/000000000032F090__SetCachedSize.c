/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032F090
 * Mangled: _ZNK5Caver5Proto18TouchableComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::TouchableComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000032F008  Caver::Proto::TouchableComponent::~TouchableComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::TouchableComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

