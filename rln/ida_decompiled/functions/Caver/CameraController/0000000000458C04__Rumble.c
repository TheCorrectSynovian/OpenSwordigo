/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000458C04
 * Mangled: _ZN5Caver16CameraController6RumbleEv
 * Demangled: Caver::CameraController::Rumble(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000458C04 string=0x0000000000458C08 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CameraController::Rumble(__int64 this)
{
  *(_DWORD *)(this + 152) = 1065353216;
  return this;
}

