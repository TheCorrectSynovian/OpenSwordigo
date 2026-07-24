/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063db28
 * Function: FUN_0063db28
 * Signature: undefined FUN_0063db28(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063db28(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  long extraout_x1;
  long lVar7;
  long extraout_x1_00;
  
  *param_1 = 0;
  if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
                    /* try { // try from 0063db50 to 0073db6b has its CatchHandler @ 0063decc */
    pthread_once((pthread_once_t *)PTR_DAT_007e62c0,FUN_0063d774);
  }
  puVar3 = PTR_DAT_007e5888;
  if (*(long *)PTR_DAT_007e5888 == 0) {
    piVar6 = (int *)&DAT_007fc840;
    FUN_0063cb20(&DAT_007fc840,2);
    puVar4 = PTR_DAT_007e68e0;
                    /* catch() { ... } // from try @ 0063d5c8 with catch @ 0063dc9c */
    *(undefined **)puVar3 = &DAT_007fc840;
    *(undefined **)puVar4 = &DAT_007fc840;
  }
  else {
    piVar6 = *(int **)PTR_DAT_007e68e0;
  }
  *param_1 = piVar6;
                    /* try { // try from 0063db8c to 0073dbb3 has its CatchHandler @ 0063dfc8 */
  if (*(int **)PTR_DAT_007e5888 == piVar6) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      *piVar6 = *piVar6 + 1;
      return;
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
                    /* try { // try from 0063dc70 to 0073dfbf has its CatchHandler @ 0063dfc4 */
    return;
  }
  if (((DAT_007fc2e0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_007fc2e0), iVar5 != 0)) {
    DAT_007fcf40 = 0;
    DAT_007fcf48 = 0;
    DAT_007fcf50 = 0;
    DAT_007fcf58 = 0;
    DAT_007fcf60 = 0;
    __cxa_guard_release(&DAT_007fc2e0);
  }
  if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
                    /* try { // try from 0063dbb4 to 0073dc6f has its CatchHandler @ 0063d4b0 */
    iVar5 = pthread_mutex_lock((pthread_mutex_t *)&DAT_007fcf40);
    puVar3 = PTR_DAT_007e68e0;
    if (iVar5 == 0) {
      piVar6 = *(int **)PTR_DAT_007e68e0;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      *param_1 = *(undefined8 *)puVar3;
      iVar5 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_007fcf40);
      if (iVar5 == 0) {
        return;
      }
      FUN_0061ce80();
      lVar7 = extraout_x1;
    }
    else {
      FUN_0061ce50();
      lVar7 = extraout_x1_00;
    }
    if (lVar7 == -1) {
                    /* WARNING: Subroutine does not return */
      __cxa_call_unexpected();
    }
                    /* WARNING: Subroutine does not return */
    FUN_006818c4();
  }
  piVar6 = *(int **)PTR_DAT_007e68e0;
  *piVar6 = *piVar6 + 1;
  *param_1 = piVar6;
                    /* catch() { ... } // from try @ 0063d688 with catch @ 0063dc4c */
  return;
}


