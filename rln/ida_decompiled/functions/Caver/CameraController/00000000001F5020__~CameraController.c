/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5020
 * Mangled: ._ZN5Caver16CameraControllerD2Ev
 * Demangled: Caver::CameraController::~CameraController()
 *
 * Callers: 3
 *   0x0000000000348568  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverView,Caver::GameOverView>(boost::shared_ptr<Caver::GameOverView> const*,Caver::GameOverView *)
 *   0x0000000000364534  Caver::GameSceneController::~GameSceneController()
 *   0x0000000000372360  Caver::SceneView::~SceneView()
 *
 * Callees: 1
 *   0x0000000000348568  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverView,Caver::GameOverView>(boost::shared_ptr<Caver::GameOverView> const*,Caver::GameOverView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5028 string=0x00000000001F502C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CameraController::~CameraController(Caver::CameraController *this)
{
  JUMPOUT(0x3487DC);
}

