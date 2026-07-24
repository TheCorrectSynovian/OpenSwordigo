/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063be88
 * Function: FUN_0063be88
 * Signature: undefined FUN_0063be88(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063be88(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  
  pvVar7 = *(void **)(param_1 + 8);
  if (pvVar7 != (void *)0x0) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    if (uVar6 != 0) {
      uVar8 = 0;
      do {
        plVar4 = *(long **)((long)pvVar7 + uVar8 * 8);
        if (plVar4 != (long *)0x0) {
                    /* try { // try from 0063bed4 to 0073beeb has its CatchHandler @ 0063ca84 */
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar5 = (int)plVar4[1];
                    /* try { // try from 0063bf0c to 0073bf1f has its CatchHandler @ 0063ca0c */
            *(int *)(plVar4 + 1) = iVar5 + -1;
          }
          else {
            plVar1 = plVar4 + 1;
            do {
              iVar5 = (int)*plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = iVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
                    /* try { // try from 0063bef0 to 0073bf03 has its CatchHandler @ 0063ca10 */
          if (iVar5 == 1) {
            (**(code **)(*plVar4 + 8))();
          }
          pvVar7 = *(void **)(param_1 + 8);
          uVar6 = *(ulong *)(param_1 + 0x10);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar6);
      if (pvVar7 == (void *)0x0) goto LAB_0063bf24;
    }
    operator_delete__(pvVar7);
  }
LAB_0063bf24:
                    /* try { // try from 0063bf24 to 0073bf37 has its CatchHandler @ 0063ca08 */
  pvVar7 = *(void **)(param_1 + 0x18);
  if (pvVar7 != (void *)0x0) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    if (uVar6 != 0) {
      uVar8 = 0;
      do {
        plVar4 = *(long **)((long)pvVar7 + uVar8 * 8);
        if (plVar4 != (long *)0x0) {
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar5 = (int)plVar4[1];
                    /* try { // try from 0063bf98 to 0073bf9f has its CatchHandler @ 0063cbac */
            *(int *)(plVar4 + 1) = iVar5 + -1;
          }
          else {
            plVar1 = plVar4 + 1;
            do {
              iVar5 = (int)*plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = iVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (iVar5 == 1) {
                    /* try { // try from 0063bf88 to 0073bf8f has its CatchHandler @ 0063cc00 */
            (**(code **)(*plVar4 + 8))();
          }
          pvVar7 = *(void **)(param_1 + 0x18);
          uVar6 = *(ulong *)(param_1 + 0x10);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar6);
      if (pvVar7 == (void *)0x0) goto LAB_0063bfac;
    }
    operator_delete__(pvVar7);
  }
LAB_0063bfac:
  pvVar7 = *(void **)(param_1 + 0x20);
  lVar9 = 0;
  if (pvVar7 != (void *)0x0) {
    do {
      if (*(void **)((long)pvVar7 + lVar9) != (void *)0x0) {
        operator_delete__(*(void **)((long)pvVar7 + lVar9));
        pvVar7 = *(void **)(param_1 + 0x20);
      }
      lVar9 = lVar9 + 8;
    } while (lVar9 != 0x30);
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
      return;
    }
  }
  return;
}


