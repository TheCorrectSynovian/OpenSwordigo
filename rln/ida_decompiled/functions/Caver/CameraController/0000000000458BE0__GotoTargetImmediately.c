/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000458BE0
 * Mangled: _ZN5Caver16CameraController21GotoTargetImmediatelyEv
 * Demangled: Caver::CameraController::GotoTargetImmediately(void)
 *
 * Callers: 1
 *   0x0000000000202DB0  Caver::CameraController::GotoTargetImmediately(void)
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x0000000000458BE0 string=0x0000000000458BE4 "\t"
 *   insn=0x0000000000458BE4 string=0x0000000000458BE8 "\n"
 *   insn=0x0000000000458BE8 string=0x0000000000458BEC "(@"
 *   insn=0x0000000000458BEC string=0x0000000000458BF0 ""
 *   insn=0x0000000000458BF0 string=0x0000000000458BF4 "\t8"
 *   insn=0x0000000000458BF4 string=0x0000000000458BF8 "\n"
 *   insn=0x0000000000458BF8 string=0x0000000000458BFC "D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CameraController::GotoTargetImmediately(__int64 this)
{
  int v1; // w9
  __int64 v2; // x10
  int v3; // w11

  v1 = *(_DWORD *)(this + 24);
  v2 = *(_QWORD *)(this + 32);
  v3 = *(_DWORD *)(this + 40);
  *(_QWORD *)(this + 48) = *(_QWORD *)(this + 16);
  *(_DWORD *)(this + 56) = v1;
  *(_QWORD *)(this + 60) = v2;
  *(_DWORD *)(this + 68) = v3;
  return this;
}

