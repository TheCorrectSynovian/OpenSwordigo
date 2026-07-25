/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003891B0
 * Mangled: _ZN5Caver16OnlineController10IsAgeKnownEv
 * Demangled: Caver::OnlineController::IsAgeKnown(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::OnlineController::IsAgeKnown(Caver::OnlineController *this)
{
  return *((_DWORD *)this + 2) != 0;
}

