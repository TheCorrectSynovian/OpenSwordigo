/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000319A48
 * Mangled: _ZNK5Caver5Proto25EntityControllerComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::EntityControllerComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000319A00  Caver::Proto::EntityControllerComponent::~EntityControllerComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityControllerComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

