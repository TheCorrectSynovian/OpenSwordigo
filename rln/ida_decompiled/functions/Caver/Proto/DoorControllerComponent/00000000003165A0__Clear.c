/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003165A0
 * Mangled: _ZN5Caver5Proto23DoorControllerComponent5ClearEv
 * Demangled: Caver::Proto::DoorControllerComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DoorControllerComponent::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 32) )
  {
    *(_QWORD *)(this + 20) = 0;
    *(_QWORD *)(this + 12) = 0;
    *(_BYTE *)(this + 28) = 0;
  }
  *(_DWORD *)(this + 32) = 0;
  return this;
}

