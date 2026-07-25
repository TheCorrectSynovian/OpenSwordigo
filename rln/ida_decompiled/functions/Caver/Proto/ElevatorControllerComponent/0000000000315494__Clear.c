/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000315494
 * Mangled: _ZN5Caver5Proto27ElevatorControllerComponent5ClearEv
 * Demangled: Caver::Proto::ElevatorControllerComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ElevatorControllerComponent::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 20) )
    *(_QWORD *)(this + 12) = 0x100000000LL;
  *(_DWORD *)(this + 20) = 0;
  return this;
}

