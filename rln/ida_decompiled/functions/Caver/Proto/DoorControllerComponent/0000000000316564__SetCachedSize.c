/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000316564
 * Mangled: _ZNK5Caver5Proto23DoorControllerComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::DoorControllerComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000031651C  Caver::Proto::DoorControllerComponent::~DoorControllerComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DoorControllerComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

