/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003891D0
 * Mangled: _ZN5Caver16OnlineController10EnteredAgeEi
 * Demangled: Caver::OnlineController::EnteredAge(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OnlineController::EnteredAge(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

