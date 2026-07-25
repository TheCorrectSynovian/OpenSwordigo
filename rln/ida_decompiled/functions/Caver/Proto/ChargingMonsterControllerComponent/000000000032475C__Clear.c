/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032475C
 * Mangled: _ZN5Caver5Proto34ChargingMonsterControllerComponent5ClearEv
 * Demangled: Caver::Proto::ChargingMonsterControllerComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ChargingMonsterControllerComponent::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 32) )
  {
    *(_QWORD *)(this + 20) = 0;
    *(_QWORD *)(this + 12) = 0;
    *(_DWORD *)(this + 28) = 0;
  }
  *(_DWORD *)(this + 32) = 0;
  return this;
}

