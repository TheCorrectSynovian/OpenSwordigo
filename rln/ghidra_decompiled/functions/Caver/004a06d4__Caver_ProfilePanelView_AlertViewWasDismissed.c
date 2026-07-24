/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a06d4
 * Function: Caver::ProfilePanelView::AlertViewWasDismissed
 * Signature: undefined __thiscall AlertViewWasDismissed(ProfilePanelView * this, GUIAlertView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfilePanelView::AlertViewWasDismissed(Caver::GUIAlertView*) */

void __thiscall
Caver::ProfilePanelView::AlertViewWasDismissed(ProfilePanelView *this,GUIAlertView *param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(GUIAlertView **)(this + 0x150) == param_1) {
    plVar2 = *(long **)(this + 0x158);
    *(undefined8 *)(this + 0x150) = 0;
    *(undefined8 *)(this + 0x158) = 0;
  }
  else {
    if (*(GUIAlertView **)(this + 0x120) != param_1) {
      return;
    }
    plVar2 = *(long **)(this + 0x128);
    this[0x138] = (ProfilePanelView)0x0;
    *(undefined8 *)(this + 0x128) = 0;
    *(undefined8 *)(this + 0x130) = 0;
    *(undefined8 *)(this + 0x120) = 0;
  }
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004a076c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
  return;
}


