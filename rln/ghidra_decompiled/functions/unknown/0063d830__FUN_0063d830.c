/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063d830
 * Function: FUN_0063d830
 * Signature: undefined FUN_0063d830(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0063d830(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  char *local_8;
  
                    /* try { // try from 0063d844 to 0073d857 has its CatchHandler @ 0063dee0 */
  FUN_0063d7b8();
  if (((DAT_007fc2e0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_007fc2e0), iVar3 != 0)) {
    DAT_007fcf40 = 0;
    DAT_007fcf48 = 0;
    DAT_007fcf50 = 0;
    DAT_007fcf58 = 0;
    DAT_007fcf60 = 0;
                    /* try { // try from 0063d948 to 0073d953 has its CatchHandler @ 0063dfc8 */
    __cxa_guard_release(&DAT_007fc2e0);
    if (PTR_pthread_create_007e4e78 != (undefined *)0x0) goto LAB_0063d86c;
LAB_0063d954:
                    /* try { // try from 0063d954 to 0073d95b has its CatchHandler @ 0063de9c */
    piVar5 = (int *)*param_2;
                    /* try { // try from 0063d960 to 0073d96b has its CatchHandler @ 0063dfc8 */
    uVar6 = *(undefined8 *)PTR_DAT_007e68e0;
    *piVar5 = *piVar5 + 1;
LAB_0063d8a0:
                    /* try { // try from 0063d8a8 to 0073d8b3 has its CatchHandler @ 0063de4c */
    *(int **)PTR_DAT_007e68e0 = piVar5;
    FUN_0063b81c(&local_8,param_2);
    iVar3 = FUN_006689e0(&local_8,&DAT_0069e5f8);
    if (iVar3 == 0) {
                    /* try { // try from 0063d8d4 to 0073d8fb has its CatchHandler @ 0063ddf8 */
      pcVar4 = local_8 + -0x18;
      if (pcVar4 == PTR_DAT_007e5de8) goto LAB_0063d8e4;
LAB_0063d99c:
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar3 = *(int *)(local_8 + -8);
        *(int *)(local_8 + -8) = iVar3 + -1;
        if (0 < iVar3) goto LAB_0063d8fc;
LAB_0063d9c0:
        operator_delete(pcVar4);
        goto LAB_0063d8e4;
      }
      piVar5 = (int *)(local_8 + -8);
      do {
                    /* try { // try from 0063d9a8 to 0073d9c3 has its CatchHandler @ 0063df30 */
        iVar3 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 < 1) goto LAB_0063d9c0;
    }
    else {
      setlocale(6,local_8);
      pcVar4 = local_8 + -0x18;
      if (pcVar4 != PTR_DAT_007e5de8) goto LAB_0063d99c;
LAB_0063d8e4:
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_0063d8fc;
    }
    iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_007fcf40);
    if (iVar3 == 0) {
LAB_0063d8fc:
      FUN_0063b814(param_1,uVar6);
                    /* try { // try from 0063d91c to 0073d943 has its CatchHandler @ 0063dec0 */
      return param_1;
    }
    auVar7 = FUN_0061ce80();
  }
  else {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_0063d954;
LAB_0063d86c:
    iVar3 = pthread_mutex_lock((pthread_mutex_t *)&DAT_007fcf40);
                    /* try { // try from 0063d878 to 0073d89b has its CatchHandler @ 0063ded0 */
    if (iVar3 == 0) {
      piVar5 = (int *)*param_2;
      uVar6 = *(undefined8 *)PTR_DAT_007e68e0;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      piVar5 = (int *)*param_2;
      goto LAB_0063d8a0;
    }
    uVar6 = FUN_0061ce50();
                    /* try { // try from 0063da04 to 0073da2b has its CatchHandler @ 0063ddfc */
    if ((PTR_pthread_create_007e4e78 == (undefined *)0x0) ||
       (iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_007fcf40), iVar3 == 0))
    goto LAB_0063d9f0;
    auVar7 = FUN_0061ce80();
  }
  uVar6 = auVar7._0_8_;
  if (auVar7._8_8_ == -1) {
                    /* WARNING: Subroutine does not return */
    __cxa_call_unexpected();
  }
LAB_0063d9f0:
                    /* WARNING: Subroutine does not return */
  FUN_006818c4(uVar6);
}


