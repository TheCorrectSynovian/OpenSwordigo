/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046e764
 * Function: Caver::MainMenuViewController::AlertViewClickedButtonAtIndex
 * Signature: undefined __thiscall AlertViewClickedButtonAtIndex(MainMenuViewController * this, GUIAlertView * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuViewController::AlertViewClickedButtonAtIndex(Caver::GUIAlertView*, int) */

undefined4 __thiscall
Caver::MainMenuViewController::AlertViewClickedButtonAtIndex
          (MainMenuViewController *this,GUIAlertView *param_1,int param_2)

{
  long *plVar1;
  code *pcVar2;
  
                    /* try { // try from 0046e768 to 0056e76b has its CatchHandler @ 0046e920 */
                    /* try { // try from 0046e76c to 0056e94b has its CatchHandler @ 0046e668 */
  if ((*(GUIAlertView **)(this + 0xe8) != param_1) && (*(GUIAlertView **)(this + 0xf8) == param_1))
  {
    if (*(int *)(param_1 + 0x1a8) != param_2) {
      if (*(int *)(this + 0x108) == param_2) {
        plVar1 = (long *)OnlineController::SharedController();
        pcVar2 = *(code **)(*plVar1 + 0x98);
      }
      else if (*(int *)(this + 0x10c) == param_2) {
        plVar1 = (long *)OnlineController::SharedController();
        pcVar2 = *(code **)(*plVar1 + 0xa8);
      }
      else {
        if (*(int *)(this + 0x110) != param_2) {
          if (param_2 != 0) {
            return 0;
          }
          plVar1 = (long *)OnlineController::SharedController();
          (**(code **)(*plVar1 + 0x80))(plVar1,1);
          CompleteInitialPrivacy(this);
          return 1;
        }
        plVar1 = (long *)OnlineController::SharedController();
        pcVar2 = *(code **)(*plVar1 + 0x68);
      }
      (*pcVar2)();
    }
    return 0;
  }
  return 1;
}


