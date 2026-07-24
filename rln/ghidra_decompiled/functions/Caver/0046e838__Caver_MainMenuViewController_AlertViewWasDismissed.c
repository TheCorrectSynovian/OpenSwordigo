/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046e838
 * Function: Caver::MainMenuViewController::AlertViewWasDismissed
 * Signature: undefined __thiscall AlertViewWasDismissed(MainMenuViewController * this, GUIAlertView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuViewController::AlertViewWasDismissed(Caver::GUIAlertView*) */

void __thiscall
Caver::MainMenuViewController::AlertViewWasDismissed
          (MainMenuViewController *this,GUIAlertView *param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(GUIAlertView **)(this + 0xe8) == param_1) {
    plVar2 = (long *)OnlineController::SharedController();
    (**(code **)(*plVar2 + 0x60))(plVar2,*(undefined4 *)(this + 0x11c));
    plVar2 = *(long **)(this + 0xf0);
    *(undefined8 *)(this + 0xe8) = 0;
    *(undefined8 *)(this + 0xf0) = 0;
  }
  else {
    if (*(GUIAlertView **)(this + 0xf8) != param_1) {
      return;
    }
    plVar2 = *(long **)(this + 0x100);
    *(undefined8 *)(this + 0xf8) = 0;
    *(undefined8 *)(this + 0x100) = 0;
  }
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0046e8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
  return;
}


