/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a9688
 * Function: Caver::StoreController::SetSharedController
 * Signature: undefined __cdecl SetSharedController(shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreController::SetSharedController(boost::shared_ptr<Caver::StoreController> const&) */

void Caver::StoreController::SetSharedController(shared_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  DAT_007e9970 = *(undefined8 *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = DAT_007e9978;
  if ((DAT_007e9978 != (long *)0x0) &&
     (lVar4 = DAT_007e9978[1], plVar1 = DAT_007e9978 + 1, DAT_007e9978 = (long *)lVar2,
     *plVar1 = lVar4 + -1, lVar2 = (long)DAT_007e9978, lVar4 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar4 = plVar3[2];
    plVar3[2] = lVar4 + -1;
    lVar2 = (long)DAT_007e9978;
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004a970c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return;
    }
  }
  DAT_007e9978 = (long *)lVar2;
  return;
}


