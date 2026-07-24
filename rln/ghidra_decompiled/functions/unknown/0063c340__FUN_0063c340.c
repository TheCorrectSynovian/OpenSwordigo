/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063c340
 * Function: FUN_0063c340
 * Signature: undefined FUN_0063c340(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063c340(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long extraout_x1;
  long lVar6;
  
                    /* try { // try from 0063c344 to 0073c3e7 has its CatchHandler @ 0063ce78 */
  if ((DAT_007fbe38 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(&DAT_007fbe38);
    if (iVar4 == 0) goto LAB_0063c360;
                    /* try { // try from 0063c3f4 to 0073c3fb has its CatchHandler @ 0063ce64 */
    DAT_007fbe00 = 0;
    DAT_007fbe08 = 0;
    DAT_007fbe10 = 0;
    DAT_007fbe18 = 0;
                    /* try { // try from 0063c408 to 0073c413 has its CatchHandler @ 0063cd44 */
    DAT_007fbe20 = 0;
    __cxa_guard_release(&DAT_007fbe38);
                    /* try { // try from 0063c418 to 0073c423 has its CatchHandler @ 0063ccd0 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_0063c420;
LAB_0063c36c:
    iVar4 = pthread_mutex_lock((pthread_mutex_t *)&DAT_007fbe00);
    if (iVar4 != 0) {
      puVar5 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar5 = &PTR_FUN_007b6a90;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&PTR_PTR_007d8f20,FUN_0061cdd0);
    }
    if (*(long *)(*(long *)(param_1 + 0x18) + param_3 * 8) == 0) {
      plVar1 = param_2 + 1;
      do {
                    /* try { // try from 0063c448 to 0073c453 has its CatchHandler @ 0063cd98 */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
                    /* try { // try from 0063c458 to 0073c463 has its CatchHandler @ 0063cd48 */
      *(long **)(*(long *)(param_1 + 0x18) + param_3 * 8) = param_2;
      goto LAB_0063c3b0;
    }
  }
  else {
LAB_0063c360:
    if (PTR_pthread_create_007e4e78 != (undefined *)0x0) goto LAB_0063c36c;
LAB_0063c420:
    lVar6 = *(long *)(param_1 + 0x18);
    if (*(long *)(lVar6 + param_3 * 8) == 0) {
                    /* try { // try from 0063c434 to 0073c43f has its CatchHandler @ 0063cd98 */
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      *(long **)(lVar6 + param_3 * 8) = param_2;
                    /* try { // try from 0063c440 to 0073c447 has its CatchHandler @ 0063ccb8 */
      goto LAB_0063c3b0;
    }
  }
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
LAB_0063c3b0:
  if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
    iVar4 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_007fbe00);
    if (iVar4 != 0) {
      FUN_0061ce80();
      if (extraout_x1 != -1) {
                    /* WARNING: Subroutine does not return */
        FUN_006818c4();
      }
                    /* WARNING: Subroutine does not return */
      __cxa_call_unexpected();
    }
  }
  return;
}


