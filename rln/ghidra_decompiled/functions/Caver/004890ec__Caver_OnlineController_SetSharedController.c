/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004890ec
 * Function: Caver::OnlineController::SetSharedController
 * Signature: undefined __cdecl SetSharedController(shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OnlineController::SetSharedController(boost::shared_ptr<Caver::OnlineController> const&)
    */

void Caver::OnlineController::SetSharedController(shared_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  DAT_007e9928 = *(long *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = DAT_007e9930;
                    /* catch() { ... } // from try @ 00488fb0 with catch @ 00489118 */
  if ((DAT_007e9930 != (long *)0x0) &&
     (lVar4 = DAT_007e9930[1], plVar1 = DAT_007e9930 + 1, DAT_007e9930 = (long *)lVar2,
     *plVar1 = lVar4 + -1, lVar2 = (long)DAT_007e9930, lVar4 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar4 = plVar3[2];
    plVar3[2] = lVar4 + -1;
    lVar2 = (long)DAT_007e9930;
    if (lVar4 + -1 == 0) {
                    /* catch() { ... } // from try @ 00488f9c with catch @ 00489150 */
                    /* catch() { ... } // from try @ 00488f74 with catch @ 00489154 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
      lVar2 = (long)DAT_007e9930;
    }
  }
  DAT_007e9930 = (long *)lVar2;
  *(undefined4 *)(DAT_007e9928 + 8) = 0;
  return;
}


