/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a21f8
 * Function: Caver::GUIWindow::SetMainWindow
 * Signature: undefined __cdecl SetMainWindow(shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::SetMainWindow(boost::shared_ptr<Caver::GUIWindow> const&) */

void Caver::GUIWindow::SetMainWindow(shared_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 005a21fc to 006a2283 has its CatchHandler @ 005a2370 */
  DAT_007e9e60 = *(undefined8 *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = DAT_007e9e68;
                    /* catch() { ... } // from try @ 005a1ed4 with catch @ 005a2228 */
  if ((DAT_007e9e68 != (long *)0x0) &&
     (lVar4 = DAT_007e9e68[1], plVar1 = DAT_007e9e68 + 1, DAT_007e9e68 = (long *)lVar2,
     *plVar1 = lVar4 + -1, lVar2 = (long)DAT_007e9e68, lVar4 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar4 = plVar3[2];
    plVar3[2] = lVar4 + -1;
    lVar2 = (long)DAT_007e9e68;
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x005a227c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return;
    }
  }
  DAT_007e9e68 = (long *)lVar2;
  return;
}


