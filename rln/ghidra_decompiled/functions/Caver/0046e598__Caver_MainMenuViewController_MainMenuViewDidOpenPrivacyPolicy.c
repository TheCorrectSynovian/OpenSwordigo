/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046e598
 * Function: Caver::MainMenuViewController::MainMenuViewDidOpenPrivacyPolicy
 * Signature: undefined __thiscall MainMenuViewDidOpenPrivacyPolicy(MainMenuViewController * this, MainMenuView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::MainMenuViewController::MainMenuViewDidOpenPrivacyPolicy(Caver::MainMenuView*) */

void __thiscall
Caver::MainMenuViewController::MainMenuViewDidOpenPrivacyPolicy
          (MainMenuViewController *this,MainMenuView *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (this[0xc9] != (MainMenuViewController)0x0) {
    plVar1 = (long *)OnlineController::SharedController();
    uVar2 = (**(code **)(*plVar1 + 0x58))();
    if ((uVar2 & 1) != 0) {
      ShowPrivacyPolicyConsentDialog(this + -0x50);
      return;
    }
  }
  plVar1 = (long *)OnlineController::SharedController();
                    /* WARNING: Could not recover jumptable at 0x0046e5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x68))();
  return;
}


