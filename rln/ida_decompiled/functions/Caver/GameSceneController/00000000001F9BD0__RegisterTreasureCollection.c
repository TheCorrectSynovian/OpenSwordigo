/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9BD0
 * Mangled: ._ZN5Caver19GameSceneController26RegisterTreasureCollectionERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::GameSceneController::RegisterTreasureCollection(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 1
 *   0x00000000003601E8  sub_3601E8
 *
 * Callees: 1
 *   0x000000000034D490  Caver::GameSceneController::RegisterTreasureCollection(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9BD8 string=0x00000000001F9BDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameSceneController::RegisterTreasureCollection()
{
  return _ZN5Caver19GameSceneController26RegisterTreasureCollectionERKN5boost13intrusive_ptrINS_11SceneObjectEEE();
}

