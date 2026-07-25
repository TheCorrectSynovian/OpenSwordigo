/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025E9AC
 * Mangled: _ZN5Caver23CharControllerComponent21StopMovingToDirectionEi
 * Demangled: Caver::CharControllerComponent::StopMovingToDirection(int)
 *
 * Callers: 1
 *   0x00000000001FC090  Caver::CharControllerComponent::StopMovingToDirection(int)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharControllerComponent::StopMovingToDirection(__int64 this, int a2)
{
  if ( *(_DWORD *)(this + 560) == a2 )
  {
    *(_BYTE *)(this + 564) = 0;
    *(_DWORD *)(this + 576) = 0;
    *(_DWORD *)(this + 560) = 0;
  }
  return this;
}

