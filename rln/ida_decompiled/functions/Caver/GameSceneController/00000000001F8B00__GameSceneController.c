/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8B00
 * Mangled: ._ZN5Caver19GameSceneControllerC2Ev
 * Demangled: Caver::GameSceneController::GameSceneController(void)
 *
 * Callers: 1
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *
 * Callees: 1
 *   0x0000000000348568  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverView,Caver::GameOverView>(boost::shared_ptr<Caver::GameOverView> const*,Caver::GameOverView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8B08 string=0x00000000001F8B0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameSceneController::GameSceneController(Caver::GameSceneController *this)
{
  JUMPOUT(0x348688);
}

