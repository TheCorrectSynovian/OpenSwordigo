/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4EA0
 * Mangled: ._ZN5Caver16CameraControllerC2Ev
 * Demangled: Caver::CameraController::CameraController(void)
 *
 * Callers: 2
 *   0x0000000000348568  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverView,Caver::GameOverView>(boost::shared_ptr<Caver::GameOverView> const*,Caver::GameOverView *)
 *   0x0000000000371F64  Caver::SceneView::SceneView(void)
 *
 * Callees: 1
 *   0x000000000045807C  Caver::CameraController::CameraController(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4EA8 string=0x00000000001F4EAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CameraController::CameraController(Caver::CameraController *this)
{
  return _ZN5Caver16CameraControllerC2Ev(this);
}

