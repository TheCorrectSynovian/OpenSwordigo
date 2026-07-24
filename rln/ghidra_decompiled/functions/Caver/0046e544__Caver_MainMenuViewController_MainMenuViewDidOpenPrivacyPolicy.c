/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046e544
 * Function: Caver::MainMenuViewController::MainMenuViewDidOpenPrivacyPolicy
 * Signature: undefined __cdecl MainMenuViewDidOpenPrivacyPolicy(MainMenuView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuViewController::MainMenuViewDidOpenPrivacyPolicy(Caver::MainMenuView*) */

void Caver::MainMenuViewController::MainMenuViewDidOpenPrivacyPolicy(MainMenuView *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (param_1[0x119] != (MainMenuView)0x0) {
    plVar1 = (long *)OnlineController::SharedController();
    uVar2 = (**(code **)(*plVar1 + 0x58))();
    if ((uVar2 & 1) != 0) {
      ShowPrivacyPolicyConsentDialog((MainMenuViewController *)param_1);
      return;
    }
  }
  plVar1 = (long *)OnlineController::SharedController();
                    /* WARNING: Could not recover jumptable at 0x0046e594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x68))();
  return;
}


