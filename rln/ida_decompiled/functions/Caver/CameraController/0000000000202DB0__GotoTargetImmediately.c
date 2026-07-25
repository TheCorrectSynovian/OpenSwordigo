/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202DB0
 * Mangled: ._ZN5Caver16CameraController21GotoTargetImmediatelyEv
 * Demangled: Caver::CameraController::GotoTargetImmediately(void)
 *
 * Callers: 1
 *   0x000000000039465C  Caver::MainMenuView::Update(float)
 *
 * Callees: 1
 *   0x0000000000458BE0  Caver::CameraController::GotoTargetImmediately(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000202DB4 string=0x0000000000458BE0 "@"
 *   insn=0x0000000000202DB8 string=0x0000000000202DBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CameraController::GotoTargetImmediately(Caver::CameraController *this)
{
  return _ZN5Caver16CameraController21GotoTargetImmediatelyEv(this);
}

