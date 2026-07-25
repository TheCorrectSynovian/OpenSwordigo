/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5F70
 * Mangled: ._ZN5Caver13GameSceneView23InitWithSceneControllerERKN5boost10shared_ptrINS_19GameSceneControllerEEE
 * Demangled: Caver::GameSceneView::InitWithSceneController(boost::shared_ptr<Caver::GameSceneController> const&)
 *
 * Callers: 1
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *
 * Callees: 1
 *   0x000000000034E1A0  Caver::GameSceneView::InitWithSceneController(boost::shared_ptr<Caver::GameSceneController> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5F78 string=0x00000000001F5F7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameSceneView::InitWithSceneController()
{
  return _ZN5Caver13GameSceneView23InitWithSceneControllerERKN5boost10shared_ptrINS_19GameSceneControllerEEE();
}

