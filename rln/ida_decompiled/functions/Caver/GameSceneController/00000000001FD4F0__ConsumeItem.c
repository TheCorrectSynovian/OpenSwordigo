/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD4F0
 * Mangled: ._ZN5Caver19GameSceneController11ConsumeItemERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::GameSceneController::ConsumeItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x000000000035AC54  Caver::GameViewController::GameControlButtonUp(Caver::GameControlButton)
 *
 * Callees: 1
 *   0x000000000034A77C  Caver::GameSceneController::ConsumeItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD4F8 string=0x00000000001FD4FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameSceneController::ConsumeItem()
{
  return _ZN5Caver19GameSceneController11ConsumeItemERKN5boost10shared_ptrINS_4ItemEEE();
}

