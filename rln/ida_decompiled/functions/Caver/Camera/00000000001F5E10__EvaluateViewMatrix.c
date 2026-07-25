/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5E10
 * Mangled: ._ZN5Caver6Camera18EvaluateViewMatrixEv
 * Demangled: Caver::Camera::EvaluateViewMatrix(void)
 *
 * Callers: 1
 *   0x000000000045807C  Caver::CameraController::CameraController(void)
 *
 * Callees: 1
 *   0x0000000000457D84  Caver::Camera::EvaluateViewMatrix(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5E18 string=0x00000000001F5E1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Camera::EvaluateViewMatrix(Caver::Camera *this)
{
  return _ZN5Caver6Camera18EvaluateViewMatrixEv(this);
}

