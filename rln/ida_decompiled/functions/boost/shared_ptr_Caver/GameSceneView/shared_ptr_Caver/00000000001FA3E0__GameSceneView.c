/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA3E0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver13GameSceneViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GameSceneView>::shared_ptr<Caver::GameSceneView>(Caver::GameSceneView *)
 *
 * Callers: 1
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *
 * Callees: 1
 *   0x0000000000364A54  boost::shared_ptr<Caver::GameSceneView>::shared_ptr<Caver::GameSceneView>(Caver::GameSceneView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA3E8 string=0x00000000001FA3EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::GameSceneView>::shared_ptr<Caver::GameSceneView>()
{
  return _ZN5boost10shared_ptrIN5Caver13GameSceneViewEEC2IS2_EEPT_();
}

