/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203590
 * Mangled: ._ZN5Caver19GameSceneController13InitWithSceneERKN5boost10shared_ptrINS_5SceneEEE
 * Demangled: Caver::GameSceneController::InitWithScene(boost::shared_ptr<Caver::Scene> const&)
 *
 * Callers: 1
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *
 * Callees: 1
 *   0x0000000000348568  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverView,Caver::GameOverView>(boost::shared_ptr<Caver::GameOverView> const*,Caver::GameOverView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203598 string=0x000000000020359C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameSceneController::InitWithScene()
{
  JUMPOUT(0x348920);
}

