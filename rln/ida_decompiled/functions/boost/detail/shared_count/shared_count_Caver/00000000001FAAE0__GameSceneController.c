/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAAE0
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver19GameSceneControllerEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::GameSceneController>(Caver::GameSceneController *)
 *
 * Callers: 1
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *
 * Callees: 1
 *   0x000000000036444C  boost::detail::shared_count::shared_count<Caver::GameSceneController>(Caver::GameSceneController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAAE8 string=0x00000000001FAAEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::GameSceneController>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver19GameSceneControllerEEEPT_();
}

