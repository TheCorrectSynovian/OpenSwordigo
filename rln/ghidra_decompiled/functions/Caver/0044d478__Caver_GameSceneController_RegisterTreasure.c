/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044d478
 * Function: Caver::GameSceneController::RegisterTreasure
 * Signature: undefined __cdecl RegisterTreasure(intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneController::RegisterTreasure(boost::intrusive_ptr<Caver::SceneObject> const&) */

void Caver::GameSceneController::RegisterTreasure(intrusive_ptr *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x184);
  *(int *)(param_1 + 0x184) = iVar1 + 1;
  *(int *)(*(long *)(param_1 + 0x18) + 0x40) = iVar1 + 1;
                    /* catch() { ... } // from try @ 0044ad74 with catch @ 0044d48c */
  return;
}


