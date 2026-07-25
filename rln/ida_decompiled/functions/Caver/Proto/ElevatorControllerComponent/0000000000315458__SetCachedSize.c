/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000315458
 * Mangled: _ZNK5Caver5Proto27ElevatorControllerComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::ElevatorControllerComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x0000000000315410  Caver::Proto::ElevatorControllerComponent::~ElevatorControllerComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ElevatorControllerComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

