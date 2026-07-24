/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bcd18
 * Function: Caver::ProfileManager_Android::SkipLoadingButtonPressed
 * Signature: undefined __cdecl SkipLoadingButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager_Android::SkipLoadingButtonPressed(void*, Caver::GUIEvent*) */

void Caver::ProfileManager_Android::SkipLoadingButtonPressed(void *param_1,GUIEvent *param_2)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 005bcd20 to 006bcd47 has its CatchHandler @ 005bce48 */
  if (*(ProfileManagerLoadingViewController **)((long)param_1 + 0x90) !=
      (ProfileManagerLoadingViewController *)0x0) {
    ProfileManagerLoadingViewController::DismissAfterMinimumDelay
              (*(ProfileManagerLoadingViewController **)((long)param_1 + 0x90),1.0);
    plVar2 = *(long **)((long)param_1 + 0x98);
    *(undefined8 *)((long)param_1 + 0x90) = 0;
    *(undefined8 *)((long)param_1 + 0x98) = 0;
    if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* try { // try from 005bcd54 to 006bcd5b has its CatchHandler @ 005bce34 */
                    /* try { // try from 005bcd60 to 006bcd67 has its CatchHandler @ 005bce24 */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar1 = plVar2[2];
      plVar2[2] = lVar1 + -1;
      if (lVar1 + -1 == 0) {
                    /* try { // try from 005bcd84 to 006bcdab has its CatchHandler @ 005bce3c */
                    /* WARNING: Could not recover jumptable at 0x005bcd94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))(plVar2);
        return;
      }
    }
  }
  return;
}


