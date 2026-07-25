/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203160
 * Mangled: ._ZN5Caver19GameSceneController16RegisterTreasureERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::GameSceneController::RegisterTreasure(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 1
 *   0x00000000003601E8  sub_3601E8
 *
 * Callees: 1
 *   0x000000000034D478  Caver::GameSceneController::RegisterTreasure(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203164 string=0x000000000034D478 ""
 *   insn=0x0000000000203168 string=0x000000000020316C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameSceneController::RegisterTreasure()
{
  return _ZN5Caver19GameSceneController16RegisterTreasureERKN5boost13intrusive_ptrINS_11SceneObjectEEE();
}

