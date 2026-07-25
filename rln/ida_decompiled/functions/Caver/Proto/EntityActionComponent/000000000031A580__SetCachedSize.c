/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031A580
 * Mangled: _ZNK5Caver5Proto21EntityActionComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::EntityActionComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000031A4F8  Caver::Proto::EntityActionComponent::~EntityActionComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityActionComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

