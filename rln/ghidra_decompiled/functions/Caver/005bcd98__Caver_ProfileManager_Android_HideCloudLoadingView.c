/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bcd98
 * Function: Caver::ProfileManager_Android::HideCloudLoadingView
 * Signature: undefined __thiscall HideCloudLoadingView(ProfileManager_Android * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager_Android::HideCloudLoadingView() */

void __thiscall Caver::ProfileManager_Android::HideCloudLoadingView(ProfileManager_Android *this)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 005bcdac to 006bcf07 has its CatchHandler @ 005bc57c */
  if (*(ProfileManagerLoadingViewController **)(this + 0x90) !=
      (ProfileManagerLoadingViewController *)0x0) {
    ProfileManagerLoadingViewController::DismissAfterMinimumDelay
              (*(ProfileManagerLoadingViewController **)(this + 0x90),1.0);
    plVar2 = *(long **)(this + 0x98);
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0x98) = 0;
    if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar1 = plVar2[2];
      plVar2[2] = lVar1 + -1;
      if (lVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x005bce14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))(plVar2);
        return;
      }
    }
  }
  return;
}


